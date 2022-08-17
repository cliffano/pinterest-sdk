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
 * OpenAPIPinMediaSourceImageBase64
 *
 * Base64-encoded image media source
 */
class OPENAPI_API OpenAPIPinMediaSourceImageBase64 : public Model
{
public:
    virtual ~OpenAPIPinMediaSourceImageBase64() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class SourceTypeEnum
	{
		ImageBase64,
  	};

	static FString EnumToString(const SourceTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, SourceTypeEnum& EnumValue);
	SourceTypeEnum SourceType;
	enum class ContentTypeEnum
	{
		Jpeg,
		Png,
  	};

	static FString EnumToString(const ContentTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, ContentTypeEnum& EnumValue);
	ContentTypeEnum ContentType;
	FString Data;
};

}
