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

#include "OpenAPIAdAccountAnalyticsResponseInner.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAdAccountAnalyticsResponseInner::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("AD_ACCOUNT_ID")); WriteJsonValue(Writer, AdAccountId);
	if (Date.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("DATE")); WriteJsonValue(Writer, Date.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIAdAccountAnalyticsResponseInner::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("AD_ACCOUNT_ID"), AdAccountId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("DATE"), Date);

	return ParseSuccess;
}

}
