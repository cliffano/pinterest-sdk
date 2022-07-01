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

type GoogleProductCategory6Filter struct {

	GOOGLEPRODUCTCATEGORY6 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_6"`
}

// AssertGoogleProductCategory6FilterRequired checks if the required fields are not zero-ed
func AssertGoogleProductCategory6FilterRequired(obj GoogleProductCategory6Filter) error {
	elements := map[string]interface{}{
		"GOOGLE_PRODUCT_CATEGORY_6": obj.GOOGLEPRODUCTCATEGORY6,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseGoogleProductCategory6FilterRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of GoogleProductCategory6Filter (e.g. [][]GoogleProductCategory6Filter), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseGoogleProductCategory6FilterRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aGoogleProductCategory6Filter, ok := obj.(GoogleProductCategory6Filter)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertGoogleProductCategory6FilterRequired(aGoogleProductCategory6Filter)
	})
}
