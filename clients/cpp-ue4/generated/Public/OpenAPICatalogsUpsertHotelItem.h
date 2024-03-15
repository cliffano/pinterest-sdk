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
#include "OpenAPICatalogsHotelAttributes.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsUpsertHotelItem
 *
 * A hotel item to be upserted.
 */
class OPENAPI_API OpenAPICatalogsUpsertHotelItem : public Model
{
public:
    virtual ~OpenAPICatalogsUpsertHotelItem() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The catalog hotel id in the merchant namespace */
	FString HotelId;
	enum class OperationEnum
	{
		Upsert,
  	};

	static FString EnumToString(const OperationEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, OperationEnum& EnumValue);
	OperationEnum Operation;
	OpenAPICatalogsHotelAttributes Attributes;
};

}