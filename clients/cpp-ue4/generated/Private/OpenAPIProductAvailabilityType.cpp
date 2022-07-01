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

#include "OpenAPIProductAvailabilityType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIProductAvailabilityType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIProductAvailabilityType::Values::InStock:
		return TEXT("IN_STOCK");
	case OpenAPIProductAvailabilityType::Values::OutOfStock:
		return TEXT("OUT_OF_STOCK");
	case OpenAPIProductAvailabilityType::Values::Preorder:
		return TEXT("PREORDER");
	case OpenAPIProductAvailabilityType::Values::Null:
		return TEXT("null");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIProductAvailabilityType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIProductAvailabilityType::EnumToString(const OpenAPIProductAvailabilityType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIProductAvailabilityType::Values& Value)
{
	static TMap<FString, OpenAPIProductAvailabilityType::Values> StringToEnum = { 
		{ TEXT("IN_STOCK"), OpenAPIProductAvailabilityType::Values::InStock },
		{ TEXT("OUT_OF_STOCK"), OpenAPIProductAvailabilityType::Values::OutOfStock },
		{ TEXT("PREORDER"), OpenAPIProductAvailabilityType::Values::Preorder },
		{ TEXT("null"), OpenAPIProductAvailabilityType::Values::Null }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIProductAvailabilityType::EnumFromString(const FString& EnumAsString, OpenAPIProductAvailabilityType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIProductAvailabilityType::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIProductAvailabilityType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIProductAvailabilityType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIProductAvailabilityType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIProductAvailabilityType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
