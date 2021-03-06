/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
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
 * OpenAPICatalogsFeedIngestionErrors
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsFeedIngestionErrors : public Model
{
public:
    virtual ~OpenAPICatalogsFeedIngestionErrors() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<int32> ImageDownloadError;
	TOptional<int32> ImageDownloadConnectionTimeout;
	TOptional<int32> ImageFormatUnrecognize;
	TOptional<int32> LineLevelInternalError;
	enum class LargeProductCountDecreaseEnum
	{
		_1,
  	};

	static FString EnumToString(const LargeProductCountDecreaseEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, LargeProductCountDecreaseEnum& EnumValue);
	TOptional<LargeProductCountDecreaseEnum> LargeProductCountDecrease;
};

}
