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

#include "OpenAPIAdGroupSummaryStatus.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIAdGroupSummaryStatus::Values& Value)
{
	switch (Value)
	{
	case OpenAPIAdGroupSummaryStatus::Values::Running:
		return TEXT("RUNNING");
	case OpenAPIAdGroupSummaryStatus::Values::Paused:
		return TEXT("PAUSED");
	case OpenAPIAdGroupSummaryStatus::Values::NotStarted:
		return TEXT("NOT_STARTED");
	case OpenAPIAdGroupSummaryStatus::Values::Completed:
		return TEXT("COMPLETED");
	case OpenAPIAdGroupSummaryStatus::Values::AdvertiserDisabled:
		return TEXT("ADVERTISER_DISABLED");
	case OpenAPIAdGroupSummaryStatus::Values::Archived:
		return TEXT("ARCHIVED");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAdGroupSummaryStatus::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAdGroupSummaryStatus::EnumToString(const OpenAPIAdGroupSummaryStatus::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAdGroupSummaryStatus::Values& Value)
{
	static TMap<FString, OpenAPIAdGroupSummaryStatus::Values> StringToEnum = { 
		{ TEXT("RUNNING"), OpenAPIAdGroupSummaryStatus::Values::Running },
		{ TEXT("PAUSED"), OpenAPIAdGroupSummaryStatus::Values::Paused },
		{ TEXT("NOT_STARTED"), OpenAPIAdGroupSummaryStatus::Values::NotStarted },
		{ TEXT("COMPLETED"), OpenAPIAdGroupSummaryStatus::Values::Completed },
		{ TEXT("ADVERTISER_DISABLED"), OpenAPIAdGroupSummaryStatus::Values::AdvertiserDisabled },
		{ TEXT("ARCHIVED"), OpenAPIAdGroupSummaryStatus::Values::Archived }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAdGroupSummaryStatus::EnumFromString(const FString& EnumAsString, OpenAPIAdGroupSummaryStatus::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIAdGroupSummaryStatus::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAdGroupSummaryStatus::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAdGroupSummaryStatus::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIAdGroupSummaryStatus::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIAdGroupSummaryStatus::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
