package models

type AdResponse struct {

	// ID of the ad group that contains the ad.
	AdGroupId string `json:"ad_group_id,omitempty"`

	// Deep link URL for Android devices. Not currently available. Using this field will generate an error.
	AndroidDeepLink *string `json:"android_deep_link,omitempty"`

	// Comma-separated deep links for the carousel pin on Android.
	CarouselAndroidDeepLinks *[]string `json:"carousel_android_deep_links,omitempty"`

	// Comma-separated destination URLs for the carousel pin to promote.
	CarouselDestinationUrls *[]string `json:"carousel_destination_urls,omitempty"`

	// Comma-separated deep links for the carousel pin on iOS.
	CarouselIosDeepLinks *[]string `json:"carousel_ios_deep_links,omitempty"`

	// Tracking url for the ad clicks.
	ClickTrackingUrl *string `json:"click_tracking_url,omitempty"`

	// Ad creative type enum
	CreativeType string `json:"creative_type,omitempty"`

	// Destination URL.
	DestinationUrl *string `json:"destination_url,omitempty"`

	// Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
	IosDeepLink *string `json:"ios_deep_link,omitempty"`

	// Is original pin deleted?
	IsPinDeleted bool `json:"is_pin_deleted,omitempty"`

	// Is pin repinnable?
	IsRemovable bool `json:"is_removable,omitempty"`

	// Name of the ad - 255 chars max.
	Name *string `json:"name,omitempty"`

	// Pin ID.
	PinId string `json:"pin_id,omitempty"`

	Status EntityStatus `json:"status,omitempty"`

	TrackingUrls *TrackingUrls `json:"tracking_urls,omitempty"`

	// Tracking URL for ad impressions.
	ViewTrackingUrl *string `json:"view_tracking_url,omitempty"`

	// The ID of the advertiser that this ad belongs to.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// ID of the ad campaign that contains this ad.
	CampaignId string `json:"campaign_id,omitempty"`

	// Destination URL template for all items within a collections drawer.
	CollectionItemsDestinationUrlTemplate *string `json:"collection_items_destination_url_template,omitempty"`

	// Pin creation time. Unix timestamp in seconds.
	CreatedTime int32 `json:"created_time,omitempty"`

	// The ID of this ad.
	Id string `json:"id,omitempty"`

	// Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
	RejectedReasons []string `json:"rejected_reasons,omitempty"`

	// Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
	RejectionLabels []string `json:"rejection_labels,omitempty"`

	// Ad review status
	ReviewStatus string `json:"review_status,omitempty"`

	// Always \"ad\".
	Type string `json:"type,omitempty"`

	// Last update time. Unix timestamp in seconds.
	UpdatedTime int32 `json:"updated_time,omitempty"`

	// Ad summary status
	SummaryStatus PinPromotionSummaryStatus `json:"summary_status,omitempty"`
}
