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

// CatalogsFeedsCreateRequest - Request object for creating a feed. Please, be aware that \"default_country\" and \"default_locale\" are not required in the spec for forward compatibility but for now the API will not accept requests without those fields.
type CatalogsFeedsCreateRequest struct {

	DefaultCountry Country `json:"default_country,omitempty"`

	DefaultAvailability *ProductAvailabilityType `json:"default_availability,omitempty"`

	DefaultCurrency *NullableCurrency `json:"default_currency,omitempty"`

	// A human-friendly name associated to a given feed.
	Name string `json:"name"`

	Format CatalogsFormat `json:"format"`

	// The locale used within a feed for product descriptions.
	DefaultLocale string `json:"default_locale,omitempty"`

	Credentials *CatalogsFeedCredentials `json:"credentials,omitempty"`

	// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
	Location string `json:"location"`

	PreferredProcessingSchedule *CatalogsFeedProcessingSchedule `json:"preferred_processing_schedule,omitempty"`
}

// AssertCatalogsFeedsCreateRequestRequired checks if the required fields are not zero-ed
func AssertCatalogsFeedsCreateRequestRequired(obj CatalogsFeedsCreateRequest) error {
	elements := map[string]interface{}{
		"name": obj.Name,
		"format": obj.Format,
		"location": obj.Location,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	if obj.Credentials != nil {
		if err := AssertCatalogsFeedCredentialsRequired(*obj.Credentials); err != nil {
			return err
		}
	}
	if obj.PreferredProcessingSchedule != nil {
		if err := AssertCatalogsFeedProcessingScheduleRequired(*obj.PreferredProcessingSchedule); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecurseCatalogsFeedsCreateRequestRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CatalogsFeedsCreateRequest (e.g. [][]CatalogsFeedsCreateRequest), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCatalogsFeedsCreateRequestRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCatalogsFeedsCreateRequest, ok := obj.(CatalogsFeedsCreateRequest)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCatalogsFeedsCreateRequestRequired(aCatalogsFeedsCreateRequest)
	})
}
