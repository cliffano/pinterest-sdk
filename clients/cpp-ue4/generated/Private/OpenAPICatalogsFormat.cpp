/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICatalogsFormat.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICatalogsFormat::Values& Value)
{
	switch (Value)
	{
	case OpenAPICatalogsFormat::Values::Tsv:
		return TEXT("TSV");
	case OpenAPICatalogsFormat::Values::Csv:
		return TEXT("CSV");
	case OpenAPICatalogsFormat::Values::Xml:
		return TEXT("XML");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICatalogsFormat::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICatalogsFormat::EnumToString(const OpenAPICatalogsFormat::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICatalogsFormat::Values& Value)
{
	static TMap<FString, OpenAPICatalogsFormat::Values> StringToEnum = { 
		{ TEXT("TSV"), OpenAPICatalogsFormat::Values::Tsv },
		{ TEXT("CSV"), OpenAPICatalogsFormat::Values::Csv },
		{ TEXT("XML"), OpenAPICatalogsFormat::Values::Xml }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICatalogsFormat::EnumFromString(const FString& EnumAsString, OpenAPICatalogsFormat::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICatalogsFormat::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICatalogsFormat::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICatalogsFormat::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICatalogsFormat::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPICatalogsFormat::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
