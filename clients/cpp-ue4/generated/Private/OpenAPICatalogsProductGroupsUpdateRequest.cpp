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

#include "OpenAPICatalogsProductGroupsUpdateRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum::Hotel:
		return TEXT("HOTEL");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICatalogsProductGroupsUpdateRequest::EnumToString(const OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum& Value)
{
	static TMap<FString, OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum> StringToEnum = { 
		{ TEXT("HOTEL"), OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum::Hotel }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICatalogsProductGroupsUpdateRequest::EnumFromString(const FString& EnumAsString, OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICatalogsProductGroupsUpdateRequest::CatalogTypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICatalogsProductGroupsUpdateRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (Description.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("description")); WriteJsonValue(Writer, Description.GetValue());
	}
	if (IsFeatured.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_featured")); WriteJsonValue(Writer, IsFeatured.GetValue());
	}
	if (Filters.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("filters")); WriteJsonValue(Writer, Filters.GetValue());
	}
	if (CatalogType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("catalog_type")); WriteJsonValue(Writer, CatalogType.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsProductGroupsUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("description"), Description);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_featured"), IsFeatured);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("filters"), Filters);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalog_type"), CatalogType);

	return ParseSuccess;
}

}