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

#include "OpenAPIKeywordMetricsResponse.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIKeywordMetricsResponse::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Keyword.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("keyword")); WriteJsonValue(Writer, Keyword.GetValue());
	}
	if (Metrics.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("metrics")); WriteJsonValue(Writer, Metrics.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIKeywordMetricsResponse::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("keyword"), Keyword);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("metrics"), Metrics);

	return ParseSuccess;
}

}
