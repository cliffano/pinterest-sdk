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
 * OpenAPIConversionEventsUserData
 *
 * Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent.
 */
class OPENAPI_API OpenAPIConversionEventsUserData : public Model
{
public:
    virtual ~OpenAPIConversionEventsUserData() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Sha256 hashes of user's phone numbers, only digits with country code, area code, and number. Remove any symbols, letters, spaces and leading zeros. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA. */
	TOptional<TArray<FString>> Ph;
	/* Sha256 hashes of user's gender, in lowercase. Either \"f\" or \"m\" or \"n\" for non-binary gender. */
	TOptional<TArray<FString>> Ge;
	/* Sha256 hashes of user's date of birthday, given as year, month, and day. */
	TOptional<TArray<FString>> Db;
	/* Sha256 hashes of user's last name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA. */
	TOptional<TArray<FString>> Ln;
	/* Sha256 hashes of user's first name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA. */
	TOptional<TArray<FString>> Fn;
	/* Sha256 hashes of user's city, in lowercase, and without spaces or punctuation. User residency city (mostly billing). */
	TOptional<TArray<FString>> Ct;
	/* Sha256 hashes of user's state, given as a two-letter code in lowercase. User residency state (mostly billing). */
	TOptional<TArray<FString>> St;
	/* Sha256 hashes of user's zipcode, only digits. User residency zipcode (mostly billing). */
	TOptional<TArray<FString>> Zp;
	/* Sha256 hashes of two-character ISO-3166 country code indicating the user's country, in lowercase. */
	TOptional<TArray<FString>> Country;
	/* Sha256 hashes of the unique id from the advertiser that identifies a user in their space, e.g. user id, loyalty id, etc. We highly recommend this on all events. It may improve reporting performance such as ROAS/CPA. */
	TOptional<TArray<FString>> ExternalId;
	/* The unique identifier stored in _epik cookie on your domain or &epik= query parameter in the URL. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA. */
	TOptional<FString> ClickId;
	/* A unique identifier of visitors' information defined by third party partners. e.g RampID */
	TOptional<FString> PartnerId;
};

}
