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

#include "OpenAPIGranularity.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIGranularity::Values& Value)
{
	switch (Value)
	{
	case OpenAPIGranularity::Values::Total:
		return TEXT("TOTAL");
	case OpenAPIGranularity::Values::Day:
		return TEXT("DAY");
	case OpenAPIGranularity::Values::Hour:
		return TEXT("HOUR");
	case OpenAPIGranularity::Values::Week:
		return TEXT("WEEK");
	case OpenAPIGranularity::Values::Month:
		return TEXT("MONTH");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIGranularity::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIGranularity::EnumToString(const OpenAPIGranularity::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIGranularity::Values& Value)
{
	static TMap<FString, OpenAPIGranularity::Values> StringToEnum = { 
		{ TEXT("TOTAL"), OpenAPIGranularity::Values::Total },
		{ TEXT("DAY"), OpenAPIGranularity::Values::Day },
		{ TEXT("HOUR"), OpenAPIGranularity::Values::Hour },
		{ TEXT("WEEK"), OpenAPIGranularity::Values::Week },
		{ TEXT("MONTH"), OpenAPIGranularity::Values::Month }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIGranularity::EnumFromString(const FString& EnumAsString, OpenAPIGranularity::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIGranularity::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIGranularity::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIGranularity::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIGranularity::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIGranularity::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
