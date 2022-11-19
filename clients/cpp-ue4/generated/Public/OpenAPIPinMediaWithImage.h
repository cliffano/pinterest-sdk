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
#include "OpenAPIImageDetails.h"
#include "OpenAPIPinMedia.h"

namespace OpenAPI
{

/*
 * OpenAPIPinMediaWithImage
 *
 * Pin with image.
 */
class OPENAPI_API OpenAPIPinMediaWithImage : public Model
{
public:
    virtual ~OpenAPIPinMediaWithImage() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<TMap<FString, OpenAPIImageDetails>> Images;
	TOptional<FString> MediaType;
};

}
