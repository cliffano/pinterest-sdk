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




type SsioAccountAddress struct {

	// Address display
	Display string `json:"display,omitempty"`

	// Purpose for which the address is used, usually Billing or Businness
	Purpose string `json:"purpose,omitempty"`

	// Salesforce id for address
	AddressId string `json:"address_id,omitempty"`

	// Legal entity for this insertion order
	OrderLegalEntity string `json:"order_legal_entity,omitempty"`
}

// AssertSsioAccountAddressRequired checks if the required fields are not zero-ed
func AssertSsioAccountAddressRequired(obj SsioAccountAddress) error {
	return nil
}

// AssertSsioAccountAddressConstraints checks if the values respects the defined constraints
func AssertSsioAccountAddressConstraints(obj SsioAccountAddress) error {
	return nil
}
