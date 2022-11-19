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
#include "OpenAPIBatchOperation.h"
#include "OpenAPICountry.h"
#include "OpenAPIItemDeleteDiscontinuedBatchRecord.h"
#include "OpenAPILanguage.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsItemsDeleteDiscontinuedBatchRequest
 *
 * Request object to discontinue catalogs items
 */
class OPENAPI_API OpenAPICatalogsItemsDeleteDiscontinuedBatchRequest : public Model
{
public:
    virtual ~OpenAPICatalogsItemsDeleteDiscontinuedBatchRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPICountry Country;
	OpenAPILanguage Language;
	OpenAPIBatchOperation Operation;
	/* Array with catalogs items */
	TArray<OpenAPIItemDeleteDiscontinuedBatchRecord> Items;
};

}
