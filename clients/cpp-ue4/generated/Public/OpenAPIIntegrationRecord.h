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
 * OpenAPIIntegrationRecord
 *
 * Integration record
 */
class OPENAPI_API OpenAPIIntegrationRecord : public Model
{
public:
    virtual ~OpenAPIIntegrationRecord() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> Id;
	TOptional<FString> ExternalBusinessId;
	TOptional<FString> ConnectedMerchantId;
	TOptional<FString> ConnectedUserId;
	TOptional<FString> ConnectedAdvertiserId;
	TOptional<FString> ConnectedLbaId;
	TOptional<FString> ConnectedTagId;
	TOptional<FString> PartnerAccessToken;
	TOptional<FString> PartnerRefreshToken;
	TOptional<FString> PartnerPrimaryEmail;
	TOptional<int32> PartnerAccessTokenExpiry;
	TOptional<int32> PartnerRefreshTokenExpiry;
	TOptional<FString> Scopes;
	TOptional<FString> PartnerMetadata;
	TOptional<FString> AdditionalId1;
	TOptional<int32> CreatedTime;
	TOptional<int32> UpdatedTime;
};

}
