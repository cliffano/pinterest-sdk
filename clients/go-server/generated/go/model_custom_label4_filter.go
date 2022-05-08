/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type CustomLabel4Filter struct {

	CUSTOMLABEL4 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_4"`
}

// AssertCustomLabel4FilterRequired checks if the required fields are not zero-ed
func AssertCustomLabel4FilterRequired(obj CustomLabel4Filter) error {
	elements := map[string]interface{}{
		"CUSTOM_LABEL_4": obj.CUSTOMLABEL4,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseCustomLabel4FilterRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CustomLabel4Filter (e.g. [][]CustomLabel4Filter), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCustomLabel4FilterRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCustomLabel4Filter, ok := obj.(CustomLabel4Filter)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCustomLabel4FilterRequired(aCustomLabel4Filter)
	})
}