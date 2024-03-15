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




type HotelIdFilter struct {

	HOTEL_ID CatalogsProductGroupMultipleStringCriteria `json:"HOTEL_ID"`
}

// AssertHotelIdFilterRequired checks if the required fields are not zero-ed
func AssertHotelIdFilterRequired(obj HotelIdFilter) error {
	elements := map[string]interface{}{
		"HOTEL_ID": obj.HOTEL_ID,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertHotelIdFilterConstraints checks if the values respects the defined constraints
func AssertHotelIdFilterConstraints(obj HotelIdFilter) error {
	return nil
}
