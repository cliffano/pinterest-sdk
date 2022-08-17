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

#include "OpenAPIBidFloorRequest.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIBidFloorRequest::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("bid_floor_specs")); WriteJsonValue(Writer, BidFloorSpecs);
	if (TargetingSpec.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("targeting_spec")); WriteJsonValue(Writer, TargetingSpec.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIBidFloorRequest::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bid_floor_specs"), BidFloorSpecs);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("targeting_spec"), TargetingSpec);

	return ParseSuccess;
}

}
