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

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIAdCommonTrackingUrls.h"
#include "OpenAPICampaignSummaryStatus.h"
#include "OpenAPIEntityStatus.h"
#include "OpenAPIObjectiveType.h"

namespace OpenAPI
{

/*
 * OpenAPICampaignUpdateRequest
 *
 * 
 */
class OPENAPI_API OpenAPICampaignUpdateRequest : public Model
{
public:
    virtual ~OpenAPICampaignUpdateRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Campaign ID. */
	FString Id;
	/* Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. */
	FString AdAccountId;
	/* Campaign name. */
	TOptional<FString> Name;
	TOptional<OpenAPIEntityStatus> Status;
	/* Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time. */
	TOptional<int32> LifetimeSpendCap;
	/* Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time. */
	TOptional<int32> DailySpendCap;
	/* Order line ID that appears on the invoice. */
	TOptional<FString> OrderLineId;
	TOptional<OpenAPIAdCommonTrackingUrls> TrackingUrls;
	/* Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
	TOptional<int32> StartTime;
	/* Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
	TOptional<int32> EndTime;
	TOptional<OpenAPICampaignSummaryStatus> SummaryStatus;
	/* Determine if a campaign has flexible daily budgets setup. */
	TOptional<bool> IsFlexibleDailyBudgets;
	/* When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account. */
	TOptional<int32> DefaultAdGroupBudgetInMicroCurrency;
	/* Specifies whether the campaign was created in the automated campaign flow */
	TOptional<bool> IsAutomatedCampaign;
	/* Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared. */
	TOptional<bool> IsCampaignBudgetOptimization;
	TOptional<OpenAPIObjectiveType> ObjectiveType;
};

}
