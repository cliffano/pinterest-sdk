package models

// TrackingUrls - Third-party tracking URLs. Up to three tracking URLs - with a max length of 2,000 - are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. For more information, see <a href=\"https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\" target=\"_blank\">Third-party and dynamic tracking</a>.
type TrackingUrls struct {

	Impression []string `json:"impression,omitempty"`

	Click []string `json:"click,omitempty"`

	Engagement []string `json:"engagement,omitempty"`

	BuyableButton []string `json:"buyable_button,omitempty"`

	AudienceVerification []string `json:"audience_verification,omitempty"`
}
