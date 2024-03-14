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
 * OpenAPICampaignCreateResponse
 *
 * 
 */
class OPENAPI_API OpenAPICampaignCreateResponse : public Model
{
public:
    virtual ~OpenAPICampaignCreateResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPICampaignCreateResponseItem>> Items;
};

}
