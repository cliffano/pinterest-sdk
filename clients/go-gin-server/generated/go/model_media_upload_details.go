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

// MediaUploadDetails - Media upload details
type MediaUploadDetails struct {

	MediaId string `json:"media_id,omitempty"`

	MediaType MediaUploadType `json:"media_type,omitempty"`

	Status MediaUploadStatus `json:"status,omitempty"`
}
