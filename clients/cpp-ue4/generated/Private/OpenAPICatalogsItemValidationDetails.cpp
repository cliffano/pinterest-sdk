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

#include "OpenAPICatalogsItemValidationDetails.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsItemValidationDetails::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("attribute_name")); WriteJsonValue(Writer, AttributeName);
	Writer->WriteIdentifierPrefix(TEXT("provided_value")); WriteJsonValue(Writer, ProvidedValue);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsItemValidationDetails::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("attribute_name"), AttributeName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("provided_value"), ProvidedValue);

	return ParseSuccess;
}

}