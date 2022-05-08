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

// MediaUpload - Media upload that has been registered but not uploaded/processed yet.
type MediaUpload struct {

	// Unique identifier for this media upload. Used to track status and for attaching during Pin creation.
	MediaId string `json:"media_id,omitempty"`

	MediaType MediaUploadType `json:"media_type,omitempty"`

	// The URL where you will POST your media file.
	UploadUrl string `json:"upload_url,omitempty"`

	UploadParameters MediaUploadAllOfUploadParameters `json:"upload_parameters,omitempty"`
}

// AssertMediaUploadRequired checks if the required fields are not zero-ed
func AssertMediaUploadRequired(obj MediaUpload) error {
	if err := AssertMediaUploadTypeRequired(obj.MediaType); err != nil {
		return err
	}
	if err := AssertMediaUploadAllOfUploadParametersRequired(obj.UploadParameters); err != nil {
		return err
	}
	return nil
}

// AssertRecurseMediaUploadRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of MediaUpload (e.g. [][]MediaUpload), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseMediaUploadRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aMediaUpload, ok := obj.(MediaUpload)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertMediaUploadRequired(aMediaUpload)
	})
}