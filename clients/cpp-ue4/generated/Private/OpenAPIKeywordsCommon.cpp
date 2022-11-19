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

#include "OpenAPIKeywordsCommon.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIKeywordsCommon::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Bid.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bid")); WriteJsonValue(Writer, Bid.GetValue());
	}
	Writer->WriteIdentifierPrefix(TEXT("match_type")); WriteJsonValue(Writer, MatchType);
	Writer->WriteIdentifierPrefix(TEXT("value")); WriteJsonValue(Writer, Value);
	Writer->WriteObjectEnd();
}

bool OpenAPIKeywordsCommon::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bid"), Bid);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("match_type"), MatchType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("value"), Value);

	return ParseSuccess;
}

}
