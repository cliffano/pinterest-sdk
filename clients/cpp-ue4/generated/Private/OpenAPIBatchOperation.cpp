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

#include "OpenAPIBatchOperation.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIBatchOperation::Values& Value)
{
	switch (Value)
	{
	case OpenAPIBatchOperation::Values::Update:
		return TEXT("UPDATE");
	case OpenAPIBatchOperation::Values::Create:
		return TEXT("CREATE");
	case OpenAPIBatchOperation::Values::Upsert:
		return TEXT("UPSERT");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIBatchOperation::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIBatchOperation::EnumToString(const OpenAPIBatchOperation::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIBatchOperation::Values& Value)
{
	static TMap<FString, OpenAPIBatchOperation::Values> StringToEnum = { 
		{ TEXT("UPDATE"), OpenAPIBatchOperation::Values::Update },
		{ TEXT("CREATE"), OpenAPIBatchOperation::Values::Create },
		{ TEXT("UPSERT"), OpenAPIBatchOperation::Values::Upsert }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIBatchOperation::EnumFromString(const FString& EnumAsString, OpenAPIBatchOperation::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIBatchOperation::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIBatchOperation::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIBatchOperation::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIBatchOperation::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIBatchOperation::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
