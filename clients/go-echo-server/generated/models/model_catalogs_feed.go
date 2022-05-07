package models

import (
	"time"
)

// CatalogsFeed - Catalogs Catalogs Feed object
type CatalogsFeed struct {

	CreatedAt time.Time `json:"created_at,omitempty"`

	Id string `json:"id,omitempty"`

	UpdatedAt time.Time `json:"updated_at,omitempty"`

	DefaultCountry Country `json:"default_country"`

	DefaultAvailability *ProductAvailabilityType `json:"default_availability"`

	DefaultCurrency *NullableCurrency `json:"default_currency"`

	// A human-friendly name associated to a given feed. This value is currently nullable due to historical reasons. It is expected to become non-nullable in the future.
	Name *string `json:"name"`

	Format CatalogsFormat `json:"format"`

	// The locale used within a feed for product descriptions.
	DefaultLocale string `json:"default_locale"`

	Credentials *CatalogsFeedCredentials `json:"credentials"`

	// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
	Location string `json:"location"`

	PreferredProcessingSchedule *CatalogsFeedProcessingSchedule `json:"preferred_processing_schedule"`

	Status CatalogsStatus `json:"status"`
}
