/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIActionType.h"
#include "OpenAPIAdGroupCommonTrackingUrls.h"
#include "OpenAPIAdGroupSummaryStatus.h"
#include "OpenAPIBudgetType.h"
#include "OpenAPIEntityStatus.h"
#include "OpenAPIPacingDeliveryType.h"
#include "OpenAPIPlacementGroupType.h"

namespace OpenAPI
{

/*
 * OpenAPIAdGroupResponse
 *
 * 
 */
class OPENAPI_API OpenAPIAdGroupResponse : public Model
{
public:
    virtual ~OpenAPIAdGroupResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Ad group name. */
	TOptional<FString> Name;
	/* Ad group/entity status. */
	TOptional<OpenAPIEntityStatus> Status;
	/* Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. */
	TOptional<int32> BudgetInMicroCurrency;
	/* Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. */
	TOptional<int32> BidInMicroCurrency;
	enum class BidStrategyTypeEnum
	{
		AutomaticBid,
		MaxBid,
		TargetAvg,
  	};

	static FString EnumToString(const BidStrategyTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, BidStrategyTypeEnum& EnumValue);
	TOptional<BidStrategyTypeEnum> BidStrategyType;
	TOptional<OpenAPIBudgetType> BudgetType;
	/* Ad group start time. Unix timestamp in seconds. Defaults to current time. */
	TOptional<int32> StartTime;
	/* Ad group end time. Unix timestamp in seconds. */
	TOptional<int32> EndTime;
	/* Ad group targeting specification defining the ad group target audience. For example, '{\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}' */
	TOptional<TMap<FString, TArray<FString>>> TargetingSpec;
	/* Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field. */
	TOptional<int32> LifetimeFrequencyCap;
	TOptional<OpenAPIAdGroupCommonTrackingUrls> TrackingUrls;
	/* Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. */
	TOptional<bool> AutoTargetingEnabled;
	/* <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>. */
	TOptional<OpenAPIPlacementGroupType> PlacementGroup;
	/* Pacing delivery type. With ACCELERATED, an ad group budget is spent as fast as possible. With STANDARD, an ad group budget is spent smoothly over a day. */
	TOptional<OpenAPIPacingDeliveryType> PacingDeliveryType;
	/* Campaign ID of the ad group. */
	TOptional<FString> CampaignId;
	TOptional<OpenAPIActionType> BillableEvent;
	/* Ad group ID. */
	TOptional<FString> Id;
	/* Advertiser ID. */
	TOptional<FString> AdAccountId;
	/* Ad group creation time. Unix timestamp in seconds. */
	TOptional<int32> CreatedTime;
	/* Ad group last update time. Unix timestamp in seconds. */
	TOptional<int32> UpdatedTime;
	/* Always \"adgroup\". */
	TOptional<FString> Type;
	enum class ConversionLearningModeTypeEnum
	{
		NotActive,
		Active,
		Null,
  	};

	static FString EnumToString(const ConversionLearningModeTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ConversionLearningModeTypeEnum& EnumValue);
	/* oCPM learn mode */
	TOptional<ConversionLearningModeTypeEnum> ConversionLearningModeType;
	/* Ad group summary status. */
	TOptional<OpenAPIAdGroupSummaryStatus> SummaryStatus;
	/* Feed Profile ID associated to the adgroup. */
	TOptional<FString> FeedProfileId;
	/* [DCA] The Dynamic creative assets to use for DCA. Dynamic Creative Assembly (DCA) accepts basic creative assets of an ad (image, video, title, call to action, logo etc). Then it automatically generates optimized ad combinations based on these assets. */
	TOptional<TSharedPtr<FJsonValue>> DcaAssets;
};

}