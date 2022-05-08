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

type GenderFilter struct {

	GENDER CatalogsProductGroupMultipleStringCriteria `json:"GENDER"`
}

// AssertGenderFilterRequired checks if the required fields are not zero-ed
func AssertGenderFilterRequired(obj GenderFilter) error {
	elements := map[string]interface{}{
		"GENDER": obj.GENDER,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseGenderFilterRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of GenderFilter (e.g. [][]GenderFilter), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseGenderFilterRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aGenderFilter, ok := obj.(GenderFilter)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertGenderFilterRequired(aGenderFilter)
	})
}