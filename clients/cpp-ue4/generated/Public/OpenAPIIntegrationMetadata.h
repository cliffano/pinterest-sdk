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
 * OpenAPIIntegrationMetadata
 *
 * Integration metadata
 */
class OPENAPI_API OpenAPIIntegrationMetadata : public Model
{
public:
    virtual ~OpenAPIIntegrationMetadata() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> Id;
	TOptional<FString> ExternalBusinessId;
	TOptional<FString> ConnectedMerchantId;
	TOptional<FString> ConnectedUserId;
	TOptional<FString> ConnectedAdvertiserId;
	TOptional<FString> ConnectedLbaId;
	TOptional<FString> ConnectedTagId;
	TOptional<double> PartnerAccessTokenExpiry;
	TOptional<double> PartnerRefreshTokenExpiry;
	TOptional<FString> Scopes;
	TOptional<double> CreatedTimestamp;
	TOptional<double> UpdatedTimestamp;
	TOptional<FString> AdditionalId1;
	TOptional<FString> PartnerMetadata;
};

}
