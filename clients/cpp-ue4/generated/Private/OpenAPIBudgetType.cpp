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

#include "OpenAPIBudgetType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIBudgetType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIBudgetType::Values::Daily:
		return TEXT("DAILY");
	case OpenAPIBudgetType::Values::Lifetime:
		return TEXT("LIFETIME");
	case OpenAPIBudgetType::Values::CboAdgroup:
		return TEXT("CBO_ADGROUP");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIBudgetType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIBudgetType::EnumToString(const OpenAPIBudgetType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIBudgetType::Values& Value)
{
	static TMap<FString, OpenAPIBudgetType::Values> StringToEnum = { 
		{ TEXT("DAILY"), OpenAPIBudgetType::Values::Daily },
		{ TEXT("LIFETIME"), OpenAPIBudgetType::Values::Lifetime },
		{ TEXT("CBO_ADGROUP"), OpenAPIBudgetType::Values::CboAdgroup }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIBudgetType::EnumFromString(const FString& EnumAsString, OpenAPIBudgetType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIBudgetType::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIBudgetType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIBudgetType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIBudgetType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIBudgetType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
