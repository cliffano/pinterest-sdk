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




// PinMediaWithImages - Pin with multiple images.
type PinMediaWithImages struct {
	PinMedia

	Items []ImageMetadata `json:"items,omitempty"`
}

// AssertPinMediaWithImagesRequired checks if the required fields are not zero-ed
func AssertPinMediaWithImagesRequired(obj PinMediaWithImages) error {
	if err := AssertPinMediaRequired(obj.PinMedia); err != nil {
		return err
	}

	for _, el := range obj.Items {
		if err := AssertImageMetadataRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertPinMediaWithImagesConstraints checks if the values respects the defined constraints
func AssertPinMediaWithImagesConstraints(obj PinMediaWithImages) error {
	return nil
}
