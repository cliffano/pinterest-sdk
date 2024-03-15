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
#include "OpenAPICatalogsProductGroupUpdateRequest.h"
#include "OpenAPICatalogsVerticalProductGroupUpdateRequest.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsProductGroupsUpdateRequest
 *
 * 
 */
class OPENAPI_API OpenAPICatalogsProductGroupsUpdateRequest : public Model
{
public:
    virtual ~OpenAPICatalogsProductGroupsUpdateRequest() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<FString> Name;
	TOptional<FString> Description;
	/* boolean indicator of whether the product group is being featured or not */
	TOptional<bool> IsFeatured;
	TOptional<OpenAPICatalogsHotelProductGroupFilters> Filters;
	enum class CatalogTypeEnum
	{
		Hotel,
  	};

	static FString EnumToString(const CatalogTypeEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, CatalogTypeEnum& EnumValue);
	TOptional<CatalogTypeEnum> CatalogType;
};

}