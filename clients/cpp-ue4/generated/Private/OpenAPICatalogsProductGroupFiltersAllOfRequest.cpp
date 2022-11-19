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

#include "OpenAPICatalogsProductGroupFiltersAllOfRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICatalogsProductGroupFiltersAllOfRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("any_of")); WriteJsonValue(Writer, AnyOf);
	Writer->WriteIdentifierPrefix(TEXT("all_of")); WriteJsonValue(Writer, AllOf);
	Writer->WriteObjectEnd();
}

bool OpenAPICatalogsProductGroupFiltersAllOfRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("any_of"), AnyOf);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("all_of"), AllOf);

	return ParseSuccess;
}

}
