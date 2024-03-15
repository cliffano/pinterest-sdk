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

#include "OpenAPICatalogsProductGroupsCreate201Response.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum& Value)
{
	switch (Value)
	{
	case OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum::Null:
		return TEXT("null");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICatalogsProductGroupsCreate201Response::EnumToString(const OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum& Value)
{
	static TMap<FString, OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum> StringToEnum = { 
		{ TEXT("null"), OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum::Null }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICatalogsProductGroupsCreate201Response::EnumFromString(const FString& EnumAsString, OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICatalogsProductGroupsCreate201Response::FeedIdEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

inline FString ToString(const OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum::Retail:
		return TEXT("RETAIL");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICatalogsProductGroupsCreate201Response::EnumToString(const OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum& Value)
{
	static TMap<FString, OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum> StringToEnum = { 
		{ TEXT("RETAIL"), OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum::Retail }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICatalogsProductGroupsCreate201Response::EnumFromString(const FString& EnumAsString, OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICatalogsProductGroupsCreate201Response::CatalogTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICatalogsProductGroupsCreate201Response::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id);
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (Description.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("description")); WriteJsonValue(Writer, Description.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("filters")); WriteJsonValue(Writer, Filters);
	if (IsFeatured.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_featured")); WriteJsonValue(Writer, IsFeatured.GetValue());
	}
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	if (CreatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("created_at")); WriteJsonValue(Writer, CreatedAt.GetValue());
	}
	if (UpdatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("updated_at")); WriteJsonValue(Writer, UpdatedAt.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("feed_id")); WriteJsonValue(Writer, FeedId);
	Writer->WriteIdentifierPrefix(TEXT("catalog_type")); WriteJsonValue(Writer, CatalogType);
	Writer->WriteIdentifierPrefix(TEXT("catalog_id")); WriteJsonValue(Writer, CatalogId);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsProductGroupsCreate201Response::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("description"), Description);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("filters"), Filters);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_featured"), IsFeatured);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("created_at"), CreatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("updated_at"), UpdatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("feed_id"), FeedId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalog_type"), CatalogType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalog_id"), CatalogId);

	return ParseSuccess;
}

}
