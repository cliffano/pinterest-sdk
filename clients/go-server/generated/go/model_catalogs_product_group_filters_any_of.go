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

type CatalogsProductGroupFiltersAnyOf struct {

	AnyOf []CatalogsProductGroupFilterKeys `json:"any_of,omitempty"`
}

// AssertCatalogsProductGroupFiltersAnyOfRequired checks if the required fields are not zero-ed
func AssertCatalogsProductGroupFiltersAnyOfRequired(obj CatalogsProductGroupFiltersAnyOf) error {
	return nil
}

// AssertRecurseCatalogsProductGroupFiltersAnyOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CatalogsProductGroupFiltersAnyOf (e.g. [][]CatalogsProductGroupFiltersAnyOf), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCatalogsProductGroupFiltersAnyOfRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCatalogsProductGroupFiltersAnyOf, ok := obj.(CatalogsProductGroupFiltersAnyOf)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCatalogsProductGroupFiltersAnyOfRequired(aCatalogsProductGroupFiltersAnyOf)
	})
}
