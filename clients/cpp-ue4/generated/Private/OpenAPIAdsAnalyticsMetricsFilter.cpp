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

#include "OpenAPIAdsAnalyticsMetricsFilter.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPIAdsAnalyticsMetricsFilter::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("field")); WriteJsonValue(Writer, Field);
	Writer->WriteIdentifierPrefix(TEXT("operator")); WriteJsonValue(Writer, _Operator);
	Writer->WriteIdentifierPrefix(TEXT("values")); WriteJsonValue(Writer, Values);
	Writer->WriteObjectEnd();
}

bool OpenAPIAdsAnalyticsMetricsFilter::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("field"), Field);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("operator"), _Operator);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("values"), Values);

	return ParseSuccess;
}

}
