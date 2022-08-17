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

#include "OpenAPICampaignCommon.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICampaignCommon::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (AdAccountId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ad_account_id")); WriteJsonValue(Writer, AdAccountId.GetValue());
	}
	if (Name.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("name")); WriteJsonValue(Writer, Name.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	if (LifetimeSpendCap.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("lifetime_spend_cap")); WriteJsonValue(Writer, LifetimeSpendCap.GetValue());
	}
	if (DailySpendCap.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("daily_spend_cap")); WriteJsonValue(Writer, DailySpendCap.GetValue());
	}
	if (OrderLineId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("order_line_id")); WriteJsonValue(Writer, OrderLineId.GetValue());
	}
	if (TrackingUrls.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("tracking_urls")); WriteJsonValue(Writer, TrackingUrls.GetValue());
	}
	if (StartTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("start_time")); WriteJsonValue(Writer, StartTime.GetValue());
	}
	if (EndTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("end_time")); WriteJsonValue(Writer, EndTime.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICampaignCommon::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ad_account_id"), AdAccountId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("name"), Name);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("lifetime_spend_cap"), LifetimeSpendCap);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("daily_spend_cap"), DailySpendCap);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("order_line_id"), OrderLineId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("tracking_urls"), TrackingUrls);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("start_time"), StartTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("end_time"), EndTime);

	return ParseSuccess;
}

}
