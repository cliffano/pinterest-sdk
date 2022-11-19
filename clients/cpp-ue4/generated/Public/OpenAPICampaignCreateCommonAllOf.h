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
#include "OpenAPIEntityStatus.h"

namespace OpenAPI
{

/*
 * OpenAPICampaignCreateCommonAllOf
 *
 * 
 */
class OPENAPI_API OpenAPICampaignCreateCommonAllOf : public Model
{
public:
    virtual ~OpenAPICampaignCreateCommonAllOf() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPIEntityStatus> Status;
	TOptional<bool> IsCampaignBudgetOptimization;
	TOptional<bool> IsFlexibleDailyBudgets;
	/* When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account. */
	TOptional<int32> DefaultAdGroupBudgetInMicroCurrency;
	TOptional<bool> IsAutomatedCampaign;
};

}
