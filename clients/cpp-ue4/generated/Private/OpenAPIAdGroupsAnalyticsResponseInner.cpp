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

#include "OpenAPIAdGroupsAnalyticsResponseInner.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAdGroupsAnalyticsResponseInner::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("AD_GROUP_ID")); WriteJsonValue(Writer, AdGroupId);
	if (Date.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("DATE")); WriteJsonValue(Writer, Date.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAdGroupsAnalyticsResponseInner::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("AD_GROUP_ID"), AdGroupId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("DATE"), Date);

	return ParseSuccess;
}

}
