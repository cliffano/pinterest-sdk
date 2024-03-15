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

#include "OpenAPITrendsSupportedRegion.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPITrendsSupportedRegion::Values& Value)
{
	switch (Value)
	{
	case OpenAPITrendsSupportedRegion::Values::Us:
		return TEXT("US");
	case OpenAPITrendsSupportedRegion::Values::Ca:
		return TEXT("CA");
	case OpenAPITrendsSupportedRegion::Values::De:
		return TEXT("DE");
	case OpenAPITrendsSupportedRegion::Values::Fr:
		return TEXT("FR");
	case OpenAPITrendsSupportedRegion::Values::Es:
		return TEXT("ES");
	case OpenAPITrendsSupportedRegion::Values::It:
		return TEXT("IT");
	case OpenAPITrendsSupportedRegion::Values::Deatch:
		return TEXT("DE+AT+CH");
	case OpenAPITrendsSupportedRegion::Values::Gbie:
		return TEXT("GB+IE");
	case OpenAPITrendsSupportedRegion::Values::Itesptgrmt:
		return TEXT("IT+ES+PT+GR+MT");
	case OpenAPITrendsSupportedRegion::Values::Plrohuskcz:
		return TEXT("PL+RO+HU+SK+CZ");
	case OpenAPITrendsSupportedRegion::Values::Sedkfino:
		return TEXT("SE+DK+FI+NO");
	case OpenAPITrendsSupportedRegion::Values::Nlbelu:
		return TEXT("NL+BE+LU");
	case OpenAPITrendsSupportedRegion::Values::Ar:
		return TEXT("AR");
	case OpenAPITrendsSupportedRegion::Values::Br:
		return TEXT("BR");
	case OpenAPITrendsSupportedRegion::Values::Co:
		return TEXT("CO");
	case OpenAPITrendsSupportedRegion::Values::Mx:
		return TEXT("MX");
	case OpenAPITrendsSupportedRegion::Values::Mxarcocl:
		return TEXT("MX+AR+CO+CL");
	case OpenAPITrendsSupportedRegion::Values::Aunz:
		return TEXT("AU+NZ");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPITrendsSupportedRegion::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPITrendsSupportedRegion::EnumToString(const OpenAPITrendsSupportedRegion::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPITrendsSupportedRegion::Values& Value)
{
	static TMap<FString, OpenAPITrendsSupportedRegion::Values> StringToEnum = { 
		{ TEXT("US"), OpenAPITrendsSupportedRegion::Values::Us },
		{ TEXT("CA"), OpenAPITrendsSupportedRegion::Values::Ca },
		{ TEXT("DE"), OpenAPITrendsSupportedRegion::Values::De },
		{ TEXT("FR"), OpenAPITrendsSupportedRegion::Values::Fr },
		{ TEXT("ES"), OpenAPITrendsSupportedRegion::Values::Es },
		{ TEXT("IT"), OpenAPITrendsSupportedRegion::Values::It },
		{ TEXT("DE+AT+CH"), OpenAPITrendsSupportedRegion::Values::Deatch },
		{ TEXT("GB+IE"), OpenAPITrendsSupportedRegion::Values::Gbie },
		{ TEXT("IT+ES+PT+GR+MT"), OpenAPITrendsSupportedRegion::Values::Itesptgrmt },
		{ TEXT("PL+RO+HU+SK+CZ"), OpenAPITrendsSupportedRegion::Values::Plrohuskcz },
		{ TEXT("SE+DK+FI+NO"), OpenAPITrendsSupportedRegion::Values::Sedkfino },
		{ TEXT("NL+BE+LU"), OpenAPITrendsSupportedRegion::Values::Nlbelu },
		{ TEXT("AR"), OpenAPITrendsSupportedRegion::Values::Ar },
		{ TEXT("BR"), OpenAPITrendsSupportedRegion::Values::Br },
		{ TEXT("CO"), OpenAPITrendsSupportedRegion::Values::Co },
		{ TEXT("MX"), OpenAPITrendsSupportedRegion::Values::Mx },
		{ TEXT("MX+AR+CO+CL"), OpenAPITrendsSupportedRegion::Values::Mxarcocl },
		{ TEXT("AU+NZ"), OpenAPITrendsSupportedRegion::Values::Aunz }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPITrendsSupportedRegion::EnumFromString(const FString& EnumAsString, OpenAPITrendsSupportedRegion::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPITrendsSupportedRegion::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPITrendsSupportedRegion::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPITrendsSupportedRegion::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPITrendsSupportedRegion::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
