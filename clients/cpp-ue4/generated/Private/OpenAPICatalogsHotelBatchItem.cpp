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

#include "OpenAPICatalogsHotelBatchItem.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICatalogsHotelBatchItem::OperationEnum& Value)
{
	switch (Value)
	{
	case OpenAPICatalogsHotelBatchItem::OperationEnum::_Delete:
		return TEXT("DELETE");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICatalogsHotelBatchItem::OperationEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICatalogsHotelBatchItem::EnumToString(const OpenAPICatalogsHotelBatchItem::OperationEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICatalogsHotelBatchItem::OperationEnum& Value)
{
	static TMap<FString, OpenAPICatalogsHotelBatchItem::OperationEnum> StringToEnum = { 
		{ TEXT("DELETE"), OpenAPICatalogsHotelBatchItem::OperationEnum::_Delete }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICatalogsHotelBatchItem::EnumFromString(const FString& EnumAsString, OpenAPICatalogsHotelBatchItem::OperationEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICatalogsHotelBatchItem::OperationEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICatalogsHotelBatchItem::OperationEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICatalogsHotelBatchItem::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("hotel_id")); WriteJsonValue(Writer, HotelId);
	Writer->WriteIdentifierPrefix(TEXT("operation")); WriteJsonValue(Writer, Operation);
	Writer->WriteIdentifierPrefix(TEXT("attributes")); WriteJsonValue(Writer, Attributes);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsHotelBatchItem::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("hotel_id"), HotelId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("operation"), Operation);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("attributes"), Attributes);

	return ParseSuccess;
}

}
