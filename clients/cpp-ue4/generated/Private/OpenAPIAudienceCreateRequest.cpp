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

#include "OpenAPIAudienceCreateRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAudienceCreateRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AdAccountId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ad_account_id")); WriteJsonValue(Writer, AdAccountId.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name);
	Writer->WriteIdentifierPrefix(TEXT("rule")); WriteJsonValue(Writer, Rule);
	if (Description.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("description")); WriteJsonValue(Writer, Description.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("audience_type")); WriteJsonValue(Writer, AudienceType);
	Writer->WriteObjectEnd();
}

bool OpenAPIAudienceCreateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_account_id"), AdAccountId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("rule"), Rule);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("description"), Description);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("audience_type"), AudienceType);

	return ParseSuccess;
}

}
