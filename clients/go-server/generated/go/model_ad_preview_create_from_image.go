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




type AdPreviewCreateFromImage struct {

	// Image URL.
	ImageUrl string `json:"image_url"`

	// Title displayed below ad.
	Title string `json:"title"`
}

// AssertAdPreviewCreateFromImageRequired checks if the required fields are not zero-ed
func AssertAdPreviewCreateFromImageRequired(obj AdPreviewCreateFromImage) error {
	elements := map[string]interface{}{
		"image_url": obj.ImageUrl,
		"title": obj.Title,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertAdPreviewCreateFromImageConstraints checks if the values respects the defined constraints
func AssertAdPreviewCreateFromImageConstraints(obj AdPreviewCreateFromImage) error {
	return nil
}