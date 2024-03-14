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

namespace OpenAPI
{

/*
 * OpenAPIVideoMetadata
 *
 * 
 */
class OPENAPI_API OpenAPIVideoMetadata : public Model
{
public:
    virtual ~OpenAPIVideoMetadata() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> ItemType;
	TOptional<FString> CoverImageUrl;
	/* Duration (in milliseconds) */
	TOptional<double> Duration;
	/* Height (in pixels) */
	TOptional<int32> Height;
	/* Width (in pixels) */
	TOptional<int32> Width;
};

}
