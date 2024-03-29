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




type AdCommonTrackingUrls struct {

	Impression []string `json:"impression,omitempty"`

	Click []string `json:"click,omitempty"`

	Engagement []string `json:"engagement,omitempty"`

	BuyableButton []string `json:"buyable_button,omitempty"`

	AudienceVerification []string `json:"audience_verification,omitempty"`
}

// AssertAdCommonTrackingUrlsRequired checks if the required fields are not zero-ed
func AssertAdCommonTrackingUrlsRequired(obj AdCommonTrackingUrls) error {
	return nil
}

// AssertAdCommonTrackingUrlsConstraints checks if the values respects the defined constraints
func AssertAdCommonTrackingUrlsConstraints(obj AdCommonTrackingUrls) error {
	return nil
}
