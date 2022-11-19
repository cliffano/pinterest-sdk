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

#include "OpenAPICampaignUpdateRequestAllOf.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPICampaignUpdateRequestAllOf::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (IsCampaignBudgetOptimization.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_campaign_budget_optimization")); WriteJsonValue(Writer, IsCampaignBudgetOptimization.GetValue());
	}
	if (IsFlexibleDailyBudgets.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_flexible_daily_budgets")); WriteJsonValue(Writer, IsFlexibleDailyBudgets.GetValue());
	}
	if (IsAutomatedCampaign.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_automated_campaign")); WriteJsonValue(Writer, IsAutomatedCampaign.GetValue());
	}
	if (Status.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("status")); WriteJsonValue(Writer, Status.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPICampaignUpdateRequestAllOf::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_campaign_budget_optimization"), IsCampaignBudgetOptimization);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_flexible_daily_budgets"), IsFlexibleDailyBudgets);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_automated_campaign"), IsAutomatedCampaign);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("status"), Status);

	return ParseSuccess;
}

}
