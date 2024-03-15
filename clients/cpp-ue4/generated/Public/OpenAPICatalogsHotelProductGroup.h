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
#include "OpenAPICatalogsHotelProductGroupFilters.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsHotelProductGroup
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsHotelProductGroup : public Model
{
public:
    virtual ~OpenAPICatalogsHotelProductGroup() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class CatalogTypeEnum
	{
		Hotel,
  	};

	static FString EnumToString(const CatalogTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, CatalogTypeEnum& EnumValue);
	CatalogTypeEnum CatalogType;
	/* ID of the hotel product group. */
	FString Id;
	/* Name of hotel product group */
	TOptional<FString> Name;
	TOptional<FString> Description;
	OpenAPICatalogsHotelProductGroupFilters Filters;
	/* Unix timestamp in seconds of when catalog product group was created. */
	TOptional<int32> CreatedAt;
	/* Unix timestamp in seconds of last time catalog product group was updated. */
	TOptional<int32> UpdatedAt;
	FString CatalogId;
};

}
