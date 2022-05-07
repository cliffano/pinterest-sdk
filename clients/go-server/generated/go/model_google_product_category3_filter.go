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

type GoogleProductCategory3Filter struct {

	GOOGLEPRODUCTCATEGORY3 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_3"`
}

// AssertGoogleProductCategory3FilterRequired checks if the required fields are not zero-ed
func AssertGoogleProductCategory3FilterRequired(obj GoogleProductCategory3Filter) error {
	elements := map[string]interface{}{
		"GOOGLE_PRODUCT_CATEGORY_3": obj.GOOGLEPRODUCTCATEGORY3,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecurseGoogleProductCategory3FilterRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of GoogleProductCategory3Filter (e.g. [][]GoogleProductCategory3Filter), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseGoogleProductCategory3FilterRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aGoogleProductCategory3Filter, ok := obj.(GoogleProductCategory3Filter)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertGoogleProductCategory3FilterRequired(aGoogleProductCategory3Filter)
	})
}
