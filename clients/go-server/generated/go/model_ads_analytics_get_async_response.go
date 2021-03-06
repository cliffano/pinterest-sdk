/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type AdsAnalyticsGetAsyncResponse struct {

	ReportStatus string `json:"report_status,omitempty"`

	Url *string `json:"url,omitempty"`

	Size *float32 `json:"size,omitempty"`
}

// AssertAdsAnalyticsGetAsyncResponseRequired checks if the required fields are not zero-ed
func AssertAdsAnalyticsGetAsyncResponseRequired(obj AdsAnalyticsGetAsyncResponse) error {
	return nil
}

// AssertRecurseAdsAnalyticsGetAsyncResponseRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AdsAnalyticsGetAsyncResponse (e.g. [][]AdsAnalyticsGetAsyncResponse), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseAdsAnalyticsGetAsyncResponseRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAdsAnalyticsGetAsyncResponse, ok := obj.(AdsAnalyticsGetAsyncResponse)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertAdsAnalyticsGetAsyncResponseRequired(aAdsAnalyticsGetAsyncResponse)
	})
}
