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

#include "OpenAPISSIOOrderLine.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI
{

void OpenAPISSIOOrderLine::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (SalesforceOrderLineId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("salesforce_order_line_id")); WriteJsonValue(Writer, SalesforceOrderLineId.GetValue());
	}
	if (AdsManagerOrderLineId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("ads_manager_order_line_id")); WriteJsonValue(Writer, AdsManagerOrderLineId.GetValue());
	}
	if (PinOrderId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("pin_order_id")); WriteJsonValue(Writer, PinOrderId.GetValue());
	}
	if (LastModifiedDateTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("last_modified_date_time")); WriteJsonValue(Writer, LastModifiedDateTime.GetValue());
	}
	if (StartDate.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("start_date")); WriteJsonValue(Writer, StartDate.GetValue());
	}
	if (EndDate.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("end_date")); WriteJsonValue(Writer, EndDate.GetValue());
	}
	if (BillToCompanyName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("bill_to_company_name")); WriteJsonValue(Writer, BillToCompanyName.GetValue());
	}
	if (BillingContactFirstname.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("billing_contact_firstname")); WriteJsonValue(Writer, BillingContactFirstname.GetValue());
	}
	if (BillingContactLastname.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("billing_contact_lastname")); WriteJsonValue(Writer, BillingContactLastname.GetValue());
	}
	if (BillingContactEmail.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("billing_contact_email")); WriteJsonValue(Writer, BillingContactEmail.GetValue());
	}
	if (MediaContactEmail.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("media_contact_email")); WriteJsonValue(Writer, MediaContactEmail.GetValue());
	}
	if (MediaContactFirstname.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("media_contact_firstname")); WriteJsonValue(Writer, MediaContactFirstname.GetValue());
	}
	if (MediaContactLastname.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("media_contact_lastname")); WriteJsonValue(Writer, MediaContactLastname.GetValue());
	}
	if (CurrencyInfo.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("currency_info")); WriteJsonValue(Writer, CurrencyInfo.GetValue());
	}
	if (AgencyLink.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("agency_link")); WriteJsonValue(Writer, AgencyLink.GetValue());
	}
	if (PoNumber.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("po_number")); WriteJsonValue(Writer, PoNumber.GetValue());
	}
	if (OrderName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("order_name")); WriteJsonValue(Writer, OrderName.GetValue());
	}
	if (PmpName.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("pmp_name")); WriteJsonValue(Writer, PmpName.GetValue());
	}
	if (AcceptedTermsId.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("accepted_terms_id")); WriteJsonValue(Writer, AcceptedTermsId.GetValue());
	}
	if (AcceptedTermsTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("accepted_terms_time")); WriteJsonValue(Writer, AcceptedTermsTime.GetValue());
	}
	if (BudgetAmount.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("budget_amount")); WriteJsonValue(Writer, BudgetAmount.GetValue());
	}
	if (EstimatedMonthlySpend.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("estimated_monthly_spend")); WriteJsonValue(Writer, EstimatedMonthlySpend.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool OpenAPISSIOOrderLine::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("salesforce_order_line_id"), SalesforceOrderLineId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("ads_manager_order_line_id"), AdsManagerOrderLineId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("pin_order_id"), PinOrderId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("last_modified_date_time"), LastModifiedDateTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("start_date"), StartDate);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("end_date"), EndDate);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("bill_to_company_name"), BillToCompanyName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("billing_contact_firstname"), BillingContactFirstname);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("billing_contact_lastname"), BillingContactLastname);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("billing_contact_email"), BillingContactEmail);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media_contact_email"), MediaContactEmail);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media_contact_firstname"), MediaContactFirstname);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("media_contact_lastname"), MediaContactLastname);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("currency_info"), CurrencyInfo);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("agency_link"), AgencyLink);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("po_number"), PoNumber);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("order_name"), OrderName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("pmp_name"), PmpName);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("accepted_terms_id"), AcceptedTermsId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("accepted_terms_time"), AcceptedTermsTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("budget_amount"), BudgetAmount);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("estimated_monthly_spend"), EstimatedMonthlySpend);

	return ParseSuccess;
}

}
