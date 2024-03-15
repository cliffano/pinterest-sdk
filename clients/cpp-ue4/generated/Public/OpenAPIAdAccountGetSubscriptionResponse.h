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
 * OpenAPIAdAccountGetSubscriptionResponse
 *
 * 
 */
class OPENAPI_API OpenAPIAdAccountGetSubscriptionResponse : public Model
{
public:
    virtual ~OpenAPIAdAccountGetSubscriptionResponse() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Lead form ID. */
	TOptional<FString> LeadFormId;
	/* Standard HTTPS webhook URL. */
	TOptional<FString> WebhookUrl;
	/* Subscription ID. */
	TOptional<FString> Id;
	/* User account used to subscribe lead data. */
	TOptional<FString> UserAccountId;
	/* The Ad Account ID that this lead form belongs to. */
	TOptional<FString> AdAccountId;
	/* API version. */
	TOptional<FString> ApiVersion;
	/* Base64 encoded key for client to decrypt lead data. */
	TOptional<FString> CryptographicKey;
	/* Lead data encryption algorithm. */
	TOptional<FString> CryptographicAlgorithm;
	/* Lead form creation time. Unix timestamp in milliseconds. */
	TOptional<int32> CreatedTime;
};

}
