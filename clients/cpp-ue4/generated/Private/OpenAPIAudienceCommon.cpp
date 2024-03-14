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

#include "OpenAPIAudienceCommon.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAudienceCommon::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AdAccountId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ad_account_id")); WriteJsonValue(Writer, AdAccountId.GetValue());
	}
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (Rule.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("rule")); WriteJsonValue(Writer, Rule.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAudienceCommon::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_account_id"), AdAccountId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("rule"), Rule);

	return ParseSuccess;
}

}