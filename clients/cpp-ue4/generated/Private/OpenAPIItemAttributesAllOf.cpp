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

#include "OpenAPIItemAttributesAllOf.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIItemAttributesAllOf::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AdditionalImageLink.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("additional_image_link")); WriteJsonValue(Writer, AdditionalImageLink.GetValue());
	}
	if (ImageLink.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("image_link")); WriteJsonValue(Writer, ImageLink.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIItemAttributesAllOf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("additional_image_link"), AdditionalImageLink);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("image_link"), ImageLink);

	return ParseSuccess;
}

}
