/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIAdCommonTrackingUrls.h"
#include "OpenAPIEntityStatus.h"

namespace OpenAPI
{

/*
 * OpenAPICampaignCreateCommon
 *
 * 
 */
class OPENAPI_API OpenAPICampaignCreateCommon : public Model
{
public:
    virtual ~OpenAPICampaignCreateCommon() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Campaign's Advertiser ID. */
	TOptional<FString> AdAccountId;
	/* Campaign name. */
	TOptional<FString> Name;
	TOptional<OpenAPIEntityStatus> Status;
	/* Campaign total spending cap. */
	TOptional<int32> LifetimeSpendCap;
	/* Campaign daily spending cap. */
	TOptional<int32> DailySpendCap;
	/* Order line ID that appears on the invoice. */
	TOptional<FString> OrderLineId;
	TOptional<OpenAPIAdCommonTrackingUrls> TrackingUrls;
	/* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
	TOptional<int32> StartTime;
	/* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
	TOptional<int32> EndTime;
	TOptional<bool> IsCampaignBudgetOptimization;
	TOptional<bool> IsFlexibleDailyBudgets;
	/* When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account. */
	TOptional<int32> DefaultAdGroupBudgetInMicroCurrency;
	TOptional<bool> IsAutomatedCampaign;
};

}
