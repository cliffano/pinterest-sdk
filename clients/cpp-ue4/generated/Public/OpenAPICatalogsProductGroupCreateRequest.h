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
#include "OpenAPICatalogsProductGroupFiltersRequest.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsProductGroupCreateRequest
 *
 * Request object for creating a product group.
 */
class OPENAPI_API OpenAPICatalogsProductGroupCreateRequest : public Model
{
public:
    virtual ~OpenAPICatalogsProductGroupCreateRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString Name;
	TOptional<FString> Description;
	/* boolean indicator of whether the product group is being featured or not */
	TOptional<bool> IsFeatured;
	OpenAPICatalogsProductGroupFiltersRequest Filters;
	/* Catalog Feed id pertaining to the catalog product group. */
	FString FeedId;
};

}
