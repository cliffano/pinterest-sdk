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

#include "OpenAPITargetingSpec1.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITargetingSpec1::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AgeBucket.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("AGE_BUCKET")); WriteJsonValue(Writer, AgeBucket.GetValue());
	}
	if (Apptype.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("APPTYPE")); WriteJsonValue(Writer, Apptype.GetValue());
	}
	if (AudienceExclude.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("AUDIENCE_EXCLUDE")); WriteJsonValue(Writer, AudienceExclude.GetValue());
	}
	if (AudienceInclude.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("AUDIENCE_INCLUDE")); WriteJsonValue(Writer, AudienceInclude.GetValue());
	}
	if (Gender.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("GENDER")); WriteJsonValue(Writer, Gender.GetValue());
	}
	if (Geo.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("GEO")); WriteJsonValue(Writer, Geo.GetValue());
	}
	if (Interest.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("INTEREST")); WriteJsonValue(Writer, Interest.GetValue());
	}
	if (Locale.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("LOCALE")); WriteJsonValue(Writer, Locale.GetValue());
	}
	if (Location.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("LOCATION")); WriteJsonValue(Writer, Location.GetValue());
	}
	if (ShoppingRetargeting.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("SHOPPING_RETARGETING")); WriteJsonValue(Writer, ShoppingRetargeting.GetValue());
	}
	if (TargetingStrategy.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("TARGETING_STRATEGY")); WriteJsonValue(Writer, TargetingStrategy.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPITargetingSpec1::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("AGE_BUCKET"), AgeBucket);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("APPTYPE"), Apptype);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("AUDIENCE_EXCLUDE"), AudienceExclude);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("AUDIENCE_INCLUDE"), AudienceInclude);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("GENDER"), Gender);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("GEO"), Geo);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("INTEREST"), Interest);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("LOCALE"), Locale);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("LOCATION"), Location);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("SHOPPING_RETARGETING"), ShoppingRetargeting);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("TARGETING_STRATEGY"), TargetingStrategy);

	return ParseSuccess;
}

}
