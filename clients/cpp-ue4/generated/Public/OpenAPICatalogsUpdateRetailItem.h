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
#include "OpenAPIUpdatableItemAttributes.h"
#include "OpenAPIUpdateMaskFieldType.h"

namespace OpenAPI
{

/*
 * OpenAPICatalogsUpdateRetailItem
 *
 * An item to be updated
 */
class OPENAPI_API OpenAPICatalogsUpdateRetailItem : public Model
{
public:
    virtual ~OpenAPICatalogsUpdateRetailItem() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The catalog item id in the merchant namespace */
	FString ItemId;
	enum class OperationEnum
	{
		Create,
		Update,
		Upsert,
		_Delete,
  	};

	static FString EnumToString(const OperationEnum& EnumValue);
	static bool EnumFromString(const FString& EnumAsString, OperationEnum& EnumValue);
	OperationEnum Operation;
	OpenAPIUpdatableItemAttributes Attributes;
	/* The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item. */
	TOptional<TArray<OpenAPIUpdateMaskFieldType>> UpdateMask;
};

}