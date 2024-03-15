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

#include "OpenAPIImageDetails.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIImageDetails::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("width")); WriteJsonValue(Writer, Width);
	Writer->WriteIdentifierPrefix(TEXT("height")); WriteJsonValue(Writer, Height);
	Writer->WriteIdentifierPrefix(TEXT("url")); WriteJsonValue(Writer, Url);
	Writer->WriteObjectEnd();
}

bool OpenAPIImageDetails::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("width"), Width);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("height"), Height);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("url"), Url);

	return ParseSuccess;
}

}
