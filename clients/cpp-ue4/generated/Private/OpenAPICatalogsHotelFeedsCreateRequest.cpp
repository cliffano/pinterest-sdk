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

#include "OpenAPICatalogsHotelFeedsCreateRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsHotelFeedsCreateRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (DefaultCurrency.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("default_currency")); WriteJsonValue(Writer, DefaultCurrency.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name);
	Writer->WriteIdentifierPrefix(TEXT("format")); WriteJsonValue(Writer, Format);
	Writer->WriteIdentifierPrefix(TEXT("default_locale")); WriteJsonValue(Writer, DefaultLocale);
	if (Credentials.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("credentials")); WriteJsonValue(Writer, Credentials.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("location")); WriteJsonValue(Writer, Location);
	if (PreferredProcessingSchedule.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("preferred_processing_schedule")); WriteJsonValue(Writer, PreferredProcessingSchedule.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("catalog_type")); WriteJsonValue(Writer, CatalogType);
	if (CatalogId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("catalog_id")); WriteJsonValue(Writer, CatalogId.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsHotelFeedsCreateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_currency"), DefaultCurrency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("format"), Format);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_locale"), DefaultLocale);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("credentials"), Credentials);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("location"), Location);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("preferred_processing_schedule"), PreferredProcessingSchedule);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalog_type"), CatalogType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalog_id"), CatalogId);

	return ParseSuccess;
}

}