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

#include "OpenAPICustomerList.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICustomerList::StatusEnum& Value)
{
	switch (Value)
	{
	case OpenAPICustomerList::StatusEnum::Processing:
		return TEXT("PROCESSING");
	case OpenAPICustomerList::StatusEnum::Ready:
		return TEXT("READY");
	case OpenAPICustomerList::StatusEnum::TooSmall:
		return TEXT("TOO_SMALL");
	case OpenAPICustomerList::StatusEnum::Uploading:
		return TEXT("UPLOADING");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICustomerList::StatusEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICustomerList::EnumToString(const OpenAPICustomerList::StatusEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICustomerList::StatusEnum& Value)
{
	static TMap<FString, OpenAPICustomerList::StatusEnum> StringToEnum = { 
		{ TEXT("PROCESSING"), OpenAPICustomerList::StatusEnum::Processing },
		{ TEXT("READY"), OpenAPICustomerList::StatusEnum::Ready },
		{ TEXT("TOO_SMALL"), OpenAPICustomerList::StatusEnum::TooSmall },
		{ TEXT("UPLOADING"), OpenAPICustomerList::StatusEnum::Uploading }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICustomerList::EnumFromString(const FString& EnumAsString, OpenAPICustomerList::StatusEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICustomerList::StatusEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICustomerList::StatusEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICustomerList::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AdAccountId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ad_account_id")); WriteJsonValue(Writer, AdAccountId.GetValue());
	}
	if (CreatedTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("created_time")); WriteJsonValue(Writer, CreatedTime.GetValue());
	}
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (NumBatches.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("num_batches")); WriteJsonValue(Writer, NumBatches.GetValue());
	}
	if (NumRemovedUserRecords.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("num_removed_user_records")); WriteJsonValue(Writer, NumRemovedUserRecords.GetValue());
	}
	if (NumUploadedUserRecords.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("num_uploaded_user_records")); WriteJsonValue(Writer, NumUploadedUserRecords.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	if (Type.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type.GetValue());
	}
	if (UpdatedTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("updated_time")); WriteJsonValue(Writer, UpdatedTime.GetValue());
	}
	if (Exceptions.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("exceptions")); WriteJsonValue(Writer, Exceptions.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICustomerList::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_account_id"), AdAccountId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("created_time"), CreatedTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("num_batches"), NumBatches);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("num_removed_user_records"), NumRemovedUserRecords);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("num_uploaded_user_records"), NumUploadedUserRecords);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("updated_time"), UpdatedTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("exceptions"), Exceptions);

	return ParseSuccess;
}

}
