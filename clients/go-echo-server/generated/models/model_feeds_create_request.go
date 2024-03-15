package models

type FeedsCreateRequest struct {

	DefaultCurrency *NullableCurrency `json:"default_currency,omitempty"`

	// A human-friendly name associated to a given feed.
	Name string `json:"name"`

	Format CatalogsFormat `json:"format"`

	DefaultLocale CatalogsFeedsCreateRequestDefaultLocale `json:"default_locale,omitempty"`

	Credentials *CatalogsFeedCredentials `json:"credentials,omitempty"`

	// The URL where a feed is available for download. This URL is what Pinterest will use to download a feed for processing.
	Location string `json:"location"`

	PreferredProcessingSchedule *CatalogsFeedProcessingSchedule `json:"preferred_processing_schedule,omitempty"`

	DefaultCountry Country `json:"default_country,omitempty"`

	DefaultAvailability *ProductAvailabilityType `json:"default_availability,omitempty"`
}
