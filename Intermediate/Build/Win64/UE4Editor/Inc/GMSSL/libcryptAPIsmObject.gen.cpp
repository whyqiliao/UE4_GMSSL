// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMSSL/Public/libcryptAPIsmObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodelibcryptAPIsmObject() {}
// Cross Module References
	GMSSL_API UClass* Z_Construct_UClass_UlibcryptAPIsmObject_NoRegister();
	GMSSL_API UClass* Z_Construct_UClass_UlibcryptAPIsmObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GMSSL();
// End Cross Module References
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execGetCertId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pubkey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCertId(Z_Param_pubkey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execGetCgbOpenPubKey)
	{
		P_GET_UBOOL(Z_Param_isTestEnv);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetCgbOpenPubKey(Z_Param_isTestEnv);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execGetCryptKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_mw_key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_key_en);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCryptKey(Z_Param_mw_key,Z_Param_Out_key_en);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execSM2FormatConvert)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_mode);
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_retdata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SM2FormatConvert(Z_Param_mode,Z_Param_data,Z_Param_Out_retdata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execSM2Decrypt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_retdata);
		P_GET_PROPERTY(FStrProperty,Z_Param_privkey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SM2Decrypt(Z_Param_data,Z_Param_Out_retdata,Z_Param_privkey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execSM2Encrypt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_retdata);
		P_GET_PROPERTY(FStrProperty,Z_Param_pubkey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SM2Encrypt(Z_Param_data,Z_Param_Out_retdata,Z_Param_pubkey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execSM2Verify)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pubkey);
		P_GET_PROPERTY(FStrProperty,Z_Param_Signeddata);
		P_GET_PROPERTY(FStrProperty,Z_Param_plaindata);
		P_GET_UBOOL_REF(Z_Param_Out_attestation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SM2Verify(Z_Param_pubkey,Z_Param_Signeddata,Z_Param_plaindata,Z_Param_Out_attestation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execSM2Sign)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_retdata);
		P_GET_PROPERTY(FStrProperty,Z_Param_privkey);
		P_GET_PROPERTY(FStrProperty,Z_Param_pubkey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SM2Sign(Z_Param_data,Z_Param_Out_retdata,Z_Param_privkey,Z_Param_pubkey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execSM4CBCDecrypt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_retdata);
		P_GET_PROPERTY(FStrProperty,Z_Param_yin);
		P_GET_PROPERTY(FStrProperty,Z_Param_iv);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SM4CBCDecrypt(Z_Param_data,Z_Param_Out_retdata,Z_Param_yin,Z_Param_iv);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execSM4CBCEncrypt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_retdata);
		P_GET_PROPERTY(FStrProperty,Z_Param_yin);
		P_GET_PROPERTY(FStrProperty,Z_Param_iv);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SM4CBCEncrypt(Z_Param_data,Z_Param_Out_retdata,Z_Param_yin,Z_Param_iv);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execSM2Genkey)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_privkey);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_pubkey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SM2Genkey(Z_Param_Out_privkey,Z_Param_Out_pubkey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execSM4Crypt1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_flag);
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_retdata);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SM4Crypt1(Z_Param_flag,Z_Param_data,Z_Param_Out_retdata,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execGetRetData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_backEncryptkey);
		P_GET_PROPERTY(FStrProperty,Z_Param_backBodyCotent);
		P_GET_PROPERTY(FStrProperty,Z_Param_privateKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRetData(Z_Param_backEncryptkey,Z_Param_backBodyCotent,Z_Param_privateKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execGenerateRandomstrInlen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_len);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateRandomstrInlen(Z_Param_len);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execGetStrHex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStrHex(Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execMD5_Encode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UlibcryptAPIsmObject::MD5_Encode(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execBase64_Encode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UlibcryptAPIsmObject::Base64_Encode(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execAscBase64Encode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hexstr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->AscBase64Encode(Z_Param_hexstr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UlibcryptAPIsmObject::execgetlibcryptAPIsmObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UlibcryptAPIsmObject**)Z_Param__Result=UlibcryptAPIsmObject::getlibcryptAPIsmObject();
		P_NATIVE_END;
	}
	void UlibcryptAPIsmObject::StaticRegisterNativesUlibcryptAPIsmObject()
	{
		UClass* Class = UlibcryptAPIsmObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AscBase64Encode", &UlibcryptAPIsmObject::execAscBase64Encode },
			{ "Base64_Encode", &UlibcryptAPIsmObject::execBase64_Encode },
			{ "GenerateRandomstrInlen", &UlibcryptAPIsmObject::execGenerateRandomstrInlen },
			{ "GetCertId", &UlibcryptAPIsmObject::execGetCertId },
			{ "GetCgbOpenPubKey", &UlibcryptAPIsmObject::execGetCgbOpenPubKey },
			{ "GetCryptKey", &UlibcryptAPIsmObject::execGetCryptKey },
			{ "getlibcryptAPIsmObject", &UlibcryptAPIsmObject::execgetlibcryptAPIsmObject },
			{ "GetRetData", &UlibcryptAPIsmObject::execGetRetData },
			{ "GetStrHex", &UlibcryptAPIsmObject::execGetStrHex },
			{ "MD5_Encode", &UlibcryptAPIsmObject::execMD5_Encode },
			{ "SM2Decrypt", &UlibcryptAPIsmObject::execSM2Decrypt },
			{ "SM2Encrypt", &UlibcryptAPIsmObject::execSM2Encrypt },
			{ "SM2FormatConvert", &UlibcryptAPIsmObject::execSM2FormatConvert },
			{ "SM2Genkey", &UlibcryptAPIsmObject::execSM2Genkey },
			{ "SM2Sign", &UlibcryptAPIsmObject::execSM2Sign },
			{ "SM2Verify", &UlibcryptAPIsmObject::execSM2Verify },
			{ "SM4CBCDecrypt", &UlibcryptAPIsmObject::execSM4CBCDecrypt },
			{ "SM4CBCEncrypt", &UlibcryptAPIsmObject::execSM4CBCEncrypt },
			{ "SM4Crypt1", &UlibcryptAPIsmObject::execSM4Crypt1 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics
	{
		struct libcryptAPIsmObject_eventAscBase64Encode_Parms
		{
			FString hexstr;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hexstr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventAscBase64Encode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::NewProp_hexstr = { "hexstr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventAscBase64Encode_Parms, hexstr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::NewProp_hexstr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|UE" },
		{ "Comment", "/// <summary>\n/// \xe5\xb0\x86hex\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xbd\xac\xe6\x88\x90""asc\xe7\xa0\x81\xe7\x84\xb6\xe5\x90\x8e\xe8\xbd\xac\xe6\x88\x90\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84\xe5\x86\x8d\xe5\xb0\x86\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84""Base64\n/// </summary>\n/// <param name=\"hexstr\">Hex\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</param>\n/// <returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84""Base64\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\n\xe5\xb0\x86hex\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xbd\xac\xe6\x88\x90""asc\xe7\xa0\x81\xe7\x84\xb6\xe5\x90\x8e\xe8\xbd\xac\xe6\x88\x90\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84\xe5\x86\x8d\xe5\xb0\x86\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84""Base64\n</summary>\n<param name=\"hexstr\">Hex\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</param>\n<returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84""Base64\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "AscBase64Encode", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventAscBase64Encode_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics
	{
		struct libcryptAPIsmObject_eventBase64_Encode_Parms
		{
			FString value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventBase64_Encode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventBase64_Encode_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|UE" },
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x80\xe8\x88\xac\xe7\x9a\x84""Base64\xe5\x8a\xa0\xe5\xaf\x86\n/// </summary>\n/// <param name=\"value\">\xe9\x9c\x80\xe8\xa6\x81\xe5\x8a\xa0\xe5\xaf\x86\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</param>\n/// <returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84""Base64\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\n\xe4\xb8\x80\xe8\x88\xac\xe7\x9a\x84""Base64\xe5\x8a\xa0\xe5\xaf\x86\n</summary>\n<param name=\"value\">\xe9\x9c\x80\xe8\xa6\x81\xe5\x8a\xa0\xe5\xaf\x86\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</param>\n<returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84""Base64\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "Base64_Encode", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventBase64_Encode_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics
	{
		struct libcryptAPIsmObject_eventGenerateRandomstrInlen_Parms
		{
			int32 len;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_len;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGenerateRandomstrInlen_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::NewProp_len = { "len", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGenerateRandomstrInlen_Parms, len), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::NewProp_len,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|UE" },
		{ "Comment", "/// <summary>\n/// \xe7\x94\x9f\xe6\x88\x90\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x95\xbf\xe5\xba\xa6\xe7\x9a\x84\xe9\x9a\x8f\xe6\x9c\xba\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n/// </summary>\n/// <param name=\"len\">\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe9\x95\xbf\xe5\xba\xa6</param>\n/// <returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\n\xe7\x94\x9f\xe6\x88\x90\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe9\x95\xbf\xe5\xba\xa6\xe7\x9a\x84\xe9\x9a\x8f\xe6\x9c\xba\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n</summary>\n<param name=\"len\">\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe9\x95\xbf\xe5\xba\xa6</param>\n<returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x94\x9f\xe6\x88\x90\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "GenerateRandomstrInlen", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventGenerateRandomstrInlen_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics
	{
		struct libcryptAPIsmObject_eventGetCertId_Parms
		{
			FString pubkey;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pubkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pubkey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetCertId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::NewProp_pubkey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::NewProp_pubkey = { "pubkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetCertId_Parms, pubkey), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::NewProp_pubkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::NewProp_pubkey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::NewProp_pubkey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "//\xe4\xb8\xb4\xe6\x97\xb6\xe5\xa4\x84\xe7\x90\x86\xe6\x96\xb9\xe6\xb3\x95\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "\xe4\xb8\xb4\xe6\x97\xb6\xe5\xa4\x84\xe7\x90\x86\xe6\x96\xb9\xe6\xb3\x95" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "GetCertId", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventGetCertId_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics
	{
		struct libcryptAPIsmObject_eventGetCgbOpenPubKey_Parms
		{
			bool isTestEnv;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static void NewProp_isTestEnv_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTestEnv;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetCgbOpenPubKey_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::NewProp_isTestEnv_SetBit(void* Obj)
	{
		((libcryptAPIsmObject_eventGetCgbOpenPubKey_Parms*)Obj)->isTestEnv = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::NewProp_isTestEnv = { "isTestEnv", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(libcryptAPIsmObject_eventGetCgbOpenPubKey_Parms), &Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::NewProp_isTestEnv_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::NewProp_isTestEnv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "// \xe8\x8e\xb7\xe5\xbe\x97\xe5\xb9\xbf\xe5\x8f\x91\xe6\x8f\x90\xe4\xbe\x9b\xe7\x9a\x84\xe5\x85\xac\xe9\x92\xa5\xef\xbc\x8c\xe4\xbb\xa5\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84\xe5\xb1\x95\xe7\xa4\xba\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "\xe8\x8e\xb7\xe5\xbe\x97\xe5\xb9\xbf\xe5\x8f\x91\xe6\x8f\x90\xe4\xbe\x9b\xe7\x9a\x84\xe5\x85\xac\xe9\x92\xa5\xef\xbc\x8c\xe4\xbb\xa5\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84\xe5\xb1\x95\xe7\xa4\xba" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "GetCgbOpenPubKey", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventGetCgbOpenPubKey_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics
	{
		struct libcryptAPIsmObject_eventGetCryptKey_Parms
		{
			FString mw_key;
			FString key_en;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key_en;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mw_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mw_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::NewProp_key_en = { "key_en", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetCryptKey_Parms, key_en), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::NewProp_mw_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::NewProp_mw_key = { "mw_key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetCryptKey_Parms, mw_key), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::NewProp_mw_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::NewProp_mw_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::NewProp_key_en,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::NewProp_mw_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/// <summary>\n/// \xe9\x9d\x9e\xe6\x9c\xac\xe5\x8a\xa0\xe5\xaf\x86\xe7\xbb\x84\xe4\xbb\xb6\xe4\xba\xa7\xe7\x94\x9f\xe7\x9a\x84\xe5\xaf\x86\xe9\x92\xa5\xef\xbc\x8c\xe5\x88\x99\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\x8e\xa5\xe5\x8f\xa3\xe5\x8a\xa0\xe5\xaf\x86\xe5\x86\x8d\xe7\x94\xa8\n/// </summary>\n/// <param name=\"mw_key\">\xe9\x9d\x9e\xe6\x9c\xac\xe5\x8a\xa0\xe5\xaf\x86\xe7\xbb\x84\xe4\xbb\xb6\xe4\xba\xa7\xe7\x94\x9f\xe7\x9a\x84\xe5\xaf\x86\xe9\x92\xa5</param>\n/// <param name=\"key_en\">\xe8\xbf\x94\xe5\x9b\x9e\xe5\xa4\x84\xe7\x90\x86\xe5\x90\x8e\xe7\x9a\x84\xe5\xaf\x86\xe9\x92\xa5</param>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\n\xe9\x9d\x9e\xe6\x9c\xac\xe5\x8a\xa0\xe5\xaf\x86\xe7\xbb\x84\xe4\xbb\xb6\xe4\xba\xa7\xe7\x94\x9f\xe7\x9a\x84\xe5\xaf\x86\xe9\x92\xa5\xef\xbc\x8c\xe5\x88\x99\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe6\x8e\xa5\xe5\x8f\xa3\xe5\x8a\xa0\xe5\xaf\x86\xe5\x86\x8d\xe7\x94\xa8\n</summary>\n<param name=\"mw_key\">\xe9\x9d\x9e\xe6\x9c\xac\xe5\x8a\xa0\xe5\xaf\x86\xe7\xbb\x84\xe4\xbb\xb6\xe4\xba\xa7\xe7\x94\x9f\xe7\x9a\x84\xe5\xaf\x86\xe9\x92\xa5</param>\n<param name=\"key_en\">\xe8\xbf\x94\xe5\x9b\x9e\xe5\xa4\x84\xe7\x90\x86\xe5\x90\x8e\xe7\x9a\x84\xe5\xaf\x86\xe9\x92\xa5</param>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "GetCryptKey", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventGetCryptKey_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics
	{
		struct libcryptAPIsmObject_eventgetlibcryptAPIsmObject_Parms
		{
			UlibcryptAPIsmObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventgetlibcryptAPIsmObject_Parms, ReturnValue), Z_Construct_UClass_UlibcryptAPIsmObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|UE" },
		{ "Comment", "// \xe5\x85\xa8\xe5\xb1\x80\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe9\x80\x9a\xe8\xbf\x87\xe5\x87\xbd\xe6\x95\xb0\xe8\x8e\xb7\xe5\x8f\x96\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "\xe5\x85\xa8\xe5\xb1\x80\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x8c\xe7\x9b\xb4\xe6\x8e\xa5\xe9\x80\x9a\xe8\xbf\x87\xe5\x87\xbd\xe6\x95\xb0\xe8\x8e\xb7\xe5\x8f\x96" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "getlibcryptAPIsmObject", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventgetlibcryptAPIsmObject_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics
	{
		struct libcryptAPIsmObject_eventGetRetData_Parms
		{
			FString backEncryptkey;
			FString backBodyCotent;
			FString privateKey;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_privateKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_backBodyCotent;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_backEncryptkey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetRetData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::NewProp_privateKey = { "privateKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetRetData_Parms, privateKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::NewProp_backBodyCotent = { "backBodyCotent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetRetData_Parms, backBodyCotent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::NewProp_backEncryptkey = { "backEncryptkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetRetData_Parms, backEncryptkey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::NewProp_privateKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::NewProp_backBodyCotent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::NewProp_backEncryptkey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/// <summary>\n/// \xe8\x8e\xb7\xe5\xbe\x97\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe5\xb0\xbe\xe9\x83\xa8\xe6\x9c\x89\xe9\x97\xae\xe9\xa2\x98\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe5\x8e\xbb\xe9\x99\xa4\xe5\xa4\x9a\xe4\xbd\x99\xe5\xad\x97\xe7\xac\xa6\n/// </summary>\n/// <param name=\"backEncryptkey\">\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84header\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84""Encryptkey</param>\n/// <param name=\"backBodyCotent\">\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84header\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84""body</param>\n/// <param name=\"privateKey\">\xe7\xa7\x81\xe9\x92\xa5</param>\n/// <returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe5\xb0\xbe\xe9\x83\xa8\xe6\x9c\x89\xe9\x97\xae\xe9\xa2\x98\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe5\x8e\xbb\xe9\x99\xa4\xe5\xa4\x9a\xe4\xbd\x99\xe5\xad\x97\xe7\xac\xa6</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\n\xe8\x8e\xb7\xe5\xbe\x97\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe5\xb0\xbe\xe9\x83\xa8\xe6\x9c\x89\xe9\x97\xae\xe9\xa2\x98\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe5\x8e\xbb\xe9\x99\xa4\xe5\xa4\x9a\xe4\xbd\x99\xe5\xad\x97\xe7\xac\xa6\n</summary>\n<param name=\"backEncryptkey\">\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84header\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84""Encryptkey</param>\n<param name=\"backBodyCotent\">\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84header\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84""body</param>\n<param name=\"privateKey\">\xe7\xa7\x81\xe9\x92\xa5</param>\n<returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe5\xb0\xbe\xe9\x83\xa8\xe6\x9c\x89\xe9\x97\xae\xe9\xa2\x98\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe5\x8e\xbb\xe9\x99\xa4\xe5\xa4\x9a\xe4\xbd\x99\xe5\xad\x97\xe7\xac\xa6</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "GetRetData", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventGetRetData_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics
	{
		struct libcryptAPIsmObject_eventGetStrHex_Parms
		{
			FString data;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetStrHex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventGetStrHex_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|UE" },
		{ "Comment", "/// <summary>\n/// \xe5\xb0\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84\xe7\x84\xb6\xe5\x90\x8e\xe5\x86\x8d\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xbaHex\n/// </summary>\n/// <param name=\"data\">\xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xbd\xac\xe6\x8d\xa2\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</param>\n/// <returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84Hex\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\n\xe5\xb0\x86\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xba\xe5\xad\x97\xe8\x8a\x82\xe6\x95\xb0\xe7\xbb\x84\xe7\x84\xb6\xe5\x90\x8e\xe5\x86\x8d\xe8\xbd\xac\xe6\x8d\xa2\xe4\xb8\xbaHex\n</summary>\n<param name=\"data\">\xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xbd\xac\xe6\x8d\xa2\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</param>\n<returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84Hex\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "GetStrHex", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventGetStrHex_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics
	{
		struct libcryptAPIsmObject_eventMD5_Encode_Parms
		{
			FString value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventMD5_Encode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventMD5_Encode_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|UE" },
		{ "Comment", "/// <summary>\n/// \xe4\xb8\x80\xe8\x88\xac\xe7\x9a\x84MD5\xe5\x8a\xa0\xe5\xaf\x86\n/// </summary>\n/// <param name=\"value\">\xe9\x9c\x80\xe8\xa6\x81\xe5\x8a\xa0\xe5\xaf\x86\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</param>\n/// <returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84MD5\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\n\xe4\xb8\x80\xe8\x88\xac\xe7\x9a\x84MD5\xe5\x8a\xa0\xe5\xaf\x86\n</summary>\n<param name=\"value\">\xe9\x9c\x80\xe8\xa6\x81\xe5\x8a\xa0\xe5\xaf\x86\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</param>\n<returns>\xe8\xbf\x94\xe5\x9b\x9e\xe7\x9a\x84MD5\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "MD5_Encode", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventMD5_Encode_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics
	{
		struct libcryptAPIsmObject_eventSM2Decrypt_Parms
		{
			FString data;
			FString retdata;
			FString privkey;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_privkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_privkey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_retdata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Decrypt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_privkey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_privkey = { "privkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Decrypt_Parms, privkey), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_privkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_privkey_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_retdata = { "retdata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Decrypt_Parms, retdata), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Decrypt_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_privkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_retdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/// <summary>\n/// SM2\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe5\xaf\x86\n/// </summary>\n/// <param name=\"data\">\xe5\xbe\x85\xe8\xa7\xa3\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"retdata\">\xe8\xa7\xa3\xe5\xaf\x86\xe7\xbb\x93\xe6\x9e\x9c</param>\n/// <param name=\"privkey\">\xe7\xa7\x81\xe9\x92\xa5</param>\n/// <returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\nSM2\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe5\xaf\x86\n</summary>\n<param name=\"data\">\xe5\xbe\x85\xe8\xa7\xa3\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"retdata\">\xe8\xa7\xa3\xe5\xaf\x86\xe7\xbb\x93\xe6\x9e\x9c</param>\n<param name=\"privkey\">\xe7\xa7\x81\xe9\x92\xa5</param>\n<returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "SM2Decrypt", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventSM2Decrypt_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics
	{
		struct libcryptAPIsmObject_eventSM2Encrypt_Parms
		{
			FString data;
			FString retdata;
			FString pubkey;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pubkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pubkey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_retdata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Encrypt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_pubkey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_pubkey = { "pubkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Encrypt_Parms, pubkey), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_pubkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_pubkey_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_retdata = { "retdata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Encrypt_Parms, retdata), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Encrypt_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_pubkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_retdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/// /// <summary>\n/// SM2\xe6\x95\xb0\xe6\x8d\xae\xe5\x8a\xa0\xe5\xaf\x86\n/// </summary>\n/// <param name=\"data\">\xe5\xbe\x85\xe5\x8a\xa0\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"retdata\">\xe5\x8a\xa0\xe5\xaf\x86\xe7\xbb\x93\xe6\x9e\x9c</param>\n/// <param name=\"pubkey\">\xe5\x85\xac\xe9\x92\xa5</param>\n/// <returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\nSM2\xe6\x95\xb0\xe6\x8d\xae\xe5\x8a\xa0\xe5\xaf\x86\n</summary>\n<param name=\"data\">\xe5\xbe\x85\xe5\x8a\xa0\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"retdata\">\xe5\x8a\xa0\xe5\xaf\x86\xe7\xbb\x93\xe6\x9e\x9c</param>\n<param name=\"pubkey\">\xe5\x85\xac\xe9\x92\xa5</param>\n<returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "SM2Encrypt", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventSM2Encrypt_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics
	{
		struct libcryptAPIsmObject_eventSM2FormatConvert_Parms
		{
			int32 mode;
			FString data;
			FString retdata;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_retdata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2FormatConvert_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_retdata = { "retdata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2FormatConvert_Parms, retdata), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2FormatConvert_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2FormatConvert_Parms, mode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_retdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::NewProp_mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/*\xe5\xbd\x93mode\xe4\xb8\xba\xe4\xbb\xa5\xe4\xb8\x8b\xe5\x80\xbc\xe6\x97\xb6\xef\xbc\x8c\xe5\xaf\xb9\xe5\xba\x94\xe6\xa0\xbc\xe5\xbc\x8f\xe5\xa6\x82\xe4\xb8\x8b\xef\xbc\x9a\n\x09\x09* 101\x09\x09sm2\xe5\x8a\xa0\xe5\xaf\x86\xe5\xaf\x86\xe6\x96\x87""der\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xac""c1c3c2\xe6\xa0\xbc\xe5\xbc\x8f\n\x09\x09* 102\x09\x09sm2\xe5\x8a\xa0\xe5\xaf\x86\xe5\xaf\x86\xe6\x96\x87""c1c3c2\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xac""der\xe6\xa0\xbc\xe5\xbc\x8f\n\x09\x09* 201\x09\x09sm2\xe7\xad\xbe\xe5\x90\x8d\xe5\x80\xbc""der\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xacRS\xe6\xa0\xbc\xe5\xbc\x8f\n\x09\x09* 202\x09\x09sm2\xe7\xad\xbe\xe5\x90\x8d\xe5\x80\xbcRS\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xac""der\xe6\xa0\xbc\xe5\xbc\x8f*/" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "\xe5\xbd\x93mode\xe4\xb8\xba\xe4\xbb\xa5\xe4\xb8\x8b\xe5\x80\xbc\xe6\x97\xb6\xef\xbc\x8c\xe5\xaf\xb9\xe5\xba\x94\xe6\xa0\xbc\xe5\xbc\x8f\xe5\xa6\x82\xe4\xb8\x8b\xef\xbc\x9a\n               * 101           sm2\xe5\x8a\xa0\xe5\xaf\x86\xe5\xaf\x86\xe6\x96\x87""der\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xac""c1c3c2\xe6\xa0\xbc\xe5\xbc\x8f\n               * 102           sm2\xe5\x8a\xa0\xe5\xaf\x86\xe5\xaf\x86\xe6\x96\x87""c1c3c2\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xac""der\xe6\xa0\xbc\xe5\xbc\x8f\n               * 201           sm2\xe7\xad\xbe\xe5\x90\x8d\xe5\x80\xbc""der\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xacRS\xe6\xa0\xbc\xe5\xbc\x8f\n               * 202           sm2\xe7\xad\xbe\xe5\x90\x8d\xe5\x80\xbcRS\xe6\xa0\xbc\xe5\xbc\x8f\xe8\xbd\xac""der\xe6\xa0\xbc\xe5\xbc\x8f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "SM2FormatConvert", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventSM2FormatConvert_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics
	{
		struct libcryptAPIsmObject_eventSM2Genkey_Parms
		{
			FString privkey;
			FString pubkey;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pubkey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_privkey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Genkey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::NewProp_pubkey = { "pubkey", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Genkey_Parms, pubkey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::NewProp_privkey = { "privkey", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Genkey_Parms, privkey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::NewProp_pubkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::NewProp_privkey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/// <summary>\n/// SM2\xe5\xaf\x86\xe9\x92\xa5\xe7\x94\x9f\xe6\x88\x90\n/// </summary>\n/// <param name=\"privkey\">\xe7\xa7\x81\xe9\x92\xa5</param>\n/// <param name=\"pubkey\">\xe5\x85\xac\xe9\x92\xa5</param>\n/// <returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\nSM2\xe5\xaf\x86\xe9\x92\xa5\xe7\x94\x9f\xe6\x88\x90\n</summary>\n<param name=\"privkey\">\xe7\xa7\x81\xe9\x92\xa5</param>\n<param name=\"pubkey\">\xe5\x85\xac\xe9\x92\xa5</param>\n<returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "SM2Genkey", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventSM2Genkey_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics
	{
		struct libcryptAPIsmObject_eventSM2Sign_Parms
		{
			FString data;
			FString retdata;
			FString privkey;
			FString pubkey;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pubkey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_privkey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_retdata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Sign_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_pubkey = { "pubkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Sign_Parms, pubkey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_privkey = { "privkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Sign_Parms, privkey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_retdata = { "retdata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Sign_Parms, retdata), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Sign_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_pubkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_privkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_retdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/// <summary>\n/// \xe5\xaf\xb9\xe5\x8e\x9f\xe5\xa7\x8b\xe6\x95\xb0\xe6\x8d\xaeSM2\xe7\xad\xbe\xe5\x90\x8d\n/// </summary>\n/// <param name=\"data\">\xe5\xbe\x85\xe7\xad\xbe\xe5\x90\x8d\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"retdata\">\xe8\xbf\x94\xe5\x9b\x9e\xe7\xad\xbe\xe5\x90\x8d\xe7\xbb\x93\xe6\x9e\x9c</param>\n/// <param name=\"privkey\">\xe7\xa7\x81\xe9\x92\xa5</param>\n/// <param name=\"pubkey\">\xe5\x85\xac\xe9\x92\xa5</param>\n/// <returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\n\xe5\xaf\xb9\xe5\x8e\x9f\xe5\xa7\x8b\xe6\x95\xb0\xe6\x8d\xaeSM2\xe7\xad\xbe\xe5\x90\x8d\n</summary>\n<param name=\"data\">\xe5\xbe\x85\xe7\xad\xbe\xe5\x90\x8d\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"retdata\">\xe8\xbf\x94\xe5\x9b\x9e\xe7\xad\xbe\xe5\x90\x8d\xe7\xbb\x93\xe6\x9e\x9c</param>\n<param name=\"privkey\">\xe7\xa7\x81\xe9\x92\xa5</param>\n<param name=\"pubkey\">\xe5\x85\xac\xe9\x92\xa5</param>\n<returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "SM2Sign", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventSM2Sign_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics
	{
		struct libcryptAPIsmObject_eventSM2Verify_Parms
		{
			FString pubkey;
			FString Signeddata;
			FString plaindata;
			bool attestation;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static void NewProp_attestation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_attestation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plaindata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_plaindata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signeddata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Signeddata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pubkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pubkey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Verify_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_attestation_SetBit(void* Obj)
	{
		((libcryptAPIsmObject_eventSM2Verify_Parms*)Obj)->attestation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_attestation = { "attestation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(libcryptAPIsmObject_eventSM2Verify_Parms), &Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_attestation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_plaindata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_plaindata = { "plaindata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Verify_Parms, plaindata), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_plaindata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_plaindata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_Signeddata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_Signeddata = { "Signeddata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Verify_Parms, Signeddata), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_Signeddata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_Signeddata_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_pubkey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_pubkey = { "pubkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM2Verify_Parms, pubkey), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_pubkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_pubkey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_attestation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_plaindata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_Signeddata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::NewProp_pubkey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/// <summary>\n/// SM2\xe9\xaa\x8c\xe7\xad\xbe\n/// </summary>\n/// <param name=\"pubkey\">\xe5\x85\xac\xe9\x92\xa5</param>\n/// <param name=\"Signeddata\">\xe5\xb7\xb2\xe5\x8a\xa0\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"plaindata\">\xe6\x9c\xaa\xe5\x8a\xa0\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"attestation\">\xe7\x9c\x9f\xe4\xb8\xba\xe9\x80\x9a\xe8\xbf\x87\xef\xbc\x8c\xe9\x94\x99\xe4\xb8\xba\xe4\xb8\x8d\xe9\x80\x9a\xe8\xbf\x87</param>\n/// <returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\nSM2\xe9\xaa\x8c\xe7\xad\xbe\n</summary>\n<param name=\"pubkey\">\xe5\x85\xac\xe9\x92\xa5</param>\n<param name=\"Signeddata\">\xe5\xb7\xb2\xe5\x8a\xa0\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"plaindata\">\xe6\x9c\xaa\xe5\x8a\xa0\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"attestation\">\xe7\x9c\x9f\xe4\xb8\xba\xe9\x80\x9a\xe8\xbf\x87\xef\xbc\x8c\xe9\x94\x99\xe4\xb8\xba\xe4\xb8\x8d\xe9\x80\x9a\xe8\xbf\x87</param>\n<returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "SM2Verify", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventSM2Verify_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics
	{
		struct libcryptAPIsmObject_eventSM4CBCDecrypt_Parms
		{
			FString data;
			FString retdata;
			FString yin;
			FString iv;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_iv;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_yin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_retdata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCDecrypt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_iv = { "iv", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCDecrypt_Parms, iv), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_yin = { "yin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCDecrypt_Parms, yin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_retdata = { "retdata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCDecrypt_Parms, retdata), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCDecrypt_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_iv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_yin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_retdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "SM4CBCDecrypt", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventSM4CBCDecrypt_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics
	{
		struct libcryptAPIsmObject_eventSM4CBCEncrypt_Parms
		{
			FString data;
			FString retdata;
			FString yin;
			FString iv;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_iv;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_yin;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_retdata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCEncrypt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_iv = { "iv", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCEncrypt_Parms, iv), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_yin = { "yin", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCEncrypt_Parms, yin), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_retdata = { "retdata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCEncrypt_Parms, retdata), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4CBCEncrypt_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_iv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_yin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_retdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/// <summary>\n/// SM4 CBC\xe5\x8a\xa0\xe5\xaf\x86\n/// </summary>\n/// <param name=\"flag\">0\xe5\x8a\xa0\xe5\xaf\x86\xef\xbc\x8cPKCS#7\xe5\xa1\xab\xe5\x85\x85\xe6\x96\xb9\xe5\xbc\x8f\xe5\x8a\xa0\xe5\xaf\x86 1\xe8\xa7\xa3\xe5\xaf\x86\xef\xbc\x8cPKCS#7\xe5\xa1\xab\xe5\x85\x85\xe6\x96\xb9\xe5\xbc\x8f\xe8\xa7\xa3\xe5\xaf\x86</param>\n/// <param name=\"data\">\xe5\xbe\x85\xe5\x8a\xa0\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"retdata\">\xe5\x8a\xa0\xe5\xaf\x86\xe7\xbb\x93\xe6\x9e\x9c</param>\n/// <param name=\"yin\">sm4\xe5\xaf\x86\xe9\x92\xa5</param>\n/// <returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\nSM4 CBC\xe5\x8a\xa0\xe5\xaf\x86\n</summary>\n<param name=\"flag\">0\xe5\x8a\xa0\xe5\xaf\x86\xef\xbc\x8cPKCS#7\xe5\xa1\xab\xe5\x85\x85\xe6\x96\xb9\xe5\xbc\x8f\xe5\x8a\xa0\xe5\xaf\x86 1\xe8\xa7\xa3\xe5\xaf\x86\xef\xbc\x8cPKCS#7\xe5\xa1\xab\xe5\x85\x85\xe6\x96\xb9\xe5\xbc\x8f\xe8\xa7\xa3\xe5\xaf\x86</param>\n<param name=\"data\">\xe5\xbe\x85\xe5\x8a\xa0\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"retdata\">\xe5\x8a\xa0\xe5\xaf\x86\xe7\xbb\x93\xe6\x9e\x9c</param>\n<param name=\"yin\">sm4\xe5\xaf\x86\xe9\x92\xa5</param>\n<returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "SM4CBCEncrypt", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventSM4CBCEncrypt_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics
	{
		struct libcryptAPIsmObject_eventSM4Crypt1_Parms
		{
			int32 flag;
			FString data;
			FString retdata;
			FString key;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_retdata;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4Crypt1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4Crypt1_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_retdata = { "retdata", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4Crypt1_Parms, retdata), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4Crypt1_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(libcryptAPIsmObject_eventSM4Crypt1_Parms, flag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_retdata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::Function_MetaDataParams[] = {
		{ "Category", "libcryptAPIsm|GMCrypt" },
		{ "Comment", "/// <summary>\n/// SM4\xe5\x8a\xa0\xe8\xa7\xa3\xe5\xaf\x86\xe6\x8e\xa5\xe5\x8f\xa3\n/// </summary>\n/// <param name=\"flag\">0\xe4\xb8\xba\xe5\x8a\xa0\xe5\xaf\x86\xef\xbc\x8c""1\xe4\xb8\xba\xe8\xa7\xa3\xe5\xaf\x86\xef\xbc\x88\xe5\x8f\xaa\xe8\x83\xbd\xe5\xaf\xb9\xe6\x9c\xac\xe6\x8e\xa5\xe5\x8f\xa3\xe5\x8a\xa0\xe5\xaf\x86\xe7\x9a\x84\xe5\xaf\x86\xe6\x96\x87\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xa7\xa3\xe5\xaf\x86\xef\xbc\x89</param>\n/// <param name=\"data\">\xe5\x8a\xa0\xe8\xa7\xa3\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"retdata\">\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae</param>\n/// <param name=\"key\">\xe5\x8a\xa0\xe5\xaf\x86\xe5\xaf\x86\xe9\x92\xa5</param>\n/// <returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>\n" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\nSM4\xe5\x8a\xa0\xe8\xa7\xa3\xe5\xaf\x86\xe6\x8e\xa5\xe5\x8f\xa3\n</summary>\n<param name=\"flag\">0\xe4\xb8\xba\xe5\x8a\xa0\xe5\xaf\x86\xef\xbc\x8c""1\xe4\xb8\xba\xe8\xa7\xa3\xe5\xaf\x86\xef\xbc\x88\xe5\x8f\xaa\xe8\x83\xbd\xe5\xaf\xb9\xe6\x9c\xac\xe6\x8e\xa5\xe5\x8f\xa3\xe5\x8a\xa0\xe5\xaf\x86\xe7\x9a\x84\xe5\xaf\x86\xe6\x96\x87\xe8\xbf\x9b\xe8\xa1\x8c\xe8\xa7\xa3\xe5\xaf\x86\xef\xbc\x89</param>\n<param name=\"data\">\xe5\x8a\xa0\xe8\xa7\xa3\xe5\xaf\x86\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"retdata\">\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae</param>\n<param name=\"key\">\xe5\x8a\xa0\xe5\xaf\x86\xe5\xaf\x86\xe9\x92\xa5</param>\n<returns>\xe5\x8f\x82\xe8\x80\x83\xe8\xbf\x94\xe5\x9b\x9e\xe6\x95\xb0\xe6\x8d\xae\xe8\xa7\xa3\xe6\x9e\x90</returns>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UlibcryptAPIsmObject, nullptr, "SM4Crypt1", nullptr, nullptr, sizeof(libcryptAPIsmObject_eventSM4Crypt1_Parms), Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UlibcryptAPIsmObject_NoRegister()
	{
		return UlibcryptAPIsmObject::StaticClass();
	}
	struct Z_Construct_UClass_UlibcryptAPIsmObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UlibcryptAPIsmObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GMSSL,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UlibcryptAPIsmObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_AscBase64Encode, "AscBase64Encode" }, // 1859319294
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_Base64_Encode, "Base64_Encode" }, // 665312508
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_GenerateRandomstrInlen, "GenerateRandomstrInlen" }, // 2369635622
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_GetCertId, "GetCertId" }, // 1688324728
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_GetCgbOpenPubKey, "GetCgbOpenPubKey" }, // 1556908953
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_GetCryptKey, "GetCryptKey" }, // 1013569747
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_getlibcryptAPIsmObject, "getlibcryptAPIsmObject" }, // 3583650790
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_GetRetData, "GetRetData" }, // 338397319
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_GetStrHex, "GetStrHex" }, // 3645504296
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_MD5_Encode, "MD5_Encode" }, // 2299038892
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Decrypt, "SM2Decrypt" }, // 667857820
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Encrypt, "SM2Encrypt" }, // 3543899423
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_SM2FormatConvert, "SM2FormatConvert" }, // 4246650251
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Genkey, "SM2Genkey" }, // 40993170
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Sign, "SM2Sign" }, // 3932176459
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_SM2Verify, "SM2Verify" }, // 1744974017
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCDecrypt, "SM4CBCDecrypt" }, // 3082401622
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_SM4CBCEncrypt, "SM4CBCEncrypt" }, // 1347895832
		{ &Z_Construct_UFunction_UlibcryptAPIsmObject_SM4Crypt1, "SM4Crypt1" }, // 2433446507
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UlibcryptAPIsmObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// \xe5\x8a\xa0\xe5\xaf\x86\xe8\xa7\xa3\xe5\xaf\x86\xe5\xba\x93 \n/// </summary>\n" },
		{ "IncludePath", "libcryptAPIsmObject.h" },
		{ "ModuleRelativePath", "Public/libcryptAPIsmObject.h" },
		{ "ToolTip", "<summary>\n\xe5\x8a\xa0\xe5\xaf\x86\xe8\xa7\xa3\xe5\xaf\x86\xe5\xba\x93\n</summary>" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UlibcryptAPIsmObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UlibcryptAPIsmObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UlibcryptAPIsmObject_Statics::ClassParams = {
		&UlibcryptAPIsmObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UlibcryptAPIsmObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UlibcryptAPIsmObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UlibcryptAPIsmObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UlibcryptAPIsmObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UlibcryptAPIsmObject, 937292500);
	template<> GMSSL_API UClass* StaticClass<UlibcryptAPIsmObject>()
	{
		return UlibcryptAPIsmObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UlibcryptAPIsmObject(Z_Construct_UClass_UlibcryptAPIsmObject, &UlibcryptAPIsmObject::StaticClass, TEXT("/Script/GMSSL"), TEXT("UlibcryptAPIsmObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UlibcryptAPIsmObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
