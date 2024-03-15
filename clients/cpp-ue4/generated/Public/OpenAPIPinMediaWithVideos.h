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
#include "OpenAPIPinMedia.h"
#include "OpenAPIVideoMetadata.h"

namespace OpenAPI
{

/*
 * OpenAPIPinMediaWithVideos
 *
 * Pin with multiple videos.
 */
class OPENAPI_API OpenAPIPinMediaWithVideos : public Model
{
public:
    virtual ~OpenAPIPinMediaWithVideos() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> MediaType;
	TOptional<TArray<OpenAPIVideoMetadata>> Items;
};

}
