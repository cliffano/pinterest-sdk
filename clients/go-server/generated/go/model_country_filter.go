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




type CountryFilter struct {

	COUNTRY CatalogsProductGroupMultipleCountriesCriteria `json:"COUNTRY"`
}

// AssertCountryFilterRequired checks if the required fields are not zero-ed
func AssertCountryFilterRequired(obj CountryFilter) error {
	elements := map[string]interface{}{
		"COUNTRY": obj.COUNTRY,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertCountryFilterConstraints checks if the values respects the defined constraints
func AssertCountryFilterConstraints(obj CountryFilter) error {
	return nil
}
