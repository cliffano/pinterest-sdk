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




type LeadFormsList200Response struct {

	Items []LeadFormResponse `json:"items"`

	Bookmark *string `json:"bookmark,omitempty"`
}

// AssertLeadFormsList200ResponseRequired checks if the required fields are not zero-ed
func AssertLeadFormsList200ResponseRequired(obj LeadFormsList200Response) error {
	elements := map[string]interface{}{
		"items": obj.Items,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	for _, el := range obj.Items {
		if err := AssertLeadFormResponseRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertLeadFormsList200ResponseConstraints checks if the values respects the defined constraints
func AssertLeadFormsList200ResponseConstraints(obj LeadFormsList200Response) error {
	return nil
}
