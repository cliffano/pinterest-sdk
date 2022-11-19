/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.6.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICatalogsFeedIngestionErrors.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

inline FString ToString(const OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum& Value)
{
	switch (Value)
	{
	case OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum::_1:
		return TEXT("1");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum Value (%d)"), (int)Value);
	return TEXT("");
}

FString OpenAPICatalogsFeedIngestionErrors::EnumToString(const OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum& EnumValue)
{
	return ToString(EnumValue);
}

inline bool FromString(const FString& EnumAsString, OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum& Value)
{
	static TMap<FString, OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum> StringToEnum = { 
		{ TEXT("1"), OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum::_1 }, };

	const auto Found = StringToEnum.Find(EnumAsString);
	if(Found)
		Value = *Found;

	return Found != nullptr;
}

bool OpenAPICatalogsFeedIngestionErrors::EnumFromString(const FString& EnumAsString, OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum& EnumValue)
{
	return FromString(EnumAsString, EnumValue);
}

inline FStringFormatArg ToStringFormatArg(const OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPICatalogsFeedIngestionErrors::LargeProductCountDecreaseEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		if(FromString(TmpValue, Value))
			return true;
	}
	return false;
}

void OpenAPICatalogsFeedIngestionErrors::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (ImageDownloadError.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("IMAGE_DOWNLOAD_ERROR")); WriteJsonValue(Writer, ImageDownloadError.GetValue());
	}
	if (LineLevelInternalError.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("LINE_LEVEL_INTERNAL_ERROR")); WriteJsonValue(Writer, LineLevelInternalError.GetValue());
	}
	if (LargeProductCountDecrease.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("LARGE_PRODUCT_COUNT_DECREASE")); WriteJsonValue(Writer, LargeProductCountDecrease.GetValue());
	}
	if (AccountFlagged.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ACCOUNT_FLAGGED")); WriteJsonValue(Writer, AccountFlagged.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsFeedIngestionErrors::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("IMAGE_DOWNLOAD_ERROR"), ImageDownloadError);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("LINE_LEVEL_INTERNAL_ERROR"), LineLevelInternalError);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("LARGE_PRODUCT_COUNT_DECREASE"), LargeProductCountDecrease);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ACCOUNT_FLAGGED"), AccountFlagged);

	return ParseSuccess;
}

}
