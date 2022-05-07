/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIMediaUploadType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIMediaUploadType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIMediaUploadType::Values::Video:
		return TEXT("video");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIMediaUploadType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIMediaUploadType::EnumToString(const OpenAPIMediaUploadType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIMediaUploadType::Values& Value)
{
	static TMap<FString, OpenAPIMediaUploadType::Values> StringToEnum = { 
		{ TEXT("video"), OpenAPIMediaUploadType::Values::Video }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIMediaUploadType::EnumFromString(const FString& EnumAsString, OpenAPIMediaUploadType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIMediaUploadType::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIMediaUploadType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIMediaUploadType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIMediaUploadType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIMediaUploadType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
