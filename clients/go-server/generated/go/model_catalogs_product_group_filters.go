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

// CatalogsProductGroupFilters - Object holding a group of filters for a catalog product group
type CatalogsProductGroupFilters struct {

	AnyOf []CatalogsProductGroupFilterKeys `json:"any_of,omitempty"`

	AllOf []CatalogsProductGroupFilterKeys `json:"all_of,omitempty"`
}

// AssertCatalogsProductGroupFiltersRequired checks if the required fields are not zero-ed
func AssertCatalogsProductGroupFiltersRequired(obj CatalogsProductGroupFilters) error {
	return nil
}

// AssertRecurseCatalogsProductGroupFiltersRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CatalogsProductGroupFilters (e.g. [][]CatalogsProductGroupFilters), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCatalogsProductGroupFiltersRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCatalogsProductGroupFilters, ok := obj.(CatalogsProductGroupFilters)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCatalogsProductGroupFiltersRequired(aCatalogsProductGroupFilters)
	})
}