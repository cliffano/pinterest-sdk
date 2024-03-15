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




type AdPreviewCreateFromPin struct {

	// Pin ID.
	PinId string `json:"pin_id"`
}

// AssertAdPreviewCreateFromPinRequired checks if the required fields are not zero-ed
func AssertAdPreviewCreateFromPinRequired(obj AdPreviewCreateFromPin) error {
	elements := map[string]interface{}{
		"pin_id": obj.PinId,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertAdPreviewCreateFromPinConstraints checks if the values respects the defined constraints
func AssertAdPreviewCreateFromPinConstraints(obj AdPreviewCreateFromPin) error {
	return nil
}