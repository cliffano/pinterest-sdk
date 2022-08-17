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
#include "OpenAPICatalogsFeedValidationErrors.h"
#include "OpenAPICatalogsFeedValidationWarnings.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsFeedValidationDetails
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsFeedValidationDetails : public Model
{
public:
    virtual ~OpenAPICatalogsFeedValidationDetails() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsFeedValidationErrors Errors;
	OpenAPICatalogsFeedValidationWarnings Warnings;
};

}
