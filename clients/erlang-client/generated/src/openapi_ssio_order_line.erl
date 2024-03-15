-module(openapi_ssio_order_line).

-export([encode/1]).

-export_type([openapi_ssio_order_line/0]).

-type openapi_ssio_order_line() ::
    #{ 'salesforce_order_line_id' => binary(),
       'ads_manager_order_line_id' => binary(),
       'pin_order_id' => binary(),
       'last_modified_date_time' => binary(),
       'start_date' => calendar:date(),
       'end_date' => calendar:date(),
       'bill_to_company_name' => binary(),
       'billing_contact_firstname' => binary(),
       'billing_contact_lastname' => binary(),
       'billing_contact_email' => binary(),
       'media_contact_email' => binary(),
       'media_contact_firstname' => binary(),
       'media_contact_lastname' => binary(),
       'currency_info' => openapi_currency:openapi_currency(),
       'agency_link' => binary(),
       'po_number' => binary(),
       'order_name' => binary(),
       'pmp_name' => binary(),
       'accepted_terms_id' => binary(),
       'accepted_terms_time' => binary(),
       'budget_amount' => integer(),
       'estimated_monthly_spend' => integer()
     }.

encode(#{ 'salesforce_order_line_id' := SalesforceOrderLineId,
          'ads_manager_order_line_id' := AdsManagerOrderLineId,
          'pin_order_id' := PinOrderId,
          'last_modified_date_time' := LastModifiedDateTime,
          'start_date' := StartDate,
          'end_date' := EndDate,
          'bill_to_company_name' := BillToCompanyName,
          'billing_contact_firstname' := BillingContactFirstname,
          'billing_contact_lastname' := BillingContactLastname,
          'billing_contact_email' := BillingContactEmail,
          'media_contact_email' := MediaContactEmail,
          'media_contact_firstname' := MediaContactFirstname,
          'media_contact_lastname' := MediaContactLastname,
          'currency_info' := CurrencyInfo,
          'agency_link' := AgencyLink,
          'po_number' := PoNumber,
          'order_name' := OrderName,
          'pmp_name' := PmpName,
          'accepted_terms_id' := AcceptedTermsId,
          'accepted_terms_time' := AcceptedTermsTime,
          'budget_amount' := BudgetAmount,
          'estimated_monthly_spend' := EstimatedMonthlySpend
        }) ->
    #{ 'salesforce_order_line_id' => SalesforceOrderLineId,
       'ads_manager_order_line_id' => AdsManagerOrderLineId,
       'pin_order_id' => PinOrderId,
       'last_modified_date_time' => LastModifiedDateTime,
       'start_date' => StartDate,
       'end_date' => EndDate,
       'bill_to_company_name' => BillToCompanyName,
       'billing_contact_firstname' => BillingContactFirstname,
       'billing_contact_lastname' => BillingContactLastname,
       'billing_contact_email' => BillingContactEmail,
       'media_contact_email' => MediaContactEmail,
       'media_contact_firstname' => MediaContactFirstname,
       'media_contact_lastname' => MediaContactLastname,
       'currency_info' => CurrencyInfo,
       'agency_link' => AgencyLink,
       'po_number' => PoNumber,
       'order_name' => OrderName,
       'pmp_name' => PmpName,
       'accepted_terms_id' => AcceptedTermsId,
       'accepted_terms_time' => AcceptedTermsTime,
       'budget_amount' => BudgetAmount,
       'estimated_monthly_spend' => EstimatedMonthlySpend
     }.
