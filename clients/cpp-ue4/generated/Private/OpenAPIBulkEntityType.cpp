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

#include "OpenAPIBulkEntityType.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPIBulkEntityType::Values& Value)
{
	switch (Value)
	{
	case OpenAPIBulkEntityType::Values::Campaign:
		return TEXT("CAMPAIGN");
	case OpenAPIBulkEntityType::Values::AdGroup:
		return TEXT("AD_GROUP");
	case OpenAPIBulkEntityType::Values::ProductGroup:
		return TEXT("PRODUCT_GROUP");
	case OpenAPIBulkEntityType::Values::Ad:
		return TEXT("AD");
	case OpenAPIBulkEntityType::Values::Keyword:
		return TEXT("KEYWORD");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIBulkEntityType::Values Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPIBulkEntityType::EnumToString(const OpenAPIBulkEntityType::Values& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPIBulkEntityType::Values& Value)
{
	static TMap<FString, OpenAPIBulkEntityType::Values> StringToEnum = { 
		{ TEXT("CAMPAIGN"), OpenAPIBulkEntityType::Values::Campaign },
		{ TEXT("AD_GROUP"), OpenAPIBulkEntityType::Values::AdGroup },
		{ TEXT("PRODUCT_GROUP"), OpenAPIBulkEntityType::Values::ProductGroup },
		{ TEXT("AD"), OpenAPIBulkEntityType::Values::Ad },
		{ TEXT("KEYWORD"), OpenAPIBulkEntityType::Values::Keyword }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPIBulkEntityType::EnumFromString(const FString& EnumAsString, OpenAPIBulkEntityType::Values& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIBulkEntityType::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIBulkEntityType::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPIBulkEntityType::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIBulkEntityType::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
