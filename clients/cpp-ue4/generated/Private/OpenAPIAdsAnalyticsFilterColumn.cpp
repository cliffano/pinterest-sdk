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

#include "OpenAPIAdsAnalyticsFilterColumn.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIAdsAnalyticsFilterColumn::Values& Value)
{
	switch (Value)
	{
	case OpenAPIAdsAnalyticsFilterColumn::Values::SpendInDollar:
		return TEXT("SPEND_IN_DOLLAR");
	case OpenAPIAdsAnalyticsFilterColumn::Values::TotalImpression:
		return TEXT("TOTAL_IMPRESSION");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAdsAnalyticsFilterColumn::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAdsAnalyticsFilterColumn::EnumToString(const OpenAPIAdsAnalyticsFilterColumn::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAdsAnalyticsFilterColumn::Values& Value)
{
	static TMap<FString, OpenAPIAdsAnalyticsFilterColumn::Values> StringToEnum = { 
		{ TEXT("SPEND_IN_DOLLAR"), OpenAPIAdsAnalyticsFilterColumn::Values::SpendInDollar },
		{ TEXT("TOTAL_IMPRESSION"), OpenAPIAdsAnalyticsFilterColumn::Values::TotalImpression }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAdsAnalyticsFilterColumn::EnumFromString(const FString& EnumAsString, OpenAPIAdsAnalyticsFilterColumn::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIAdsAnalyticsFilterColumn::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAdsAnalyticsFilterColumn::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAdsAnalyticsFilterColumn::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIAdsAnalyticsFilterColumn::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIAdsAnalyticsFilterColumn::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
