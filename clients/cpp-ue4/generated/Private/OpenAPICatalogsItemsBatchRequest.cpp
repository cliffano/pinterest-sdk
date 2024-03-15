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

#include "OpenAPICatalogsItemsBatchRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsItemsBatchRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("country")); WriteJsonValue(Writer, Country);
	Writer->WriteIdentifierPrefix(TEXT("language")); WriteJsonValue(Writer, Language);
	Writer->WriteIdentifierPrefix(TEXT("operation")); WriteJsonValue(Writer, Operation);
	Writer->WriteIdentifierPrefix(TEXT("items")); WriteJsonValue(Writer, Items);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsItemsBatchRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("country"), Country);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("language"), Language);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("operation"), Operation);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("items"), Items);

	return ParseSuccess;
}

}
