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
#include "OpenAPICatalogsItemValidationIssues.h"

namespace OpenAPI
{

/*
 * OpenAPIItemsIssuesList200ResponseAllOf
 *
 * 
 */
class OPENAPI_API OpenAPIItemsIssuesList200ResponseAllOf : public Model
{
public:
    virtual ~OpenAPIItemsIssuesList200ResponseAllOf() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPICatalogsItemValidationIssues>> Items;
};

}
