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




type MinPriceFilter struct {

	MIN_PRICE CatalogsProductGroupPricingCriteria `json:"MIN_PRICE"`
}

// AssertMinPriceFilterRequired checks if the required fields are not zero-ed
func AssertMinPriceFilterRequired(obj MinPriceFilter) error {
	elements := map[string]interface{}{
		"MIN_PRICE": obj.MIN_PRICE,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertMinPriceFilterConstraints checks if the values respects the defined constraints
func AssertMinPriceFilterConstraints(obj MinPriceFilter) error {
	return nil
}
