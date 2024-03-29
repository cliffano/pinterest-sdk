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
#include "OpenAPICatalogsFeedIngestionDetails.h"
#include "OpenAPICatalogsFeedProcessingStatus.h"
#include "OpenAPICatalogsFeedProductCounts.h"
#include "OpenAPICatalogsFeedValidationDetails.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsFeedProcessingResult
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsFeedProcessingResult : public Model
{
public:
    virtual ~OpenAPICatalogsFeedProcessingResult() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FDateTime> CreatedAt;
	TOptional<FString> Id;
	TOptional<FDateTime> UpdatedAt;
	OpenAPICatalogsFeedIngestionDetails IngestionDetails;
	OpenAPICatalogsFeedProcessingStatus Status;
	OpenAPICatalogsFeedProductCounts ProductCounts;
	OpenAPICatalogsFeedValidationDetails ValidationDetails;
};

}
