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

type CatalogsProductGroupMultipleStringListCriteria struct {

	Values [][]string `json:"values"`

	Negated bool `json:"negated"`
}

// AssertCatalogsProductGroupMultipleStringListCriteriaRequired checks if the required fields are not zero-ed
func AssertCatalogsProductGroupMultipleStringListCriteriaRequired(obj CatalogsProductGroupMultipleStringListCriteria) error {
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

// AssertRecurseCatalogsProductGroupMultipleStringListCriteriaRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CatalogsProductGroupMultipleStringListCriteria (e.g. [][]CatalogsProductGroupMultipleStringListCriteria), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCatalogsProductGroupMultipleStringListCriteriaRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCatalogsProductGroupMultipleStringListCriteria, ok := obj.(CatalogsProductGroupMultipleStringListCriteria)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCatalogsProductGroupMultipleStringListCriteriaRequired(aCatalogsProductGroupMultipleStringListCriteria)
	})
}