/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIMMMReportingTargetingType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIMMMReportingTargetingType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIMMMReportingTargetingType::Values::Apptype:
		return TEXT("APPTYPE");
	case OpenAPIMMMReportingTargetingType::Values::Country:
		return TEXT("COUNTRY");
	case OpenAPIMMMReportingTargetingType::Values::CreativeType:
		return TEXT("CREATIVE_TYPE");
	case OpenAPIMMMReportingTargetingType::Values::Gender:
		return TEXT("GENDER");
	case OpenAPIMMMReportingTargetingType::Values::Location:
		return TEXT("LOCATION");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIMMMReportingTargetingType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIMMMReportingTargetingType::EnumToString(const OpenAPIMMMReportingTargetingType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIMMMReportingTargetingType::Values& Value)
{
	static TMap<FString, OpenAPIMMMReportingTargetingType::Values> StringToEnum = { 
		{ TEXT("APPTYPE"), OpenAPIMMMReportingTargetingType::Values::Apptype },
		{ TEXT("COUNTRY"), OpenAPIMMMReportingTargetingType::Values::Country },
		{ TEXT("CREATIVE_TYPE"), OpenAPIMMMReportingTargetingType::Values::CreativeType },
		{ TEXT("GENDER"), OpenAPIMMMReportingTargetingType::Values::Gender },
		{ TEXT("LOCATION"), OpenAPIMMMReportingTargetingType::Values::Location }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIMMMReportingTargetingType::EnumFromString(const FString& EnumAsString, OpenAPIMMMReportingTargetingType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIMMMReportingTargetingType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIMMMReportingTargetingType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIMMMReportingTargetingType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIMMMReportingTargetingType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
