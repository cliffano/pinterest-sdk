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

#include "OpenAPIEntityStatus.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIEntityStatus::Values& Value)
{
	switch (Value)
	{
	case OpenAPIEntityStatus::Values::Active:
		return TEXT("ACTIVE");
	case OpenAPIEntityStatus::Values::Paused:
		return TEXT("PAUSED");
	case OpenAPIEntityStatus::Values::Archived:
		return TEXT("ARCHIVED");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIEntityStatus::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIEntityStatus::EnumToString(const OpenAPIEntityStatus::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIEntityStatus::Values& Value)
{
	static TMap<FString, OpenAPIEntityStatus::Values> StringToEnum = { 
		{ TEXT("ACTIVE"), OpenAPIEntityStatus::Values::Active },
		{ TEXT("PAUSED"), OpenAPIEntityStatus::Values::Paused },
		{ TEXT("ARCHIVED"), OpenAPIEntityStatus::Values::Archived }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIEntityStatus::EnumFromString(const FString& EnumAsString, OpenAPIEntityStatus::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIEntityStatus::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIEntityStatus::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIEntityStatus::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIEntityStatus::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIEntityStatus::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
