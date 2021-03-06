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

type ProductType4Filter struct {

	PRODUCTTYPE4 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_4"`
}

// AssertProductType4FilterRequired checks if the required fields are not zero-ed
func AssertProductType4FilterRequired(obj ProductType4Filter) error {
	elements := map[string]interface{}{
		"PRODUCT_TYPE_4": obj.PRODUCTTYPE4,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseProductType4FilterRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of ProductType4Filter (e.g. [][]ProductType4Filter), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseProductType4FilterRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aProductType4Filter, ok := obj.(ProductType4Filter)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertProductType4FilterRequired(aProductType4Filter)
	})
}
