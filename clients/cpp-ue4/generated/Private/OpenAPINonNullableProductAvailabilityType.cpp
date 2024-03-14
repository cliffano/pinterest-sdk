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

#include "OpenAPINonNullableProductAvailabilityType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPINonNullableProductAvailabilityType::Values& Value)
{
	switch (Value)
	{
	case OpenAPINonNullableProductAvailabilityType::Values::InStock:
		return TEXT("IN_STOCK");
	case OpenAPINonNullableProductAvailabilityType::Values::OutOfStock:
		return TEXT("OUT_OF_STOCK");
	case OpenAPINonNullableProductAvailabilityType::Values::Preorder:
		return TEXT("PREORDER");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPINonNullableProductAvailabilityType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPINonNullableProductAvailabilityType::EnumToString(const OpenAPINonNullableProductAvailabilityType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPINonNullableProductAvailabilityType::Values& Value)
{
	static TMap<FString, OpenAPINonNullableProductAvailabilityType::Values> StringToEnum = { 
		{ TEXT("IN_STOCK"), OpenAPINonNullableProductAvailabilityType::Values::InStock },
		{ TEXT("OUT_OF_STOCK"), OpenAPINonNullableProductAvailabilityType::Values::OutOfStock },
		{ TEXT("PREORDER"), OpenAPINonNullableProductAvailabilityType::Values::Preorder }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPINonNullableProductAvailabilityType::EnumFromString(const FString& EnumAsString, OpenAPINonNullableProductAvailabilityType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPINonNullableProductAvailabilityType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPINonNullableProductAvailabilityType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPINonNullableProductAvailabilityType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPINonNullableProductAvailabilityType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
