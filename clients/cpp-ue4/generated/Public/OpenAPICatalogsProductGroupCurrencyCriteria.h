/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPINonNullableCatalogsCurrency.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsProductGroupCurrencyCriteria
 *
 * A currency filter. This filter cannot be negated
 */
class OPENAPI_API OpenAPICatalogsProductGroupCurrencyCriteria : public Model
{
public:
    virtual ~OpenAPICatalogsProductGroupCurrencyCriteria() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	OpenAPINonNullableCatalogsCurrency Values;
	enum class NegatedEnum
	{
		_False,
  	};

	static FString EnumToString(const NegatedEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, NegatedEnum& EnumValue);
	TOptional<NegatedEnum> Negated;
};

}
