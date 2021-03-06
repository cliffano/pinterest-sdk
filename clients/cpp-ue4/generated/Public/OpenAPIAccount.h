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
 * OpenAPIAccount
 *
 * 
 */
class OPENAPI_API OpenAPIAccount : public Model
{
public:
    virtual ~OpenAPIAccount() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class AccountTypeEnum
	{
		Pinner,
		Business,
  	};

	static FString EnumToString(const AccountTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, AccountTypeEnum& EnumValue);
	/* Type of account */
	TOptional<AccountTypeEnum> AccountType;
	TOptional<FString> ProfileImage;
	TOptional<FString> WebsiteUrl;
	TOptional<FString> Username;
};

}
