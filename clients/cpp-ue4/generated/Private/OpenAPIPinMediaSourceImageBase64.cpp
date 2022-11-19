/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIPinMediaSourceImageBase64.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIPinMediaSourceImageBase64::SourceTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIPinMediaSourceImageBase64::SourceTypeEnum::ImageBase64:
		return TEXT("image_base64");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIPinMediaSourceImageBase64::SourceTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIPinMediaSourceImageBase64::EnumToString(const OpenAPIPinMediaSourceImageBase64::SourceTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIPinMediaSourceImageBase64::SourceTypeEnum& Value)
{
	static TMap<FString, OpenAPIPinMediaSourceImageBase64::SourceTypeEnum> StringToEnum = { 
		{ TEXT("image_base64"), OpenAPIPinMediaSourceImageBase64::SourceTypeEnum::ImageBase64 }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIPinMediaSourceImageBase64::EnumFromString(const FString& EnumAsString, OpenAPIPinMediaSourceImageBase64::SourceTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIPinMediaSourceImageBase64::SourceTypeEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIPinMediaSourceImageBase64::SourceTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIPinMediaSourceImageBase64::SourceTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

inline FString ToString(const OpenAPIPinMediaSourceImageBase64::ContentTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIPinMediaSourceImageBase64::ContentTypeEnum::Jpeg:
		return TEXT("image/jpeg");
	case OpenAPIPinMediaSourceImageBase64::ContentTypeEnum::Png:
		return TEXT("image/png");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIPinMediaSourceImageBase64::ContentTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIPinMediaSourceImageBase64::EnumToString(const OpenAPIPinMediaSourceImageBase64::ContentTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIPinMediaSourceImageBase64::ContentTypeEnum& Value)
{
	static TMap<FString, OpenAPIPinMediaSourceImageBase64::ContentTypeEnum> StringToEnum = { 
		{ TEXT("image/jpeg"), OpenAPIPinMediaSourceImageBase64::ContentTypeEnum::Jpeg },
		{ TEXT("image/png"), OpenAPIPinMediaSourceImageBase64::ContentTypeEnum::Png }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIPinMediaSourceImageBase64::EnumFromString(const FString& EnumAsString, OpenAPIPinMediaSourceImageBase64::ContentTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIPinMediaSourceImageBase64::ContentTypeEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIPinMediaSourceImageBase64::ContentTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIPinMediaSourceImageBase64::ContentTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIPinMediaSourceImageBase64::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("source_type")); WriteJsonValue(Writer, SourceType);
	Writer->WriteIdentifierPrefix(TEXT("content_type")); WriteJsonValue(Writer, ContentType);
	Writer->WriteIdentifierPrefix(TEXT("data")); WriteJsonValue(Writer, Data);
	Writer->WriteObjectEnd();
}

bool OpenAPIPinMediaSourceImageBase64::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("source_type"), SourceType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("content_type"), ContentType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("data"), Data);

	return ParseSuccess;
}

}
