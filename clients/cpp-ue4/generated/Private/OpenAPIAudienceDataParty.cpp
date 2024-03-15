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

#include "OpenAPIAudienceDataParty.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIAudienceDataParty::Values& Value)
{
	switch (Value)
	{
	case OpenAPIAudienceDataParty::Values::_1p:
		return TEXT("1p");
	case OpenAPIAudienceDataParty::Values::_3p:
		return TEXT("3p");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIAudienceDataParty::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIAudienceDataParty::EnumToString(const OpenAPIAudienceDataParty::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIAudienceDataParty::Values& Value)
{
	static TMap<FString, OpenAPIAudienceDataParty::Values> StringToEnum = { 
		{ TEXT("1p"), OpenAPIAudienceDataParty::Values::_1p },
		{ TEXT("3p"), OpenAPIAudienceDataParty::Values::_3p }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIAudienceDataParty::EnumFromString(const FString& EnumAsString, OpenAPIAudienceDataParty::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIAudienceDataParty::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIAudienceDataParty::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIAudienceDataParty::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIAudienceDataParty::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
