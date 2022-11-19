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

#include "OpenAPIAdAccountOwner.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAdAccountOwner::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (Username.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("username")); WriteJsonValue(Writer, Username.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAdAccountOwner::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("username"), Username);

	return ParseSuccess;
}

}
