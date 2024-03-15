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
 * OpenAPIAdAccountCreateSubscriptionResponse
 *
 * 
 */
class OPENAPI_API OpenAPIAdAccountCreateSubscriptionResponse : public Model
{
public:
    virtual ~OpenAPIAdAccountCreateSubscriptionResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Subscription ID. */
	TOptional<FString> Id;
	/* Base64 encoded key for client to decrypt lead data. */
	TOptional<FString> CryptographicKey;
	/* Lead data encryption algorithm. */
	TOptional<FString> CryptographicAlgorithm;
	/* Subscription creation time. Unix timestamp in milliseconds. */
	TOptional<int32> CreatedTime;
};

}
