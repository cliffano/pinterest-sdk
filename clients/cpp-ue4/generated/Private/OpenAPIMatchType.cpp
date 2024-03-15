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

#include "OpenAPIMatchType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIMatchType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIMatchType::Values::Broad:
		return TEXT("BROAD");
	case OpenAPIMatchType::Values::Phrase:
		return TEXT("PHRASE");
	case OpenAPIMatchType::Values::Exact:
		return TEXT("EXACT");
	case OpenAPIMatchType::Values::ExactNegative:
		return TEXT("EXACT_NEGATIVE");
	case OpenAPIMatchType::Values::PhraseNegative:
		return TEXT("PHRASE_NEGATIVE");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIMatchType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIMatchType::EnumToString(const OpenAPIMatchType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIMatchType::Values& Value)
{
	static TMap<FString, OpenAPIMatchType::Values> StringToEnum = { 
		{ TEXT("BROAD"), OpenAPIMatchType::Values::Broad },
		{ TEXT("PHRASE"), OpenAPIMatchType::Values::Phrase },
		{ TEXT("EXACT"), OpenAPIMatchType::Values::Exact },
		{ TEXT("EXACT_NEGATIVE"), OpenAPIMatchType::Values::ExactNegative },
		{ TEXT("PHRASE_NEGATIVE"), OpenAPIMatchType::Values::PhraseNegative }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIMatchType::EnumFromString(const FString& EnumAsString, OpenAPIMatchType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIMatchType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIMatchType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIMatchType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIMatchType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
