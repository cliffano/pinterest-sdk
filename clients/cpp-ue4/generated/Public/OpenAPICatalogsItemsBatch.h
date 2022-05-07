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
#include "OpenAPIBatchOperationStatus.h"
#include "OpenAPIItemProcessingRecord.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsItemsBatch
 *
 * Object describing the catalogs items batch
 */
class OPENAPI_API OpenAPICatalogsItemsBatch : public Model
{
public:
    virtual ~OpenAPICatalogsItemsBatch() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Array with the catalogs items processing records part of the catalogs items batch */
	TOptional<TArray<OpenAPIItemProcessingRecord>> Items;
	/* Id of the catalogs items batch */
	TOptional<FString> BatchId;
	/* Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD */
	TOptional<FDateTime> CreatedTime;
	/* Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD */
	TOptional<FDateTime> CompletedTime;
	TOptional<OpenAPIBatchOperationStatus> Status;
};

}
