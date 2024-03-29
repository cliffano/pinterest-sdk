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




type GoogleProductCategory5Filter struct {

	GOOGLEPRODUCTCATEGORY5 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_5"`
}

// AssertGoogleProductCategory5FilterRequired checks if the required fields are not zero-ed
func AssertGoogleProductCategory5FilterRequired(obj GoogleProductCategory5Filter) error {
	elements := map[string]interface{}{
		"GOOGLE_PRODUCT_CATEGORY_5": obj.GOOGLEPRODUCTCATEGORY5,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertGoogleProductCategory5FilterConstraints checks if the values respects the defined constraints
func AssertGoogleProductCategory5FilterConstraints(obj GoogleProductCategory5Filter) error {
	return nil
}
