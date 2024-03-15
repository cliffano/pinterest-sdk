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


import (
	"errors"
)



// PinMediaSourceImagesUrl - Multiple images urls-based media source
type PinMediaSourceImagesUrl struct {

	SourceType string `json:"source_type,omitempty"`

	// Array with image objects.
	Items []PinMediaSourceImagesUrlItemsInner `json:"items"`

	Index int32 `json:"index,omitempty"`
}

// AssertPinMediaSourceImagesUrlRequired checks if the required fields are not zero-ed
func AssertPinMediaSourceImagesUrlRequired(obj PinMediaSourceImagesUrl) error {
	elements := map[string]interface{}{
		"items": obj.Items,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	for _, el := range obj.Items {
		if err := AssertPinMediaSourceImagesUrlItemsInnerRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertPinMediaSourceImagesUrlConstraints checks if the values respects the defined constraints
func AssertPinMediaSourceImagesUrlConstraints(obj PinMediaSourceImagesUrl) error {
	if obj.Index < 0 {
		return &ParsingError{Err: errors.New(errMsgMinValueConstraint)}
	}
	return nil
}
