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
 * OpenAPICurrency
 *
 * Currency Codes from ISO 4217
 */
class OPENAPI_API OpenAPICurrency : public Model
{
public:
    virtual ~OpenAPICurrency() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class Values
	{
		Unk,
		Usd,
		Gbp,
		Cad,
		Eur,
		Aud,
		Nzd,
		Sek,
		Ils,
		Chf,
		Hkd,
		Jpy,
		Sgd,
		Krw,
		Nok,
		Dkk,
		Pln,
		Ron,
		Huf,
		Czk,
		Brl,
		Mxn,
		Ars,
		Clp,
		Cop,
  	};

	Values Value;

	static FString EnumToString(const Values& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, Values& EnumValue);
};

}
