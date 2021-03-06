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
#include "OpenAPIBatchOperation.h"
#include "OpenAPICountry.h"
#include "OpenAPIItemBatchRecord.h"
#include "OpenAPILanguage.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsItemsBatchRequest
 *
 * Request object of catalogs items batch
 */
class OPENAPI_API OpenAPICatalogsItemsBatchRequest : public Model
{
public:
    virtual ~OpenAPICatalogsItemsBatchRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPICountry> Country;
	TOptional<OpenAPILanguage> Language;
	TOptional<OpenAPIBatchOperation> Operation;
	/* Array with catalogs items */
	TOptional<TArray<OpenAPIItemBatchRecord>> Items;
};

}
