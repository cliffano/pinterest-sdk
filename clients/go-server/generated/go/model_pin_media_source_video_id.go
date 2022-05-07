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

// PinMediaSourceVideoId - Video ID-based media source
type PinMediaSourceVideoId struct {

	SourceType string `json:"source_type"`

	CoverImageUrl string `json:"cover_image_url"`

	MediaId string `json:"media_id"`
}

// AssertPinMediaSourceVideoIdRequired checks if the required fields are not zero-ed
func AssertPinMediaSourceVideoIdRequired(obj PinMediaSourceVideoId) error {
	elements := map[string]interface{}{
		"source_type": obj.SourceType,
		"cover_image_url": obj.CoverImageUrl,
		"media_id": obj.MediaId,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertRecursePinMediaSourceVideoIdRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of PinMediaSourceVideoId (e.g. [][]PinMediaSourceVideoId), otherwise ErrTypeAssertionError is thrown.
func AssertRecursePinMediaSourceVideoIdRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aPinMediaSourceVideoId, ok := obj.(PinMediaSourceVideoId)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertPinMediaSourceVideoIdRequired(aPinMediaSourceVideoId)
	})
}
