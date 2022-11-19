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

#include "OpenAPIPinMediaWithImagesAllOf.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIPinMediaWithImagesAllOf::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Items.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("items")); WriteJsonValue(Writer, Items.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIPinMediaWithImagesAllOf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("items"), Items);

	return ParseSuccess;
}

}
