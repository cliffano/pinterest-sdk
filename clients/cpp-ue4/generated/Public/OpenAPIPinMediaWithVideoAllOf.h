/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIImageDetails.h"

namespace OpenAPI
{

/*
 * OpenAPIPinMediaWithVideoAllOf
 *
 * 
 */
class OPENAPI_API OpenAPIPinMediaWithVideoAllOf : public Model
{
public:
    virtual ~OpenAPIPinMediaWithVideoAllOf() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TMap<FString, OpenAPIImageDetails>> Images;
	TOptional<FString> CoverImageUrl;
	/* Duration (in milliseconds) */
	TOptional<double> Duration;
	/* Height (in pixels) */
	TOptional<int32> Height;
	/* Width (in pixels) */
	TOptional<int32> Width;
};

}
