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
