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




// LeadFormTestRequest - Request to create test data for lead data test API.
type LeadFormTestRequest struct {

	// Test lead answers. Should follow the creation order.
	Answers []string `json:"answers"`
}

// AssertLeadFormTestRequestRequired checks if the required fields are not zero-ed
func AssertLeadFormTestRequestRequired(obj LeadFormTestRequest) error {
	elements := map[string]interface{}{
		"answers": obj.Answers,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertLeadFormTestRequestConstraints checks if the values respects the defined constraints
func AssertLeadFormTestRequestConstraints(obj LeadFormTestRequest) error {
	return nil
}
