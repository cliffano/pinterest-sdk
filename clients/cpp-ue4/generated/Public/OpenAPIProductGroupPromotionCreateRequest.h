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
#include "OpenAPIProductGroupPromotionCommon.h"

namespace OpenAPI
{

/*
 * OpenAPIProductGroupPromotionCreateRequest
 *
 * 
 */
class OPENAPI_API OpenAPIProductGroupPromotionCreateRequest : public Model
{
public:
    virtual ~OpenAPIProductGroupPromotionCreateRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* ID of the Ad Group the Product Group Promotion belongs to. */
	FString AdGroupId;
	TArray<OpenAPIProductGroupPromotionCommon> ProductGroupPromotion;
};

}
