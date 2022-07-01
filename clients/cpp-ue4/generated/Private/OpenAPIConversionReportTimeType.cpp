/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIConversionReportTimeType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIConversionReportTimeType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIConversionReportTimeType::Values::AdAction:
		return TEXT("TIME_OF_AD_ACTION");
	case OpenAPIConversionReportTimeType::Values::Conversion:
		return TEXT("TIME_OF_CONVERSION");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIConversionReportTimeType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIConversionReportTimeType::EnumToString(const OpenAPIConversionReportTimeType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIConversionReportTimeType::Values& Value)
{
	static TMap<FString, OpenAPIConversionReportTimeType::Values> StringToEnum = { 
		{ TEXT("TIME_OF_AD_ACTION"), OpenAPIConversionReportTimeType::Values::AdAction },
		{ TEXT("TIME_OF_CONVERSION"), OpenAPIConversionReportTimeType::Values::Conversion }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIConversionReportTimeType::EnumFromString(const FString& EnumAsString, OpenAPIConversionReportTimeType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIConversionReportTimeType::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIConversionReportTimeType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIConversionReportTimeType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIConversionReportTimeType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIConversionReportTimeType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
