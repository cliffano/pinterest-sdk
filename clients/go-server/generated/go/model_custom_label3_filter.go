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

type CustomLabel3Filter struct {

	CUSTOMLABEL3 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_3"`
}

// AssertCustomLabel3FilterRequired checks if the required fields are not zero-ed
func AssertCustomLabel3FilterRequired(obj CustomLabel3Filter) error {
	elements := map[string]interface{}{
		"CUSTOM_LABEL_3": obj.CUSTOMLABEL3,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseCustomLabel3FilterRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CustomLabel3Filter (e.g. [][]CustomLabel3Filter), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCustomLabel3FilterRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCustomLabel3Filter, ok := obj.(CustomLabel3Filter)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCustomLabel3FilterRequired(aCustomLabel3Filter)
	})
}
