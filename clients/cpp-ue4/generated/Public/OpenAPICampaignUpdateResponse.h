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
#include "OpenAPICampaignCreateResponseItem.h"

namespace OpenAPI
{

/*
 * OpenAPICampaignUpdateResponse
 *
 * 
 */
class OPENAPI_API OpenAPICampaignUpdateResponse : public Model
{
public:
    virtual ~OpenAPICampaignUpdateResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPICampaignCreateResponseItem>> Items;
};

}