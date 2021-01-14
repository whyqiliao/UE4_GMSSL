// Fill out your copyright notice in the Description page of Project Settings.
#include "libcryptAPIsmObject.h"
#include <iostream>
#include <ctime>
#include <io.h>
#include <process.h>
#include "FileHelper.h"

UlibcryptAPIsmObject* UlibcryptAPIsmObject::_libcryptAPIsmObject;

FString UlibcryptAPIsmObject::AscBase64Encode(FString hexstr)
{
	TSharedPtr<char> hexstr_ascp(new char[hexstr.Len()]);
	int hexstr_asclen;
	Hex2ASC(TCHAR_TO_UTF8(*hexstr), strlen(TCHAR_TO_UTF8(*hexstr)), hexstr_ascp.Get(), &hexstr_asclen);
	TSharedPtr<uint8> buffer(new uint8[hexstr_asclen]);
	StringToBytes(UTF8_TO_TCHAR(hexstr_ascp.Get()), buffer.Get(), 4096);
	return FBase64::Encode(buffer.Get(), hexstr_asclen);
}

FString UlibcryptAPIsmObject::Base64_Encode(FString value)
{
	return FBase64::Encode(value);
}

FString UlibcryptAPIsmObject::MD5_Encode(FString value)
{
	return FMD5::HashAnsiString(*value);
}

TArray<uint8> UlibcryptAPIsmObject::ParseHexToBytes(FString hexStr)
{
	TArray<uint8> bytes;

	if (hexStr.Contains(" "))
	{
		hexStr = hexStr.Replace(TEXT(" "), TEXT(""));
	}

	if (hexStr.Len() % 2 != 0)
	{
		UE_LOG(LogTemp, Error, TEXT("This is not a valid hex string:%s"), *hexStr);
		return bytes;
	}
	TArray<TCHAR> charArray = hexStr.GetCharArray();
	for (int32 i = 0; i < (charArray.Num() - 1); i++)
	{
		if (CheckTCharIsHex(charArray[i]) == false)
		{
			UE_LOG(LogTemp, Error, TEXT("This is not a valid hex string:%s"), *hexStr);
			return bytes;
		}
	}
	bytes.AddZeroed(hexStr.Len() / 2);
	HexToBytes(hexStr, bytes.GetData());

	return bytes;
}

//ASC和Hexstr之间的切换
int UlibcryptAPIsmObject::Hex2ASC(char *hex, int hexlen, char *asc, int *asclen)
{
	if (DLL_HextoAsc != NULL)
	{
		return DLL_HextoAsc(hex, hexlen, asc, asclen);
	}
	return -1;
}

int UlibcryptAPIsmObject::ASC2Hex(char *asc, int asclen, char *hex, int *hexlen)
{
	if (DLL_AsctoHex != NULL)
	{
		return DLL_AsctoHex(asc, asclen, hex, hexlen);
	}
	return -1;
}

int UlibcryptAPIsmObject::CryptKey(int flag, char * inkey, int inlen, char *outkey, int *outlen)
{
	if (DLL_CryptKey != NULL)
	{
		return DLL_CryptKey(flag, inkey, inlen, outkey, outlen);
	}
	return -1;
}

FString UlibcryptAPIsmObject::GetRetData(FString backEncryptkey, FString backBodyCotent, FString privateKey)
{
	TSharedPtr<char>backEncryptkey_ascp(new char[backEncryptkey.Len()]);
	int backEncryptkey_ascplen;
	Hex2ASC(TCHAR_TO_UTF8(*backEncryptkey), strlen(TCHAR_TO_UTF8(*backEncryptkey)), backEncryptkey_ascp.Get(), &backEncryptkey_ascplen);
	TSharedPtr<char>c1c3c2(new char[1024]);
	int c1c3c2len;
	DLL_SM2FormatConvert(101, backEncryptkey_ascp.Get(), backEncryptkey_ascplen, c1c3c2.Get(), &c1c3c2len);

	TSharedPtr<char> privkey_ascp(new char[256]);
	int privkey_asclen;
	Hex2ASC(TCHAR_TO_UTF8(*privateKey), strlen(TCHAR_TO_UTF8(*privateKey)), privkey_ascp.Get(), &privkey_asclen);

	TSharedPtr<char>sm2decryptdatap(new char[1024]);
	int sm2decryptdatalen;
	DLL_SM2Decrypt(c1c3c2.Get(), c1c3c2len, sm2decryptdatap.Get(), &sm2decryptdatalen, privkey_ascp.Get(), privkey_asclen);

	TSharedPtr<char>backBodyCotent_ascp(new char[backBodyCotent.Len()]);
	int backBodyCotent_ascplen;
	Hex2ASC(TCHAR_TO_UTF8(*backBodyCotent), strlen(TCHAR_TO_UTF8(*backBodyCotent)), backBodyCotent_ascp.Get(), &backBodyCotent_ascplen);

	TSharedPtr<char>cryptKeyp(new char[1024]);
	int cryptKeyplen;
	DLL_CryptKey(0, sm2decryptdatap.Get(), sm2decryptdatalen, cryptKeyp.Get(), &cryptKeyplen);

	TSharedPtr<char>retdatap(new char[4096]);
	int retdataplen;
	DLL_SM4CBCCrypt(1, backBodyCotent_ascp.Get(), backBodyCotent_ascplen, retdatap.Get(), &retdataplen, cryptKeyp.Get(), cryptKeyplen, sm2decryptdatap.Get(), sm2decryptdatalen);
	return UTF8_TO_TCHAR(retdatap.Get());
}

UlibcryptAPIsmObject::UlibcryptAPIsmObject(const FObjectInitializer& objectInitializer) :Super(objectInitializer)
{
	_libcryptAPIsmObject = this;

	if (FGMSSLModule::Get().DLLHandle != nullptr)
	{
		FString procName_SM4Crypt1 = "SM4Crypt1";//function name defined in the DLL
		DLL_SM4Crypt1 = (_SM4Crypt1)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_SM4Crypt1);
		FString procName_SM2Genkey = "SM2Genkey";
		DLL_SM2Genkey = (_SM2Genkey)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_SM2Genkey);
		FString procName_SM4CBCCrypt = "SM4CBCCrypt";
		DLL_SM4CBCCrypt = (_SM4CBCCrypt)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_SM4CBCCrypt);
		FString procName_SM2Sign = "SM2Sign";
		DLL_SM2Sign = (_SM2Sign)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_SM2Sign);
		FString procName_SM2Encrypt = "SM2Encrypt";
		DLL_SM2Encrypt = (_SM2Encrypt)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_SM2Encrypt);
		FString procName_SM2FormatConvert = "SM2FormatConvert";
		DLL_SM2FormatConvert = (_SM2FormatConvert)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_SM2FormatConvert);
		FString procName_AsctoHex = "AsctoHex";
		DLL_AsctoHex = (_AsctoHex)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_AsctoHex);
		FString procName_HextoAsc = "HextoAsc";
		DLL_HextoAsc = (_HextoAsc)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_HextoAsc);
		FString procName_CryptKey = "CryptKey";
		DLL_CryptKey = (_CryptKey)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_CryptKey);
		FString procName_SM2Verify = "SM2Verify";
		DLL_SM2Verify = (_SM2Verify)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_SM2Verify);
		FString procName_SM2Decrypt = "SM2Decrypt";
		DLL_SM2Decrypt = (_SM2Decrypt)FPlatformProcess::GetDllExport(FGMSSLModule::Get().DLLHandle, *procName_SM2Decrypt);
	}
}

UlibcryptAPIsmObject::~UlibcryptAPIsmObject()
{

}

UlibcryptAPIsmObject* UlibcryptAPIsmObject::getlibcryptAPIsmObject()
{
	return _libcryptAPIsmObject;
}

int UlibcryptAPIsmObject::SM4Crypt1(int flag, const FString& data, FString& retdata, FString key)
{
	if (DLL_SM4Crypt1 != NULL)
	{
		if (flag == 0)
		{
			TSharedPtr<char> c_cipherStrp(new char[1024]);
			int c_cipherLen;
			int retcode = DLL_SM4Crypt1(0, TCHAR_TO_UTF8(*data), strlen(TCHAR_TO_UTF8(*data)), c_cipherStrp.Get(), &c_cipherLen, TCHAR_TO_UTF8(*key), strlen(TCHAR_TO_UTF8(*key)));

			TSharedPtr<char> retdata_hexp(new char[1024]);
			int c_cipherLen_hex;
			ASC2Hex(c_cipherStrp.Get(), c_cipherLen, retdata_hexp.Get(), &c_cipherLen_hex);

			retdata = UTF8_TO_TCHAR(retdata_hexp.Get());
			return retcode;
		}
		else if (flag == 1)
		{
			TSharedPtr<char> data_ascp(new char[1024]);
			int data_ascplen;
			Hex2ASC(TCHAR_TO_UTF8(*data), strlen(TCHAR_TO_UTF8(*data)), data_ascp.Get(), &data_ascplen);

			TSharedPtr<char> c_plainStr(new char[1024]);
			int c_plainLen;
			int retcode = DLL_SM4Crypt1(1, data_ascp.Get(), data_ascplen, c_plainStr.Get(), &c_plainLen, TCHAR_TO_UTF8(*key), strlen(TCHAR_TO_UTF8(*key)));

			retdata = UTF8_TO_TCHAR(c_plainStr.Get());
			return retcode;
		}

	}
	UE_LOG(LogTemp, Error, TEXT("fail to export dll function SM4Crypt1!"));
	return -1;
}

int UlibcryptAPIsmObject::SM2Genkey(FString& privkey, FString& pubkey)
{
	if (DLL_SM2Genkey != NULL)
	{

		TSharedPtr<char> c_privkey(new char[32]);
		TSharedPtr<char> c_pubkey(new char[64]);
		int c_privkeyLen;
		int c_pubkeyLen;
		int retcode = DLL_SM2Genkey(c_privkey.Get(), &c_privkeyLen, c_pubkey.Get(), &c_pubkeyLen);


		TSharedPtr<char> c_privkey_hexp(new char[64]);
		int c_privkeyLen_hex;

		TSharedPtr<char> c_pubkey_hexp(new char[128]);
		int c_pubkeyLen_hex;

		ASC2Hex(c_privkey.Get(), c_privkeyLen, c_privkey_hexp.Get(), &c_privkeyLen_hex);
		ASC2Hex(c_pubkey.Get(), c_pubkeyLen, c_pubkey_hexp.Get(), &c_pubkeyLen_hex);

		privkey = UTF8_TO_TCHAR(c_privkey_hexp.Get());
		pubkey = UTF8_TO_TCHAR(c_pubkey_hexp.Get());
		return retcode;
	}
	UE_LOG(LogTemp, Error, TEXT("fail to export dll function SM2Genkey!"));
	return -1;
}


int UlibcryptAPIsmObject::SM4CBCEncrypt(const FString& data, FString&retdata, FString yin, FString iv)
{
	if (DLL_SM4CBCCrypt != NULL)
	{
		TSharedPtr<char> sm4Key_ascp(new char[64]);
		int sm4keyasclen;
		Hex2ASC(TCHAR_TO_UTF8(*yin), strlen(TCHAR_TO_UTF8(*yin)), sm4Key_ascp.Get(), &sm4keyasclen);

		TSharedPtr<char> iv_ascp(new char[64]);
		int iv_asclen;
		Hex2ASC(TCHAR_TO_UTF8(*iv), strlen(TCHAR_TO_UTF8(*iv)), iv_ascp.Get(), &iv_asclen);

		TSharedPtr<char> c_cipherStrp(new char[1024]);
		int c_cipherLen;

		int retcode = DLL_CryptKey(0, sm4Key_ascp.Get(), sm4keyasclen, c_cipherStrp.Get(), &c_cipherLen);
		if (retcode != 0)
		{
			UE_LOG(LogTemp, Error, TEXT("SM4CBCEncrypt fail to Crypt key ! retcode[%d]"), retcode);
			return -1;
		}

		TSharedPtr<char> retdata_ascp(new char[1024]);
		int retdata_asclen;

		retcode = DLL_SM4CBCCrypt(0, TCHAR_TO_UTF8(*data), strlen(TCHAR_TO_UTF8(*data)), retdata_ascp.Get(), &retdata_asclen, c_cipherStrp.Get(), c_cipherLen, iv_ascp.Get(), iv_asclen);

		if (retcode != 0)
		{
			UE_LOG(LogTemp, Error, TEXT("fail to SM4CBCCrypt ! retcode[%d]"), retcode);
			return -1;
		}

		TSharedPtr<char> retdatap(new char[1024]);
		int retdatalen;
		ASC2Hex(retdata_ascp.Get(), retdata_asclen, retdatap.Get(), &retdatalen);
		retdata = FString(UTF8_TO_TCHAR(retdatap.Get()), 1);
		return retcode;
	}
	UE_LOG(LogTemp, Error, TEXT("fail to export dll function SM4CBCCrypt!"));
	return -1;
}

int UlibcryptAPIsmObject::SM4CBCDecrypt(const FString& data, FString&retdata, FString yin, FString iv)
{
	if (DLL_SM4CBCCrypt != NULL)
	{
		TSharedPtr<char> sm4Key_ascp(new char[64]);
		int sm4keyasclen;
		Hex2ASC(TCHAR_TO_UTF8(*yin), strlen(TCHAR_TO_UTF8(*yin)), sm4Key_ascp.Get(), &sm4keyasclen);

		TSharedPtr<char> iv_ascp(new char[64]);
		int iv_asclen;
		Hex2ASC(TCHAR_TO_UTF8(*iv), strlen(TCHAR_TO_UTF8(*iv)), iv_ascp.Get(), &iv_asclen);


		TSharedPtr<char> c_cipherStrp(new char[64]);
		int c_cipherLen;

		int retcode = DLL_CryptKey(0, sm4Key_ascp.Get(), sm4keyasclen, c_cipherStrp.Get(), &c_cipherLen);

		if (retcode != 0)
		{
			UE_LOG(LogTemp, Error, TEXT("fail to Crypt key ! retcode[%d]"), retcode);
			return -1;
		}

		TSharedPtr<char> data_ascp(new char[data.Len()]);
		int data_asclen;
		Hex2ASC(TCHAR_TO_UTF8(*data), strlen(TCHAR_TO_UTF8(*data)), data_ascp.Get(), &data_asclen);


		TSharedPtr<char> c_plainStrp(new char[data.Len()]);
		int c_plainLen;

		retcode = DLL_SM4CBCCrypt(1, data_ascp.Get(), data_asclen, c_plainStrp.Get(), &c_plainLen, c_cipherStrp.Get(), c_cipherLen, iv_ascp.Get(), iv_asclen);

		if (retcode != 0)
		{
			UE_LOG(LogTemp, Error, TEXT("fail to DeCrypt ! retcode[%d]"), retcode);
			return -1;
		}
		else
		{
			retdata = UTF8_TO_TCHAR(c_plainStrp.Get());
			return retcode;
		}
	}
	UE_LOG(LogTemp, Error, TEXT("fail to export dll function SM4CBCCrypt!"));
	return -1;
}

int UlibcryptAPIsmObject::SM2Sign(const FString& data, FString&retdata, FString privkey, FString pubkey)
{
	if (DLL_SM2Sign != NULL)
	{

		TSharedPtr<char>data_ascp(new char[1024]);
		TSharedPtr<char> pubkey_ascp(new char[pubkey.Len()]);
		int pubkey_asclen;
		Hex2ASC(TCHAR_TO_UTF8(*pubkey), strlen(TCHAR_TO_UTF8(*pubkey)), pubkey_ascp.Get(), &pubkey_asclen);

		TSharedPtr<char> privkey_ascp(new char[privkey.Len()]);
		int privkey_asclen;
		Hex2ASC(TCHAR_TO_UTF8(*privkey), strlen(TCHAR_TO_UTF8(*privkey)), privkey_ascp.Get(), &privkey_asclen);

		TSharedPtr<char> c_signValuep(new char[1024]);
		int c_signLen;
		int retcode = DLL_SM2Sign(TCHAR_TO_UTF8(*data), strlen(TCHAR_TO_UTF8(*data)), c_signValuep.Get(), &c_signLen, privkey_ascp.Get(), privkey_asclen, pubkey_ascp.Get(), pubkey_asclen);
		if (retcode != 0)
		{
			UE_LOG(LogTemp, Error, TEXT("fail to SM2Sign ! retcode[%d]"), retcode);
			return -1;
		}
		TSharedPtr<char>retdatap(new char[1024]);
		int retdatalen;
		ASC2Hex(c_signValuep.Get(), c_signLen, retdatap.Get(), &retdatalen);
		retdata = UTF8_TO_TCHAR(retdatap.Get());
		return retcode;
	}
	UE_LOG(LogTemp, Error, TEXT("fail to export dll function SM2Sign!"));
	return -1;
}

int UlibcryptAPIsmObject::SM2Verify(const FString& pubkey, const FString&Signeddata, const FString&plaindata, bool& attestation)
{
	if (DLL_SM2Verify != NULL)
	{
		TSharedPtr<char> pubkey_ascp(new char[pubkey.Len()]);
		int pubkey_ascplen;
		Hex2ASC(TCHAR_TO_UTF8(*pubkey), strlen(TCHAR_TO_UTF8(*pubkey)), pubkey_ascp.Get(), &pubkey_ascplen);

		int retcode = DLL_SM2Verify(TCHAR_TO_UTF8(*plaindata), strlen(TCHAR_TO_UTF8(*plaindata)), TCHAR_TO_UTF8(*Signeddata), strlen(TCHAR_TO_UTF8(*Signeddata)), pubkey_ascp.Get(), pubkey_ascplen);
		if (retcode != 0)
		{
			UE_LOG(LogTemp, Error, TEXT("fail to SM2Verify ! retcode[%d]"), retcode);
			attestation = false;
			return -1;
		}
		attestation = true;
		return retcode;
	}
	UE_LOG(LogTemp, Error, TEXT("fail to export dll function SM2Verify!"));
	return -1;
}

int UlibcryptAPIsmObject::SM2Encrypt(const FString& data, FString&retdata, const FString& pubkey)
{
	if (DLL_SM2Encrypt != NULL)
	{
		TSharedPtr<char>data_ascp(new char[data.Len()]);
		int data_ascplen;
		Hex2ASC(TCHAR_TO_UTF8(*data), strlen(TCHAR_TO_UTF8(*data)), data_ascp.Get(), &data_ascplen);

		TSharedPtr<char> pubkey_ascp(new char[pubkey.Len()]);
		int pubkey_asclen;
		Hex2ASC(TCHAR_TO_UTF8(*pubkey), strlen(TCHAR_TO_UTF8(*pubkey)), pubkey_ascp.Get(), &pubkey_asclen);

		TSharedPtr<char> retdatap(new char[data.Len() + 128]);
		int retdatalen;
		int retcode = DLL_SM2Encrypt(data_ascp.Get(), data_ascplen, retdatap.Get(), &retdatalen, pubkey_ascp.Get(), pubkey_asclen);

		if (retcode != 0)
		{
			UE_LOG(LogTemp, Error, TEXT("fail to SM2Encrypt ! retcode[%d]"), retcode);
			return -1;
		}
		else
		{
			TSharedPtr<char> retdata_hexp(new char[1024]);
			int retdata_hexplen;
			ASC2Hex(retdatap.Get(), retdatalen, retdata_hexp.Get(), &retdata_hexplen);
			retdata = UTF8_TO_TCHAR(retdata_hexp.Get());
			return retcode;
		}

	}
	UE_LOG(LogTemp, Error, TEXT("fail to export dll function SM2Encrypt!"));
	return -1;
}

int UlibcryptAPIsmObject::SM2Decrypt(const FString& data, FString&retdata, const FString& privkey)
{
	if (DLL_SM2Decrypt != NULL)
	{
		TSharedPtr<char> data_ascp(new char[1024]);
		int data_asclen;
		Hex2ASC(TCHAR_TO_UTF8(*data), strlen(TCHAR_TO_UTF8(*data)), data_ascp.Get(), &data_asclen);

		TSharedPtr<char> privkey_ascp(new char[1024]);
		int privkey_asclen;
		Hex2ASC(TCHAR_TO_UTF8(*privkey), strlen(TCHAR_TO_UTF8(*privkey)), privkey_ascp.Get(), &privkey_asclen);

		TSharedPtr<char> retdatap(new char[data.Len() + 128]);
		int retdatap_len;

		int retcode = DLL_SM2Decrypt(data_ascp.Get(), data_asclen, retdatap.Get(), &retdatap_len, privkey_ascp.Get(), privkey_asclen);

		if (retcode != 0)
		{
			UE_LOG(LogTemp, Error, TEXT("fail to SM2Decrypt ! retcode[%d]"), retcode);
			return -1;
		}

		retdata = UTF8_TO_TCHAR(retdatap.Get());
		return retcode;
	}
	UE_LOG(LogTemp, Error, TEXT("fail to export dll function SM2Decrypt!"));
	return -1;
}

int UlibcryptAPIsmObject::SM2FormatConvert(int mode, const FString& data, FString&retdata)
{
	if (DLL_SM2FormatConvert != NULL)
	{
		if (mode == 101 || mode == 102 || mode == 201 || mode == 202)
		{
			TSharedPtr<char> data_ascp(new char[1024]);
			int data_asclen;
			Hex2ASC(TCHAR_TO_UTF8(*data), strlen(TCHAR_TO_UTF8(*data)), data_ascp.Get(), &data_asclen);

			TSharedPtr<char> retdatap(new char[4096]);
			int retdatap_len;
			int retcode = DLL_SM2FormatConvert(mode, data_ascp.Get(), data_asclen, retdatap.Get(), &retdatap_len);
			if (retcode != 0)
			{
				UE_LOG(LogTemp, Error, TEXT("fail to SM2FormatConvert ! retcode[%d]"), retcode);
				return -1;
			}
			TSharedPtr<char>retdata_hexp(new char[2048]);
			int retdata_hexplen;
			ASC2Hex(retdatap.Get(), retdatap_len, retdata_hexp.Get(), &retdata_hexplen);

			retdata = UTF8_TO_TCHAR(retdata_hexp.Get());
			return retcode;
		}

		UE_LOG(LogTemp, Error, TEXT("please enter mode 101/102/201/202! ur currently using %d"), mode);
		return -1;
	}
	UE_LOG(LogTemp, Error, TEXT("fail to export dll function SM2FormatConvert!"));
	return -1;
}

FString UlibcryptAPIsmObject::GenerateRandomstrInlen(int len)
{
	std::string tmp_s;
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	srand((unsigned)time(NULL) * getpid());

	for (int i = 0; i < len; ++i)
		tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];


	return tmp_s.c_str();
}

TArray<uint8> UlibcryptAPIsmObject::GetCgbOpenPubKey(bool isTestEnv)
{
	TArray<uint8> result;
	FString BaseDir = FPaths::ProjectContentDir();
	if (FPaths::FileExists(FPaths::Combine(*BaseDir, isTestEnv ? TEXT("GFPubKey/Test/cgb-open.puk") : TEXT("GFPubKey/Product/cgb-open.puk"))))
	{
		FFileHelper::LoadFileToArray(result, *FPaths::Combine(FPaths::Combine(*BaseDir, isTestEnv ? TEXT("GFPubKey/Test/cgb-open.puk") : TEXT("GFPubKey/Product/cgb-open.puk"))), NULL);
	}
	return result;
}

FString UlibcryptAPIsmObject::GetStrHex(const FString& data)
{
	TSharedPtr<char> retdata_hexp(new char[data.Len()]);
	int retdata_hexplen;
	ASC2Hex(TCHAR_TO_UTF8(*data), strlen(TCHAR_TO_UTF8(*data)), retdata_hexp.Get(), &retdata_hexplen);
	return UTF8_TO_TCHAR(retdata_hexp.Get());
}

void UlibcryptAPIsmObject::GetCryptKey(const FString&mw_key, FString&key_en)
{
	TSharedPtr<char> mw_keyascp(new char[1024]);
	int mw_keyasclen;
	Hex2ASC(TCHAR_TO_UTF8(*mw_key), strlen(TCHAR_TO_UTF8(*mw_key)), mw_keyascp.Get(), &mw_keyasclen);

	TSharedPtr<char> c_cipherStrp(new char[1024]);
	int c_cipherLen;
	CryptKey(0, mw_keyascp.Get(), mw_keyasclen, c_cipherStrp.Get(), &c_cipherLen);
	key_en = UTF8_TO_TCHAR(c_cipherStrp.Get());
}

FString UlibcryptAPIsmObject::GetCertId(const FString& pubkey)
{
	//FString pubkey_asc;
	//char *pubkey_ascp = TCHAR_TO_UTF8(*pubkey_asc);
	//int pubkey_ascplen;
	//Hex2ASC(TCHAR_TO_UTF8(*pubkey), strlen(TCHAR_TO_UTF8(*pubkey)), pubkey_ascp, &pubkey_ascplen);


	//FString result = UTF8_TO_TCHAR(pubkey_ascp);

	uint8 Digest[16];
	FMD5 md5gen;
	md5gen.Update((unsigned char*)TCHAR_TO_UTF8(*pubkey), FCString::Strlen(*pubkey));
	md5gen.Final(Digest);

	FString md5;
	for (int i = 0; i < 16; i++)
	{
		md5 += FString::Printf(TEXT("%02x"), Digest[i]);
	}
	return md5;
}
