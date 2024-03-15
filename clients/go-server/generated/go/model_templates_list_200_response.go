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




type TemplatesList200Response struct {

	Items []TemplateResponse `json:"items"`

	Bookmark *string `json:"bookmark,omitempty"`
}

// AssertTemplatesList200ResponseRequired checks if the required fields are not zero-ed
func AssertTemplatesList200ResponseRequired(obj TemplatesList200Response) error {
	elements := map[string]interface{}{
		"items": obj.Items,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	for _, el := range obj.Items {
		if err := AssertTemplateResponseRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertTemplatesList200ResponseConstraints checks if the values respects the defined constraints
func AssertTemplatesList200ResponseConstraints(obj TemplatesList200Response) error {
	return nil
}
