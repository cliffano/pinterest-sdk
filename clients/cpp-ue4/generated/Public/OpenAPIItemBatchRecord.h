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
#include "OpenAPIItemAttributes.h"

namespace OpenAPI
{

/*
 * OpenAPIItemBatchRecord
 *
 * Object describing an item batch record
 */
class OPENAPI_API OpenAPIItemBatchRecord : public Model
{
public:
    virtual ~OpenAPIItemBatchRecord() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The catalog item id in the merchant namespace */
	TOptional<FString> ItemId;
	TOptional<OpenAPIItemAttributes> Attributes;
};

}
