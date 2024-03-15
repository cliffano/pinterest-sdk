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




type GoogleProductCategory2Filter struct {

	GOOGLEPRODUCTCATEGORY2 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_2"`
}

// AssertGoogleProductCategory2FilterRequired checks if the required fields are not zero-ed
func AssertGoogleProductCategory2FilterRequired(obj GoogleProductCategory2Filter) error {
	elements := map[string]interface{}{
		"GOOGLE_PRODUCT_CATEGORY_2": obj.GOOGLEPRODUCTCATEGORY2,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertGoogleProductCategory2FilterConstraints checks if the values respects the defined constraints
func AssertGoogleProductCategory2FilterConstraints(obj GoogleProductCategory2Filter) error {
	return nil
}
