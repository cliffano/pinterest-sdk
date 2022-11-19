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
 * OpenAPICampaignUpdateRequestAllOf
 *
 * 
 */
class OPENAPI_API OpenAPICampaignUpdateRequestAllOf : public Model
{
public:
    virtual ~OpenAPICampaignUpdateRequestAllOf() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<bool> IsCampaignBudgetOptimization;
	TOptional<bool> IsFlexibleDailyBudgets;
	TOptional<bool> IsAutomatedCampaign;
	TOptional<OpenAPIEntityStatus> Status;
};

}
