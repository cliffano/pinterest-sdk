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
#include "OpenAPIProductGroupPromotionResponseItem.h"

namespace OpenAPI
{

/*
 * OpenAPIProductGroupPromotionResponse
 *
 * 
 */
class OPENAPI_API OpenAPIProductGroupPromotionResponse : public Model
{
public:
    virtual ~OpenAPIProductGroupPromotionResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TArray<OpenAPIProductGroupPromotionResponseItem>> Items;
};

}
