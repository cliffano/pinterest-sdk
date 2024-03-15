package models

type AdUpdateRequest struct {

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

	CreativeType CreativeType `json:"creative_type,omitempty"`

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

	Status EntityStatus `json:"status,omitempty"`

	TrackingUrls *AdCommonTrackingUrls `json:"tracking_urls,omitempty"`

	// Tracking URL for ad impressions.
	ViewTrackingUrl *string `json:"view_tracking_url,omitempty"`

	// Lead form ID for lead ad generation.
	LeadFormId *string `json:"lead_form_id,omitempty"`

	GridClickType *GridClickType `json:"grid_click_type,omitempty"`

	// Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
	CustomizableCtaType *string `json:"customizable_cta_type,omitempty"`

	QuizPinData *AdCommonQuizPinData `json:"quiz_pin_data,omitempty"`

	// The ID of this ad.
	Id string `json:"id"`

	// Pin ID. This field may only be updated for draft ads.
	PinId *string `json:"pin_id,omitempty"`
}
