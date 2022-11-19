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

#include "OpenAPIConversionAttributionWindowDays.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIConversionAttributionWindowDays::Values& Value)
{
	switch (Value)
	{
	case OpenAPIConversionAttributionWindowDays::Values::_1:
		return TEXT("1");
	case OpenAPIConversionAttributionWindowDays::Values::_7:
		return TEXT("7");
	case OpenAPIConversionAttributionWindowDays::Values::_30:
		return TEXT("30");
	case OpenAPIConversionAttributionWindowDays::Values::_60:
		return TEXT("60");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIConversionAttributionWindowDays::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIConversionAttributionWindowDays::EnumToString(const OpenAPIConversionAttributionWindowDays::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIConversionAttributionWindowDays::Values& Value)
{
	static TMap<FString, OpenAPIConversionAttributionWindowDays::Values> StringToEnum = { 
		{ TEXT("1"), OpenAPIConversionAttributionWindowDays::Values::_1 },
		{ TEXT("7"), OpenAPIConversionAttributionWindowDays::Values::_7 },
		{ TEXT("30"), OpenAPIConversionAttributionWindowDays::Values::_30 },
		{ TEXT("60"), OpenAPIConversionAttributionWindowDays::Values::_60 }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIConversionAttributionWindowDays::EnumFromString(const FString& EnumAsString, OpenAPIConversionAttributionWindowDays::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIConversionAttributionWindowDays::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIConversionAttributionWindowDays::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIConversionAttributionWindowDays::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIConversionAttributionWindowDays::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteObjectEnd();
}

bool OpenAPIConversionAttributionWindowDays::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;


	return ParseSuccess;
}

}
