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

#include "OpenAPICustomerListUpdateRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICustomerListUpdateRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("records")); WriteJsonValue(Writer, Records);
	Writer->WriteIdentifierPrefix(TEXT("operation_type")); WriteJsonValue(Writer, OperationType);
	if (Exceptions.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("exceptions")); WriteJsonValue(Writer, Exceptions.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICustomerListUpdateRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("records"), Records);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("operation_type"), OperationType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("exceptions"), Exceptions);

	return ParseSuccess;
}

}
