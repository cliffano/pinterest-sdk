/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPICatalogsFeedsCreateRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsFeedsCreateRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (DefaultCountry.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("default_country")); WriteJsonValue(Writer, DefaultCountry.GetValue());
	}
	if (DefaultAvailability.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("default_availability")); WriteJsonValue(Writer, DefaultAvailability.GetValue());
	}
	if (DefaultCurrency.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("default_currency")); WriteJsonValue(Writer, DefaultCurrency.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name);
	Writer->WriteIdentifierPrefix(TEXT("format")); WriteJsonValue(Writer, Format);
	if (DefaultLocale.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("default_locale")); WriteJsonValue(Writer, DefaultLocale.GetValue());
	}
	if (Credentials.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("credentials")); WriteJsonValue(Writer, Credentials.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("location")); WriteJsonValue(Writer, Location);
	if (PreferredProcessingSchedule.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("preferred_processing_schedule")); WriteJsonValue(Writer, PreferredProcessingSchedule.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsFeedsCreateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_country"), DefaultCountry);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_availability"), DefaultAvailability);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_currency"), DefaultCurrency);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("format"), Format);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("default_locale"), DefaultLocale);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("credentials"), Credentials);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("location"), Location);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("preferred_processing_schedule"), PreferredProcessingSchedule);

	return ParseSuccess;
}

}
