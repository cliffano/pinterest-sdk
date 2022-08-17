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

namespace OpenAPI
{

/*
 * OpenAPIPinMediaSourceVideoID
 *
 * Video ID-based media source
 */
class OPENAPI_API OpenAPIPinMediaSourceVideoID : public Model
{
public:
    virtual ~OpenAPIPinMediaSourceVideoID() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class SourceTypeEnum
	{
		VideoId,
  	};

	static FString EnumToString(const SourceTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, SourceTypeEnum& EnumValue);
	SourceTypeEnum SourceType;
	FString CoverImageUrl;
	FString MediaId;
};

}
