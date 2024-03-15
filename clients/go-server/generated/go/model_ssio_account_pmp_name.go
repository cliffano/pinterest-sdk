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




type SsioAccountPmpName struct {

	// Display name
	Name string `json:"name,omitempty"`

	// Salesforce id for PMP
	Id string `json:"id,omitempty"`
}

// AssertSsioAccountPmpNameRequired checks if the required fields are not zero-ed
func AssertSsioAccountPmpNameRequired(obj SsioAccountPmpName) error {
	return nil
}

// AssertSsioAccountPmpNameConstraints checks if the values respects the defined constraints
func AssertSsioAccountPmpNameConstraints(obj SsioAccountPmpName) error {
	return nil
}
