/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIBoardOwner.h"

namespace OpenAPI
{

/*
 * OpenAPIBoard
 *
 * Board
 */
class OPENAPI_API OpenAPIBoard : public Model
{
public:
    virtual ~OpenAPIBoard() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> Id;
	FString Name;
	TOptional<FString> Description;
	TOptional<OpenAPIBoardOwner> Owner;
	enum class PrivacyEnum
	{
		_Public,
		_Protected,
		Secret,
  	};

	static FString EnumToString(const PrivacyEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, PrivacyEnum& EnumValue);
	/* Privacy setting for a board. Learn more about <a href=\"https://help.pinterest.com/en/article/secret-boards\">secret boards</a> and <a href=\"https://help.pinterest.com/en/business/article/protected-boards\">protected boards</a> */
	TOptional<PrivacyEnum> Privacy;
};

}
