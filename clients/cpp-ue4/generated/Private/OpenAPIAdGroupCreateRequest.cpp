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

#include "OpenAPIAdGroupCreateRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum::AutomaticBid:
		return TEXT("AUTOMATIC_BID");
	case OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum::MaxBid:
		return TEXT("MAX_BID");
	case OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum::TargetAvg:
		return TEXT("TARGET_AVG");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAdGroupCreateRequest::EnumToString(const OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum& Value)
{
	static TMap<FString, OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum> StringToEnum = { 
		{ TEXT("AUTOMATIC_BID"), OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum::AutomaticBid },
		{ TEXT("MAX_BID"), OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum::MaxBid },
		{ TEXT("TARGET_AVG"), OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum::TargetAvg }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAdGroupCreateRequest::EnumFromString(const FString& EnumAsString, OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAdGroupCreateRequest::BidStrategyTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIAdGroupCreateRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name);
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	if (BudgetInMicroCurrency.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("budget_in_micro_currency")); WriteJsonValue(Writer, BudgetInMicroCurrency.GetValue());
	}
	if (BidInMicroCurrency.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bid_in_micro_currency")); WriteJsonValue(Writer, BidInMicroCurrency.GetValue());
	}
	if (BidStrategyType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bid_strategy_type")); WriteJsonValue(Writer, BidStrategyType.GetValue());
	}
	if (BudgetType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("budget_type")); WriteJsonValue(Writer, BudgetType.GetValue());
	}
	if (StartTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("start_time")); WriteJsonValue(Writer, StartTime.GetValue());
	}
	if (EndTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("end_time")); WriteJsonValue(Writer, EndTime.GetValue());
	}
	if (TargetingSpec.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("targeting_spec")); WriteJsonValue(Writer, TargetingSpec.GetValue());
	}
	if (LifetimeFrequencyCap.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("lifetime_frequency_cap")); WriteJsonValue(Writer, LifetimeFrequencyCap.GetValue());
	}
	if (TrackingUrls.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("tracking_urls")); WriteJsonValue(Writer, TrackingUrls.GetValue());
	}
	if (AutoTargetingEnabled.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("auto_targeting_enabled")); WriteJsonValue(Writer, AutoTargetingEnabled.GetValue());
	}
	if (PlacementGroup.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("placement_group")); WriteJsonValue(Writer, PlacementGroup.GetValue());
	}
	if (PacingDeliveryType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("pacing_delivery_type")); WriteJsonValue(Writer, PacingDeliveryType.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("campaign_id")); WriteJsonValue(Writer, CampaignId);
	Writer->WriteIdentifierPrefix(TEXT("billable_event")); WriteJsonValue(Writer, BillableEvent);
	Writer->WriteObjectEnd();
}

bool OpenAPIAdGroupCreateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("budget_in_micro_currency"), BudgetInMicroCurrency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bid_in_micro_currency"), BidInMicroCurrency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bid_strategy_type"), BidStrategyType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("budget_type"), BudgetType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("start_time"), StartTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("end_time"), EndTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("targeting_spec"), TargetingSpec);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("lifetime_frequency_cap"), LifetimeFrequencyCap);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tracking_urls"), TrackingUrls);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("auto_targeting_enabled"), AutoTargetingEnabled);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("placement_group"), PlacementGroup);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("pacing_delivery_type"), PacingDeliveryType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("campaign_id"), CampaignId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("billable_event"), BillableEvent);

	return ParseSuccess;
}

}