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
 * OpenAPIDeliveryMetricsResponseItemsInner
 *
 * 
 */
class OPENAPI_API OpenAPIDeliveryMetricsResponseItemsInner : public Model
{
public:
    virtual ~OpenAPIDeliveryMetricsResponseItemsInner() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* Metric's name. */
	TOptional<FString> Name;
	enum class CategoryEnum
	{
		Ads,
		Organic,
  	};

	static FString EnumToString(const CategoryEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, CategoryEnum& EnumValue);
	/* Category name */
	TOptional<CategoryEnum> Category;
	/* How the metric is defined. */
	TOptional<FString> Definition;
	/* Display name, when available. If unavaible it will not be returned. Matches how the metric is named in our native tools like Pinterest Ads Manager. */
	TOptional<FString> DisplayName;
};

}
