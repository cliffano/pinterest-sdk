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
#include "OpenAPICatalogsItemValidationErrors.h"
#include "OpenAPICatalogsItemValidationWarnings.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsItemValidationIssues
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsItemValidationIssues : public Model
{
public:
    virtual ~OpenAPICatalogsItemValidationIssues() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Item number based on order of appearance in the Catalogs Feed. For example, '0' refers to first item found in a feed that was downloaded from a 'location' specified during feed creation. */
	int32 ItemNumber = 0;
	/* The merchant-created unique ID that represents the product. */
	FString ItemId;
	OpenAPICatalogsItemValidationErrors Errors;
	OpenAPICatalogsItemValidationWarnings Warnings;
};

}
