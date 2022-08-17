/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * OpenAPI spec version: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#include "OpenAPIMediaList200Response.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIMediaList200Response::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("items")); WriteJsonValue(Writer, Items);
	if (Bookmark.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bookmark")); WriteJsonValue(Writer, Bookmark.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIMediaList200Response::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("items"), Items);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bookmark"), Bookmark);

	return ParseSuccess;
}

}
