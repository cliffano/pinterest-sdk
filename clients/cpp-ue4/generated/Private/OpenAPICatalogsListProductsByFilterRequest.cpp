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

#include "OpenAPICatalogsListProductsByFilterRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsListProductsByFilterRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("feed_id")); WriteJsonValue(Writer, FeedId);
	Writer->WriteIdentifierPrefix(TEXT("filters")); WriteJsonValue(Writer, Filters);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsListProductsByFilterRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("feed_id"), FeedId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("filters"), Filters);

	return ParseSuccess;
}

}
