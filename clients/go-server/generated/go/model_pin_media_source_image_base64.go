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




// PinMediaSourceImageBase64 - Base64-encoded image media source
type PinMediaSourceImageBase64 struct {

	SourceType string `json:"source_type"`

	ContentType string `json:"content_type"`

	Data string `json:"data"`

	// Set the parameter to false to create the new simplified Pin instead of the standard pin. Currently the field is only available to a list of beta users.
	IsStandard bool `json:"is_standard,omitempty"`
}

// AssertPinMediaSourceImageBase64Required checks if the required fields are not zero-ed
func AssertPinMediaSourceImageBase64Required(obj PinMediaSourceImageBase64) error {
	elements := map[string]interface{}{
		"source_type": obj.SourceType,
		"content_type": obj.ContentType,
		"data": obj.Data,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertPinMediaSourceImageBase64Constraints checks if the values respects the defined constraints
func AssertPinMediaSourceImageBase64Constraints(obj PinMediaSourceImageBase64) error {
	return nil
}
