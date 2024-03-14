/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
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
 * OpenAPIObjectiveType
 *
 * Campaign objective type. [\&quot;WEB_SESSIONS\&quot;] in BETA.
 */
class OPENAPI_API OpenAPIObjectiveType : public Model
{
public:
    virtual ~OpenAPIObjectiveType() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class Values
	{
		Awareness,
		Consideration,
		VideoView,
		WebConversion,
		CatalogSales,
		WebSessions,
  	};

	Values Value;

	static FString EnumToString(const Values& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, Values& EnumValue);
};

}
