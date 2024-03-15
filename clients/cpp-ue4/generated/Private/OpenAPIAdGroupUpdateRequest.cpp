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

#include "OpenAPIAdGroupUpdateRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum::AutomaticBid:
		return TEXT("AUTOMATIC_BID");
	case OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum::MaxBid:
		return TEXT("MAX_BID");
	case OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum::TargetAvg:
		return TEXT("TARGET_AVG");
	case OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum::Null:
		return TEXT("null");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAdGroupUpdateRequest::EnumToString(const OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum& Value)
{
	static TMap<FString, OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum> StringToEnum = { 
		{ TEXT("AUTOMATIC_BID"), OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum::AutomaticBid },
		{ TEXT("MAX_BID"), OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum::MaxBid },
		{ TEXT("TARGET_AVG"), OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum::TargetAvg },
		{ TEXT("null"), OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum::Null }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAdGroupUpdateRequest::EnumFromString(const FString& EnumAsString, OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAdGroupUpdateRequest::BidStrategyTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIAdGroupUpdateRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
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
	if (OptimizationGoalMetadata.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("optimization_goal_metadata")); WriteJsonValue(Writer, OptimizationGoalMetadata.GetValue());
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
	if (CampaignId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("campaign_id")); WriteJsonValue(Writer, CampaignId.GetValue());
	}
	if (BillableEvent.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("billable_event")); WriteJsonValue(Writer, BillableEvent.GetValue());
	}
	if (BidStrategyType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bid_strategy_type")); WriteJsonValue(Writer, BidStrategyType.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id);
	Writer->WriteObjectEnd();
}

bool OpenAPIAdGroupUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("budget_in_micro_currency"), BudgetInMicroCurrency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bid_in_micro_currency"), BidInMicroCurrency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("optimization_goal_metadata"), OptimizationGoalMetadata);
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
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bid_strategy_type"), BidStrategyType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);

	return ParseSuccess;
}

}
