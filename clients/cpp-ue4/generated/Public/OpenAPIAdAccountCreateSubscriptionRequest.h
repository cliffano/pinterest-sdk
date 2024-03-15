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
 * OpenAPIAdAccountCreateSubscriptionRequest
 *
 * 
 */
class OPENAPI_API OpenAPIAdAccountCreateSubscriptionRequest : public Model
{
public:
    virtual ~OpenAPIAdAccountCreateSubscriptionRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Standard HTTPS webhook URL. */
	FString WebhookUrl;
	/* Lead form ID. */
	TOptional<FString> LeadFormId;
	/* Partner access token. Only for clients that requires authentication. We recommend to avoid this param. */
	TOptional<FString> PartnerAccessToken;
	/* Partner refresh token. Only for clients that requires authentication. We recommend to avoid this param. */
	TOptional<FString> PartnerRefreshToken;
};

}
