package models

// PinMediaWithVideo - Pin with video.
type PinMediaWithVideo struct {

	Images ImageMetadataImages `json:"images,omitempty"`

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
