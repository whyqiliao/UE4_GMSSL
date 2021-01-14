// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GMSSL.h"
#include "CoreMinimal.h"
#include "Misc/Base64.h"
#include "Misc/SecureHash.h"
#include "libcryptAPIsmObject.generated.h"

/// <summary>
/// 加密解密库 
/// </summary>
UCLASS()
class GMSSL_API UlibcryptAPIsmObject : public UObject
{
	GENERATED_UCLASS_BODY()
		~UlibcryptAPIsmObject();

#pragma region ExportlibcryptAPIsmDLLFuntion
	//返回数据解析
	/// <summary>
		/**
	接口所涉及到的数据均为二进制，非十六进制
	返回代码解析：
	-0  ：成功
	-1  ：失败
	-4  ：BASE64解码失败
	-5	：输入参数存在为空的指针。
	-6	：加解密数据长度错误，长度必须大于0，如果是DesCrypt2接口，长度须为16的整数倍。
	-7	：分配内存失败。
	-8	：解密数据长度错误，请检查所输入的解密是否为由DesCrypt1接口加密产生。
	-9	：数据密文错误，请检查所输入的数据密文是否已被破坏。
	-10	：第一个参数数值不正确。
	-11	：指定的返回值数据长度过小。（此时函数会返回所需要的长度值）
	-14 ：输入数据长度不是8的倍数。
	-15 ：指定的输出缓冲区太小。
	-16 ：格式参数不正确。
	-17 ：密钥长度错误。
	-18 ：密文数据有误，预计密文文件已被破坏。
	-19 ：加密标志错误。
	-20 ：打开输入文件出错。
	-21 ：打开输出文件出错。
	-22 ：获取输入文件属性出错。
	-23 ：密钥长度错误（只支持双倍长16和三倍长24的密钥）。
	-24 ：待成生密钥长度不正确，必须为8的整数倍。
	-25 ：待生成的密钥长度不正确。
	-26 ：主密钥长度不正确
	-27 ：找不到libconfig.dll/so
	-28 ：libconfig.dll/so文件不正确
	-29 ：非法访问
	-30	：不支持的format参数值。
	-31	：生成密文文件出错。
	-32	：生成明文文件出错。
	-33	：非加密组件产生的密文文件。
	-34	：输入与输出文件不能相同。
	-35	：读加解密文件出错。
	-36	：获取根密钥失败
	-37	：获取根私钥失败
	-38	：获取根公钥失败
	-39	：长度超出范围
	-40	：GetIntArrayElements失败
	-41 ：私钥与公钥不对应，或者是私钥错误，或者是密文数据有误
	-42 ：DER数据错误
	 */
	 /// </summary>
	typedef int(*_SM4Crypt1)(int flag, char *data, int len, char *redata, int *relen, char *key, int keylen);

	typedef int(*_SM4Crypt2)(int flag, char *data, int len, char *redata, int *relen, char *key, int keylen);

	typedef int(*_CryptFile)(int flag, char *key, int keylen, char * infilename, char *outfilename, int format);

	typedef int(*_CryptKey)(int flag, char * inkey, int inlen, char *outkey, int *outlen);

	typedef int(*_SM3Crypt)(char *data, int len, char *redata, int *relen);

	typedef int(*_MACCrypt)(int flag, char *data, int len, char *key, int keylen, char *redata, int *relen);

	typedef int(*_SM2Sign)(char *data, int len, char *redata, int *relen, char *privkey, int privkeylen, char *pubkey, int pubkeylen);

	typedef int(*_SM2Verify)(char *data, int len, char *verifydata, int verifydatalen, char *pubkey, int pubkeylen);

	typedef int(*_SM2SignHash)(char *data, int len, char *redata, int *relen, char *privkey, int privkeylen);

	typedef int(*_SM2VerifyHash)(char *data, int len, char *verifydata, int verifydatalen, char *pubkey, int pubkeylen);

	typedef int(*_SM2Encrypt)(char *data, int len, char *redata, int *relen, char *pubkey, int pubkeylen);

	typedef int(*_SM2Decrypt)(char *data, int len, char *redata, int *relen, char *privkey, int privkeylen);

	typedef int(*_SM2Genkey)(char *privkey, int *privkeylen, char *pubkey, int *pubkeylen);

	typedef int(*_HextoAsc)(char *hex, int hexlen, char *asc, int *asclen);

	typedef int(*_AsctoHex)(char *asc, int asclen, char *hex, int *hexlen);

	typedef int(*_base64_decode)(const char *bdata, int bdlen, char *ret, int *retlen);

	typedef int(*_base64_encode)(const char *data, int dlen, char *ret, int *retlen);

	typedef int(*_SM2FormatConvert)(int mode, char *cipher, int len, char *out, int *outLen);

	typedef int(*_SM4CBCCrypt)(int flag, char *data, int len, char *redata, int *relen, char *yin, int yinlen, char *iv, int ivlen);


private:


	_SM4Crypt1 DLL_SM4Crypt1 = NULL;
	_SM4Crypt2 DLL_SM4Crypt2 = NULL;
	_CryptFile DLL_CryptFile = NULL;
	_CryptKey DLL_CryptKey = NULL;
	_SM3Crypt DLL_SM3Crypt = NULL;
	_MACCrypt DLL_MACCrypt = NULL;
	_SM2Sign DLL_SM2Sign = NULL;
	_SM2Verify DLL_SM2Verify = NULL;
	_SM2SignHash DLL_SM2SignHash = NULL;
	_SM2VerifyHash DLL_SM2VerifyHash = NULL;
	_SM2Encrypt DLL_SM2Encrypt = NULL;
	_SM2Decrypt DLL_SM2Decrypt = NULL;
	_SM2Genkey DLL_SM2Genkey = NULL;
	_HextoAsc DLL_HextoAsc = NULL;
	_AsctoHex DLL_AsctoHex = NULL;
	_base64_decode DLL_base64_decode = NULL;
	_base64_encode DLL_base64_encode = NULL;
	_SM2FormatConvert DLL_SM2FormatConvert = NULL;
	_SM4CBCCrypt DLL_SM4CBCCrypt = NULL;
#pragma endregion

#pragma region UE4
public:
	// 全局对象，直接通过函数获取
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|UE")
		static UlibcryptAPIsmObject* getlibcryptAPIsmObject();
	static UlibcryptAPIsmObject* _libcryptAPIsmObject;
	/// <summary>
	/// 将hex字符串转成asc码然后转成字节数组再将字节数组Base64
	/// </summary>
	/// <param name="hexstr">Hex字符串</param>
	/// <returns>返回的Base64字符串</returns>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|UE")
		FString AscBase64Encode(FString hexstr);
	/// <summary>
	/// 一般的Base64加密
	/// </summary>
	/// <param name="value">需要加密的字符串</param>
	/// <returns>返回的Base64字符串</returns>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|UE")
		static FString Base64_Encode(FString value);
	/// <summary>
	/// 一般的MD5加密
	/// </summary>
	/// <param name="value">需要加密的字符串</param>
	/// <returns>返回的MD5字符串</returns>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|UE")
		static FString MD5_Encode(FString value);
	/// <summary>
	/// 将字符串转换为字节数组然后再转换为Hex
	/// </summary>
	/// <param name="data">需要进行转换的字符串</param>
	/// <returns>返回的Hex字符串</returns>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|UE")
		FString GetStrHex(const FString& data);
	/// <summary>
	/// 生成自定义长度的随机字符串
	/// </summary>
	/// <param name="len">需要生成的字符串长度</param>
	/// <returns>返回生成的字符串</returns>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|UE")
		FString  GenerateRandomstrInlen(int len);
#pragma endregion

#pragma region SMCrypt
	TArray<uint8> ParseHexToBytes(FString hexStr);
	int Hex2ASC(char *hex, int hexlen, char *asc, int *asclen);
	int ASC2Hex(char *asc, int asclen, char *hex, int *hexlen);
	int CryptKey(int flag, char * inkey, int inlen, char *outkey, int *outlen);

public:
	/// <summary>
	/// 获得返回的数据，返回的数据尾部有问题，需要去除多余字符
	/// </summary>
	/// <param name="backEncryptkey">返回的header里面的Encryptkey</param>
	/// <param name="backBodyCotent">返回的header里面的body</param>
	/// <param name="privateKey">私钥</param>
	/// <returns>返回的数据尾部有问题，需要去除多余字符</returns>
	UFUNCTION(BlueprintCallable, Category = "libcryptAPIsm|GMCrypt")
		FString GetRetData(FString backEncryptkey, FString backBodyCotent, FString privateKey);
	/// <summary>
	/// SM4加解密接口
	/// </summary>
	/// <param name="flag">0为加密，1为解密（只能对本接口加密的密文进行解密）</param>
	/// <param name="data">加解密数据</param>
	/// <param name="retdata">返回数据</param>
	/// <param name="key">加密密钥</param>
	/// <returns>参考返回数据解析</returns>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|GMCrypt")
		int SM4Crypt1(int flag, const FString& data, FString& retdata, FString key);
	/// <summary>
	/// SM2密钥生成
	/// </summary>
	/// <param name="privkey">私钥</param>
	/// <param name="pubkey">公钥</param>
	/// <returns>参考返回数据解析</returns>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|GMCrypt")
		int SM2Genkey(FString& privkey, FString& pubkey);
	/// <summary>
	/// SM4 CBC加密
	/// </summary>
	/// <param name="flag">0加密，PKCS#7填充方式加密 1解密，PKCS#7填充方式解密</param>
	/// <param name="data">待加密数据</param>
	/// <param name="retdata">加密结果</param>
	/// <param name="yin">sm4密钥</param>
	/// <returns>参考返回数据解析</returns>
	UFUNCTION(BlueprintCallable, Category = "libcryptAPIsm|GMCrypt")
		int SM4CBCEncrypt(const FString& data, FString&retdata, FString yin, FString iv);
	UFUNCTION(BlueprintCallable, Category = "libcryptAPIsm|GMCrypt")
		int SM4CBCDecrypt(const FString& data, FString&retdata, FString yin, FString iv);
	/// <summary>
	/// 对原始数据SM2签名
	/// </summary>
	/// <param name="data">待签名数据</param>
	/// <param name="retdata">返回签名结果</param>
	/// <param name="privkey">私钥</param>
	/// <param name="pubkey">公钥</param>
	/// <returns>参考返回数据解析</returns>
	UFUNCTION(BlueprintCallable, Category = "libcryptAPIsm|GMCrypt")
		int SM2Sign(const FString& data, FString&retdata, FString privkey, FString pubkey);
	/// <summary>
	/// SM2验签
	/// </summary>
	/// <param name="pubkey">公钥</param>
	/// <param name="Signeddata">已加密数据</param>
	/// <param name="plaindata">未加密数据</param>
	/// <param name="attestation">真为通过，错为不通过</param>
	/// <returns>参考返回数据解析</returns>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|GMCrypt")
		int SM2Verify(const FString& pubkey, const FString&Signeddata, const FString&plaindata, bool& attestation);
	/// /// <summary>
	/// SM2数据加密
	/// </summary>
	/// <param name="data">待加密数据</param>
	/// <param name="retdata">加密结果</param>
	/// <param name="pubkey">公钥</param>
	/// <returns>参考返回数据解析</returns>
	UFUNCTION(BlueprintCallable, Category = "libcryptAPIsm|GMCrypt")
		int SM2Encrypt(const FString& data, FString&retdata, const FString& pubkey);
	/// <summary>
	/// SM2数据解密
	/// </summary>
	/// <param name="data">待解密数据</param>
	/// <param name="retdata">解密结果</param>
	/// <param name="privkey">私钥</param>
	/// <returns>参考返回数据解析</returns>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|GMCrypt")
		int SM2Decrypt(const FString& data, FString&retdata, const FString& privkey);
	/// <summary>
	/// SM2加密或签名结果格式转换
	/// </summary>
	/// <param name="mode">需要转换的格式</param>
	/// <param name="data">待格式转换数据</param>
	/// <param name="retdata">缓冲区输出转换后的数据</param>
	/// <returns>参考返回数据解析</returns>
		/*当mode为以下值时，对应格式如下：
		* 101		sm2加密密文der格式转c1c3c2格式
		* 102		sm2加密密文c1c3c2格式转der格式
		* 201		sm2签名值der格式转RS格式
		* 202		sm2签名值RS格式转der格式*/
	UFUNCTION(BlueprintCallable, Category = "libcryptAPIsm|GMCrypt")
		int SM2FormatConvert(int mode, const FString& data, FString&retdata);
	/// <summary>
	/// 非本加密组件产生的密钥，则需要用这个接口加密再用
	/// </summary>
	/// <param name="mw_key">非本加密组件产生的密钥</param>
	/// <param name="key_en">返回处理后的密钥</param>
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|GMCrypt")
		void GetCryptKey(const FString&mw_key, FString&key_en);

	// 获得广发提供的公钥，以字节数组展示
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|GMCrypt")
		TArray<uint8> GetCgbOpenPubKey(bool isTestEnv);
	//临时处理方法
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "libcryptAPIsm|GMCrypt")
		FString GetCertId(const FString& pubkey);

#pragma endregion
};
