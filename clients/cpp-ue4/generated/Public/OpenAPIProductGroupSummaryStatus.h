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
 * OpenAPIProductGroupSummaryStatus
 *
 * Summary status for product group
 */
class OPENAPI_API OpenAPIProductGroupSummaryStatus : public Model
{
public:
    virtual ~OpenAPIProductGroupSummaryStatus() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class Values
	{
		Running,
		Paused,
		Excluded,
		Archived,
  	};

	Values Value;

	static FString EnumToString(const Values& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, Values& EnumValue);
};

}
