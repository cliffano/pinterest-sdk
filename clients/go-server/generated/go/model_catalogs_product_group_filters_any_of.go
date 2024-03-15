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




type CatalogsProductGroupFiltersAnyOf struct {

	AnyOf []CatalogsProductGroupFilterKeys `json:"any_of"`
}

// AssertCatalogsProductGroupFiltersAnyOfRequired checks if the required fields are not zero-ed
func AssertCatalogsProductGroupFiltersAnyOfRequired(obj CatalogsProductGroupFiltersAnyOf) error {
	elements := map[string]interface{}{
		"any_of": obj.AnyOf,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertCatalogsProductGroupFiltersAnyOfConstraints checks if the values respects the defined constraints
func AssertCatalogsProductGroupFiltersAnyOfConstraints(obj CatalogsProductGroupFiltersAnyOf) error {
	return nil
}