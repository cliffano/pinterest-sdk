/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIActionType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIActionType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIActionType::Values::Clickthrough:
		return TEXT("CLICKTHROUGH");
	case OpenAPIActionType::Values::Impression:
		return TEXT("IMPRESSION");
	case OpenAPIActionType::Values::VIDEOV50MRC:
		return TEXT("VIDEO_V_50_MRC");
	case OpenAPIActionType::Values::BillableEngagement:
		return TEXT("BILLABLE_ENGAGEMENT");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIActionType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIActionType::EnumToString(const OpenAPIActionType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIActionType::Values& Value)
{
	static TMap<FString, OpenAPIActionType::Values> StringToEnum = { 
		{ TEXT("CLICKTHROUGH"), OpenAPIActionType::Values::Clickthrough },
		{ TEXT("IMPRESSION"), OpenAPIActionType::Values::Impression },
		{ TEXT("VIDEO_V_50_MRC"), OpenAPIActionType::Values::VIDEOV50MRC },
		{ TEXT("BILLABLE_ENGAGEMENT"), OpenAPIActionType::Values::BillableEngagement }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIActionType::EnumFromString(const FString& EnumAsString, OpenAPIActionType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIActionType::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIActionType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIActionType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIActionType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIActionType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
