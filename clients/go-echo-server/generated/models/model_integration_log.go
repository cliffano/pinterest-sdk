package models

// IntegrationLog - Schema for log sent from an integration application.
type IntegrationLog struct {

	// Timestamp in milliseconds of when the log was executed at the client.
	ClientTimestamp int32 `json:"client_timestamp"`

	// Log event type
	EventType string `json:"event_type"`

	// Log level type
	LogLevel string `json:"log_level"`

	ExternalBusinessId *string `json:"external_business_id,omitempty"`

	AdvertiserId *string `json:"advertiser_id,omitempty"`

	MerchantId *string `json:"merchant_id,omitempty"`

	TagId *string `json:"tag_id,omitempty"`

	FeedProfileId *string `json:"feed_profile_id,omitempty"`

	// Explanation of the event that occured.
	Message string `json:"message,omitempty"`

	// Version number of the integration application.
	AppVersionNumber string `json:"app_version_number,omitempty"`

	// Version number of the platform the integration application is running on.
	PlatformVersionNumber string `json:"platform_version_number,omitempty"`

	Error IntegrationLogClientError `json:"error,omitempty"`

	Request IntegrationLogClientRequest `json:"request,omitempty"`
}
