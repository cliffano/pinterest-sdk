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

#include "OpenAPITargetingTypeFilter.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPITargetingTypeFilter::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (TargetingTypes.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("targeting_types")); WriteJsonValue(Writer, TargetingTypes.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPITargetingTypeFilter::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("targeting_types"), TargetingTypes);

	return ParseSuccess;
}

}
