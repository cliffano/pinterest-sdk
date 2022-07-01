/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPICatalogsFeedIngestionErrors.h"
#include "OpenAPICatalogsFeedIngestionInfo.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsFeedIngestionDetails
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsFeedIngestionDetails : public Model
{
public:
    virtual ~OpenAPICatalogsFeedIngestionDetails() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsFeedIngestionErrors Errors;
	OpenAPICatalogsFeedIngestionInfo Info;
};

}
