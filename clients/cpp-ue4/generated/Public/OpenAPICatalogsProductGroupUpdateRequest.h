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
 * OpenAPICatalogsProductGroupUpdateRequest
 *
 * Request object for updating a product group.
 */
class OPENAPI_API OpenAPICatalogsProductGroupUpdateRequest : public Model
{
public:
    virtual ~OpenAPICatalogsProductGroupUpdateRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> Name;
	TOptional<FString> Description;
	/* boolean indicator of whether the product group is being featured or not */
	TOptional<bool> IsFeatured;
	TOptional<OpenAPICatalogsProductGroupFiltersRequest> Filters;
};

}
