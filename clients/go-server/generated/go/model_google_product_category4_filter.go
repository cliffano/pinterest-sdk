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

type GoogleProductCategory4Filter struct {

	GOOGLEPRODUCTCATEGORY4 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_4"`
}

// AssertGoogleProductCategory4FilterRequired checks if the required fields are not zero-ed
func AssertGoogleProductCategory4FilterRequired(obj GoogleProductCategory4Filter) error {
	elements := map[string]interface{}{
		"GOOGLE_PRODUCT_CATEGORY_4": obj.GOOGLEPRODUCTCATEGORY4,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseGoogleProductCategory4FilterRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of GoogleProductCategory4Filter (e.g. [][]GoogleProductCategory4Filter), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseGoogleProductCategory4FilterRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aGoogleProductCategory4Filter, ok := obj.(GoogleProductCategory4Filter)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertGoogleProductCategory4FilterRequired(aGoogleProductCategory4Filter)
	})
}
