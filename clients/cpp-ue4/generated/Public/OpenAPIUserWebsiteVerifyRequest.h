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

namespace OpenAPI
{

/*
 * OpenAPIUserWebsiteVerifyRequest
 *
 * User website verification request
 */
class OPENAPI_API OpenAPIUserWebsiteVerifyRequest : public Model
{
public:
    virtual ~OpenAPIUserWebsiteVerifyRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> Website;
	enum class VerificationMethodEnum
	{
		Filename,
		Metatag,
		Dnstxt,
  	};

	static FString EnumToString(const VerificationMethodEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, VerificationMethodEnum& EnumValue);
	TOptional<VerificationMethodEnum> VerificationMethod;
};

}
