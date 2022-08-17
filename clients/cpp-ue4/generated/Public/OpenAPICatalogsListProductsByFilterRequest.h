/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPICatalogsListProductsByFilterRequestOneOf.h"
#include "OpenAPICatalogsProductGroupFilters.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsListProductsByFilterRequest
 *
 * Request object to list products for a given product group filter.
 */
class OPENAPI_API OpenAPICatalogsListProductsByFilterRequest : public Model
{
public:
    virtual ~OpenAPICatalogsListProductsByFilterRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Catalog Feed id pertaining to the catalog product group filter. */
	FString FeedId;
	OpenAPICatalogsProductGroupFilters Filters;
};

}