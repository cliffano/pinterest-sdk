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
#include "OpenAPIAdCreateRequest.h"
#include "OpenAPIAdGroupCreateRequest.h"
#include "OpenAPICampaignCreateRequest.h"
#include "OpenAPIKeywordsRequest.h"
#include "OpenAPIProductGroupPromotionCreateRequest.h"

namespace OpenAPI
{

/*
 * OpenAPIBulkUpsertRequestCreate
 *
 * Request for creation of entities in bulk.
 */
class OPENAPI_API OpenAPIBulkUpsertRequestCreate : public Model
{
public:
    virtual ~OpenAPIBulkUpsertRequestCreate() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPICampaignCreateRequest>> Campaigns;
	TOptional<TArray<OpenAPIAdGroupCreateRequest>> AdGroups;
	TOptional<TArray<OpenAPIAdCreateRequest>> Ads;
	TOptional<TArray<OpenAPIProductGroupPromotionCreateRequest>> ProductGroups;
	TOptional<TArray<OpenAPIKeywordsRequest>> Keywords;
};

}
