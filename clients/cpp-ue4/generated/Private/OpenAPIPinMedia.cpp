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

#include "OpenAPIPinMedia.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIPinMedia::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (MediaType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("media_type")); WriteJsonValue(Writer, MediaType.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIPinMedia::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media_type"), MediaType);

	return ParseSuccess;
}

}
