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

namespace OpenAPI
{

/*
 * OpenAPISSIOInsertionOrderStatusResponse
 *
 * 
 */
class OPENAPI_API OpenAPISSIOInsertionOrderStatusResponse : public Model
{
public:
    virtual ~OpenAPISSIOInsertionOrderStatusResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Salesforce order id */
	TOptional<FString> PinOrderId;
	/* Salesforce insertion order status */
	TOptional<FString> Status;
	/* Salesforce insertion order creation time */
	TOptional<FString> CreationTime;
};

}
