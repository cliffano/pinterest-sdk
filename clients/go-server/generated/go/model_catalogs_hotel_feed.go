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


import (
	"time"
)



// CatalogsHotelFeed - Catalogs Hotel Feed object
type CatalogsHotelFeed struct {

	CreatedAt time.Time `json:"created_at,omitempty"`

	Id string `json:"id,omitempty"`

	UpdatedAt time.Time `json:"updated_at,omitempty"`

	// A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
	Name *string `json:"name"`

	Format CatalogsFormat `json:"format"`

	CatalogType CatalogsType `json:"catalog_type"`

	Credentials *CatalogsFeedCredentials `json:"credentials"`

	// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
	Location string `json:"location"`

	PreferredProcessingSchedule *CatalogsFeedProcessingSchedule `json:"preferred_processing_schedule"`

	Status CatalogsStatus `json:"status"`

	DefaultCurrency *NullableCurrency `json:"default_currency"`

	// The locale used within a feed for product descriptions.
	DefaultLocale string `json:"default_locale"`

	// Catalog id pertaining to the feed. If not provided, feed will use a default catalog based on type.
	CatalogId *string `json:"catalog_id"`
}

// AssertCatalogsHotelFeedRequired checks if the required fields are not zero-ed
func AssertCatalogsHotelFeedRequired(obj CatalogsHotelFeed) error {
	elements := map[string]interface{}{
		"name": obj.Name,
		"format": obj.Format,
		"catalog_type": obj.CatalogType,
		"credentials": obj.Credentials,
		"location": obj.Location,
		"preferred_processing_schedule": obj.PreferredProcessingSchedule,
		"status": obj.Status,
		"default_currency": obj.DefaultCurrency,
		"default_locale": obj.DefaultLocale,
		"catalog_id": obj.CatalogId,
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

// AssertCatalogsHotelFeedConstraints checks if the values respects the defined constraints
func AssertCatalogsHotelFeedConstraints(obj CatalogsHotelFeed) error {
	return nil
}