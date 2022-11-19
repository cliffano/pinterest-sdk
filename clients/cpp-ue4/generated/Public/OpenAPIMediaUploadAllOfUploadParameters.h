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

namespace OpenAPI
{

/*
 * OpenAPIMediaUploadAllOfUploadParameters
 *
 * The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
 */
class OPENAPI_API OpenAPIMediaUploadAllOfUploadParameters : public Model
{
public:
    virtual ~OpenAPIMediaUploadAllOfUploadParameters() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> XAmzDate;
	TOptional<FString> XAmzSignature;
	TOptional<FString> XAmzSecurityToken;
	TOptional<FString> XAmzAlgorithm;
	TOptional<FString> Key;
	TOptional<FString> Policy;
	TOptional<FString> XAmzCredential;
	TOptional<FString> ContentType;
};

}
