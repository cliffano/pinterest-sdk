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

// MediaUploadAllOfUploadParameters - The list of parameter key/value pairs you will need to send with your POST request to upload your media file.
type MediaUploadAllOfUploadParameters struct {

	XAmzDate string `json:"x-amz-date,omitempty"`

	XAmzSignature string `json:"x-amz-signature,omitempty"`

	XAmzSecurityToken string `json:"x-amz-security-token,omitempty"`

	XAmzAlgorithm string `json:"x-amz-algorithm,omitempty"`

	Key string `json:"key,omitempty"`

	Policy string `json:"policy,omitempty"`

	XAmzCredential string `json:"x-amz-credential,omitempty"`

	ContentType string `json:"Content-Type,omitempty"`
}

// AssertMediaUploadAllOfUploadParametersRequired checks if the required fields are not zero-ed
func AssertMediaUploadAllOfUploadParametersRequired(obj MediaUploadAllOfUploadParameters) error {
	return nil
}

// AssertRecurseMediaUploadAllOfUploadParametersRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of MediaUploadAllOfUploadParameters (e.g. [][]MediaUploadAllOfUploadParameters), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseMediaUploadAllOfUploadParametersRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aMediaUploadAllOfUploadParameters, ok := obj.(MediaUploadAllOfUploadParameters)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertMediaUploadAllOfUploadParametersRequired(aMediaUploadAllOfUploadParameters)
	})
}