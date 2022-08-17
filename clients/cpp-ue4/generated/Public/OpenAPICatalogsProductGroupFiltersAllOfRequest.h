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
#include "OpenAPICatalogsProductGroupFilterKeys.h"
#include "OpenAPICatalogsProductGroupFiltersAllOfRequestAnyOf.h"
#include "OpenAPICatalogsProductGroupFiltersAllOfRequestAnyOf1.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsProductGroupFiltersAllOfRequest
 *
 * Object holding a group of filters for request on catalog product group. This is a distinct schema It is not possible to create or update a Product Group with empty filters. But some automatically generated Product Groups might have empty filters.
 */
class OPENAPI_API OpenAPICatalogsProductGroupFiltersAllOfRequest : public Model
{
public:
    virtual ~OpenAPICatalogsProductGroupFiltersAllOfRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TArray<OpenAPICatalogsProductGroupFilterKeys> AnyOf;
	TArray<OpenAPICatalogsProductGroupFilterKeys> AllOf;
};

}
