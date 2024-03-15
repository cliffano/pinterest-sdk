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

#include "OpenAPICatalogsFeed.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsFeed::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (CreatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("created_at")); WriteJsonValue(Writer, CreatedAt.GetValue());
	}
	if (Id.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id.GetValue());
	}
	if (UpdatedAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("updated_at")); WriteJsonValue(Writer, UpdatedAt.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name);
	Writer->WriteIdentifierPrefix(TEXT("format")); WriteJsonValue(Writer, Format);
	Writer->WriteIdentifierPrefix(TEXT("catalog_type")); WriteJsonValue(Writer, CatalogType);
	Writer->WriteIdentifierPrefix(TEXT("credentials")); WriteJsonValue(Writer, Credentials);
	Writer->WriteIdentifierPrefix(TEXT("location")); WriteJsonValue(Writer, Location);
	Writer->WriteIdentifierPrefix(TEXT("preferred_processing_schedule")); WriteJsonValue(Writer, PreferredProcessingSchedule);
	Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status);
	Writer->WriteIdentifierPrefix(TEXT("default_currency")); WriteJsonValue(Writer, DefaultCurrency);
	Writer->WriteIdentifierPrefix(TEXT("default_locale")); WriteJsonValue(Writer, DefaultLocale);
	Writer->WriteIdentifierPrefix(TEXT("default_country")); WriteJsonValue(Writer, DefaultCountry);
	Writer->WriteIdentifierPrefix(TEXT("default_availability")); WriteJsonValue(Writer, DefaultAvailability);
	Writer->WriteIdentifierPrefix(TEXT("catalog_id")); WriteJsonValue(Writer, CatalogId);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsFeed::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("created_at"), CreatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("updated_at"), UpdatedAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("format"), Format);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalog_type"), CatalogType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("credentials"), Credentials);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("location"), Location);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("preferred_processing_schedule"), PreferredProcessingSchedule);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_currency"), DefaultCurrency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_locale"), DefaultLocale);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_country"), DefaultCountry);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_availability"), DefaultAvailability);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("catalog_id"), CatalogId);

	return ParseSuccess;
}

}
