/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIException.h"
#include "OpenAPIProductGroupPromotion.h"

namespace OpenAPI
{

/*
 * OpenAPIProductGroupPromotionUpdateResponseItem
 *
 * 
 */
class OPENAPI_API OpenAPIProductGroupPromotionUpdateResponseItem : public Model
{
public:
    virtual ~OpenAPIProductGroupPromotionUpdateResponseItem() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<OpenAPIProductGroupPromotion> Data;
	TOptional<OpenAPIException> Exceptions;
};

}
