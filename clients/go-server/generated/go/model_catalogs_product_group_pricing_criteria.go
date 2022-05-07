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

type CatalogsProductGroupPricingCriteria struct {

	Inclusion bool `json:"inclusion"`

	Values float32 `json:"values"`

	Negated bool `json:"negated"`
}

// AssertCatalogsProductGroupPricingCriteriaRequired checks if the required fields are not zero-ed
func AssertCatalogsProductGroupPricingCriteriaRequired(obj CatalogsProductGroupPricingCriteria) error {
	elements := map[string]interface{}{
		"inclusion": obj.Inclusion,
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

// AssertRecurseCatalogsProductGroupPricingCriteriaRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CatalogsProductGroupPricingCriteria (e.g. [][]CatalogsProductGroupPricingCriteria), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCatalogsProductGroupPricingCriteriaRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCatalogsProductGroupPricingCriteria, ok := obj.(CatalogsProductGroupPricingCriteria)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCatalogsProductGroupPricingCriteriaRequired(aCatalogsProductGroupPricingCriteria)
	})
}
