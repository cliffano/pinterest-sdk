/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type CatalogsProductGroupMultipleStringCriteria struct {

	Values []string `json:"values"`

	Negated bool `json:"negated"`
}

// AssertCatalogsProductGroupMultipleStringCriteriaRequired checks if the required fields are not zero-ed
func AssertCatalogsProductGroupMultipleStringCriteriaRequired(obj CatalogsProductGroupMultipleStringCriteria) error {
	elements := map[string]interface{}{
		"values": obj.Values,
		"negated": obj.Negated,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseCatalogsProductGroupMultipleStringCriteriaRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CatalogsProductGroupMultipleStringCriteria (e.g. [][]CatalogsProductGroupMultipleStringCriteria), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCatalogsProductGroupMultipleStringCriteriaRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCatalogsProductGroupMultipleStringCriteria, ok := obj.(CatalogsProductGroupMultipleStringCriteria)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCatalogsProductGroupMultipleStringCriteriaRequired(aCatalogsProductGroupMultipleStringCriteria)
	})
}
