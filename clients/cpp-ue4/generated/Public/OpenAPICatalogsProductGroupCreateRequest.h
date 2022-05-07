/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPICatalogsProductGroupFilters.h"

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

	/* Catalog Feed id pertaining to the catalog product group. */
	FString FeedId;
	FString Name;
	TOptional<FString> Description;
	OpenAPICatalogsProductGroupFilters Filters;
};

}
