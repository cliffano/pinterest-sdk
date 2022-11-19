/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPICatalogsFeedIngestionDetails.h"
#include "OpenAPICatalogsFeedProcessingStatus.h"
#include "OpenAPICatalogsFeedProductCounts.h"
#include "OpenAPICatalogsFeedValidationDetails.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsFeedProcessingResultFields
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsFeedProcessingResultFields : public Model
{
public:
    virtual ~OpenAPICatalogsFeedProcessingResultFields() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICatalogsFeedIngestionDetails IngestionDetails;
	OpenAPICatalogsFeedProcessingStatus Status;
	OpenAPICatalogsFeedProductCounts ProductCounts;
	OpenAPICatalogsFeedValidationDetails ValidationDetails;
};

}
