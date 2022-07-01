/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type MediaUploadAllOf struct {

	// Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
	MediaId string `json:"media_id,omitempty"`

	MediaType MediaUploadType `json:"media_type,omitempty"`

	// The URL where you will POST your media file.
	UploadUrl string `json:"upload_url,omitempty"`

	UploadParameters MediaUploadAllOfUploadParameters `json:"upload_parameters,omitempty"`
}

// AssertMediaUploadAllOfRequired checks if the required fields are not zero-ed
func AssertMediaUploadAllOfRequired(obj MediaUploadAllOf) error {
	if err := AssertMediaUploadTypeRequired(obj.MediaType); err != nil {
		return err
	}
	if err := AssertMediaUploadAllOfUploadParametersRequired(obj.UploadParameters); err != nil {
		return err
	}
	return nil
}

// AssertRecurseMediaUploadAllOfRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of MediaUploadAllOf (e.g. [][]MediaUploadAllOf), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseMediaUploadAllOfRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aMediaUploadAllOf, ok := obj.(MediaUploadAllOf)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertMediaUploadAllOfRequired(aMediaUploadAllOf)
	})
}
