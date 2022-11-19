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

#include "OpenAPICurrency.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICurrency::Values& Value)
{
	switch (Value)
	{
	case OpenAPICurrency::Values::Unk:
		return TEXT("UNK");
	case OpenAPICurrency::Values::Usd:
		return TEXT("USD");
	case OpenAPICurrency::Values::Gbp:
		return TEXT("GBP");
	case OpenAPICurrency::Values::Cad:
		return TEXT("CAD");
	case OpenAPICurrency::Values::Eur:
		return TEXT("EUR");
	case OpenAPICurrency::Values::Aud:
		return TEXT("AUD");
	case OpenAPICurrency::Values::Nzd:
		return TEXT("NZD");
	case OpenAPICurrency::Values::Sek:
		return TEXT("SEK");
	case OpenAPICurrency::Values::Ils:
		return TEXT("ILS");
	case OpenAPICurrency::Values::Chf:
		return TEXT("CHF");
	case OpenAPICurrency::Values::Hkd:
		return TEXT("HKD");
	case OpenAPICurrency::Values::Jpy:
		return TEXT("JPY");
	case OpenAPICurrency::Values::Sgd:
		return TEXT("SGD");
	case OpenAPICurrency::Values::Krw:
		return TEXT("KRW");
	case OpenAPICurrency::Values::Nok:
		return TEXT("NOK");
	case OpenAPICurrency::Values::Dkk:
		return TEXT("DKK");
	case OpenAPICurrency::Values::Pln:
		return TEXT("PLN");
	case OpenAPICurrency::Values::Ron:
		return TEXT("RON");
	case OpenAPICurrency::Values::Huf:
		return TEXT("HUF");
	case OpenAPICurrency::Values::Czk:
		return TEXT("CZK");
	case OpenAPICurrency::Values::Brl:
		return TEXT("BRL");
	case OpenAPICurrency::Values::Mxn:
		return TEXT("MXN");
	case OpenAPICurrency::Values::Ars:
		return TEXT("ARS");
	case OpenAPICurrency::Values::Clp:
		return TEXT("CLP");
	case OpenAPICurrency::Values::Cop:
		return TEXT("COP");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICurrency::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICurrency::EnumToString(const OpenAPICurrency::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICurrency::Values& Value)
{
	static TMap<FString, OpenAPICurrency::Values> StringToEnum = { 
		{ TEXT("UNK"), OpenAPICurrency::Values::Unk },
		{ TEXT("USD"), OpenAPICurrency::Values::Usd },
		{ TEXT("GBP"), OpenAPICurrency::Values::Gbp },
		{ TEXT("CAD"), OpenAPICurrency::Values::Cad },
		{ TEXT("EUR"), OpenAPICurrency::Values::Eur },
		{ TEXT("AUD"), OpenAPICurrency::Values::Aud },
		{ TEXT("NZD"), OpenAPICurrency::Values::Nzd },
		{ TEXT("SEK"), OpenAPICurrency::Values::Sek },
		{ TEXT("ILS"), OpenAPICurrency::Values::Ils },
		{ TEXT("CHF"), OpenAPICurrency::Values::Chf },
		{ TEXT("HKD"), OpenAPICurrency::Values::Hkd },
		{ TEXT("JPY"), OpenAPICurrency::Values::Jpy },
		{ TEXT("SGD"), OpenAPICurrency::Values::Sgd },
		{ TEXT("KRW"), OpenAPICurrency::Values::Krw },
		{ TEXT("NOK"), OpenAPICurrency::Values::Nok },
		{ TEXT("DKK"), OpenAPICurrency::Values::Dkk },
		{ TEXT("PLN"), OpenAPICurrency::Values::Pln },
		{ TEXT("RON"), OpenAPICurrency::Values::Ron },
		{ TEXT("HUF"), OpenAPICurrency::Values::Huf },
		{ TEXT("CZK"), OpenAPICurrency::Values::Czk },
		{ TEXT("BRL"), OpenAPICurrency::Values::Brl },
		{ TEXT("MXN"), OpenAPICurrency::Values::Mxn },
		{ TEXT("ARS"), OpenAPICurrency::Values::Ars },
		{ TEXT("CLP"), OpenAPICurrency::Values::Clp },
		{ TEXT("COP"), OpenAPICurrency::Values::Cop }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICurrency::EnumFromString(const FString& EnumAsString, OpenAPICurrency::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICurrency::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICurrency::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICurrency::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICurrency::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPICurrency::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
