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

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPICatalogsHotelProductGroup.h"
#include "OpenAPICatalogsProductGroupFilters.h"
#include "OpenAPICatalogsProductGroupStatus.h"
#include "OpenAPICatalogsProductGroupType.h"
#include "OpenAPICatalogsRetailProductGroup.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsVerticalProductGroup
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsVerticalProductGroup : public Model
{
public:
    virtual ~OpenAPICatalogsVerticalProductGroup() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class CatalogTypeEnum
	{
		Retail,
  	};

	static FString EnumToString(const CatalogTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, CatalogTypeEnum& EnumValue);
	CatalogTypeEnum CatalogType;
	/* ID of the catalog product group. */
	FString Id;
	/* Name of catalog product group */
	TOptional<FString> Name;
	TOptional<FString> Description;
	OpenAPICatalogsProductGroupFilters Filters;
	/* Unix timestamp in seconds of when catalog product group was created. */
	TOptional<int32> CreatedAt;
	/* Unix timestamp in seconds of last time catalog product group was updated. */
	TOptional<int32> UpdatedAt;
	FString CatalogId;
	/* boolean indicator of whether the product group is being featured or not */
	TOptional<bool> IsFeatured;
	TOptional<OpenAPICatalogsProductGroupType> Type;
	TOptional<OpenAPICatalogsProductGroupStatus> Status;
	enum class FeedIdEnum
	{
		Null,
  	};

	static FString EnumToString(const FeedIdEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, FeedIdEnum& EnumValue);
	FeedIdEnum FeedId;
};

}
