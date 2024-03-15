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




// CatalogsHotelBatchItem - Hotel batch item
type CatalogsHotelBatchItem struct {

	// The catalog hotel id in the merchant namespace
	HotelId string `json:"hotel_id"`

	Operation string `json:"operation"`

	Attributes CatalogsUpdatableHotelAttributes `json:"attributes"`
}

// AssertCatalogsHotelBatchItemRequired checks if the required fields are not zero-ed
func AssertCatalogsHotelBatchItemRequired(obj CatalogsHotelBatchItem) error {
	elements := map[string]interface{}{
		"hotel_id": obj.HotelId,
		"operation": obj.Operation,
		"attributes": obj.Attributes,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if err := AssertCatalogsUpdatableHotelAttributesRequired(obj.Attributes); err != nil {
		return err
	}
	return nil
}

// AssertCatalogsHotelBatchItemConstraints checks if the values respects the defined constraints
func AssertCatalogsHotelBatchItemConstraints(obj CatalogsHotelBatchItem) error {
	return nil
}
