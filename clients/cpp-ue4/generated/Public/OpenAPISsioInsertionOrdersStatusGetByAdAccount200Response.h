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
#include "OpenAPISSIOInsertionOrderStatus.h"

namespace OpenAPI
{

/*
 * OpenAPISsioInsertionOrdersStatusGetByAdAccount200Response
 *
 * 
 */
class OPENAPI_API OpenAPISsioInsertionOrdersStatusGetByAdAccount200Response : public Model
{
public:
    virtual ~OpenAPISsioInsertionOrdersStatusGetByAdAccount200Response() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Insertion orders status by ad acount id */
	TArray<OpenAPISSIOInsertionOrderStatus> Items;
	TOptional<FString> Bookmark;
};

}
