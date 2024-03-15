/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi




type SsioEditInsertionOrderRequest struct {

	// Starting date of time period. Format: YYYY-MM-DD
	StartDate string `json:"start_date,omitempty"`

	// End date of time period. Format: YYYY-MM-DD
	EndDate string `json:"end_date,omitempty"`

	// The po number
	PoNumber string `json:"po_number,omitempty"`

	// If Budget order line, the budget amount.
	BudgetAmount float32 `json:"budget_amount,omitempty"`

	// The billing contact first name
	BillingContactFirstname string `json:"billing_contact_firstname,omitempty"`

	// The billing contact last name
	BillingContactLastname string `json:"billing_contact_lastname,omitempty"`

	// The billing contact email
	BillingContactEmail string `json:"billing_contact_email,omitempty"`

	// The media contact first name
	MediaContactFirstname string `json:"media_contact_firstname,omitempty"`

	// The media contact last name
	MediaContactLastname string `json:"media_contact_lastname,omitempty"`

	// The media contact email
	MediaContactEmail string `json:"media_contact_email,omitempty"`

	// URL link for agency
	AgencyLink string `json:"agency_link,omitempty"`

	// The email of user submitting the insertion order
	UserEmail string `json:"user_email,omitempty"`

	// LineId in the Oracle DB
	OracleLineId string `json:"oracle_line_id,omitempty"`

	// OrderId in SFDC
	SalesforceOrderId string `json:"salesforce_order_id,omitempty"`

	// OrderLineId in SFDC
	SalesforceOrderLineId string `json:"salesforce_order_line_id,omitempty"`

	// Ads manager OrderLineId
	AdsManagerOrderLineId string `json:"ads_manager_order_line_id,omitempty"`
}

// AssertSsioEditInsertionOrderRequestRequired checks if the required fields are not zero-ed
func AssertSsioEditInsertionOrderRequestRequired(obj SsioEditInsertionOrderRequest) error {
	return nil
}

// AssertSsioEditInsertionOrderRequestConstraints checks if the values respects the defined constraints
func AssertSsioEditInsertionOrderRequestConstraints(obj SsioEditInsertionOrderRequest) error {
	return nil
}
