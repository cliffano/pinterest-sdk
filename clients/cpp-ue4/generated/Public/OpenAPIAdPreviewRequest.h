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
#include "OpenAPIAdPreviewCreateFromImage.h"
#include "OpenAPIAdPreviewCreateFromPin.h"

namespace OpenAPI
{

/*
 * OpenAPIAdPreviewRequest
 *
 * 
 */
class OPENAPI_API OpenAPIAdPreviewRequest : public Model
{
public:
    virtual ~OpenAPIAdPreviewRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Image URL. */
	FString ImageUrl;
	/* Title displayed below ad. */
	FString Title;
	/* Pin ID. */
	FString PinId;
};

}