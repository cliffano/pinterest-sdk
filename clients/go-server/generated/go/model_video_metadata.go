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




type VideoMetadata struct {

	ItemType string `json:"item_type,omitempty"`

	CoverImageUrl string `json:"cover_image_url,omitempty"`

	// Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps.
	VideoUrl *string `json:"video_url,omitempty"`

	// Duration (in milliseconds)
	Duration float32 `json:"duration,omitempty"`

	// Height (in pixels)
	Height int32 `json:"height,omitempty"`

	// Width (in pixels)
	Width int32 `json:"width,omitempty"`
}

// AssertVideoMetadataRequired checks if the required fields are not zero-ed
func AssertVideoMetadataRequired(obj VideoMetadata) error {
	return nil
}

// AssertVideoMetadataConstraints checks if the values respects the defined constraints
func AssertVideoMetadataConstraints(obj VideoMetadata) error {
	return nil
}
