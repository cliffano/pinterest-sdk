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
// CampaignSummaryStatus : Summary status for campaign
type CampaignSummaryStatus string

// List of CampaignSummaryStatus
const (
	RUNNING CampaignSummaryStatus = "RUNNING"
	PAUSED CampaignSummaryStatus = "PAUSED"
	NOT_STARTED CampaignSummaryStatus = "NOT_STARTED"
	COMPLETED CampaignSummaryStatus = "COMPLETED"
	ADVERTISER_DISABLED CampaignSummaryStatus = "ADVERTISER_DISABLED"
	ARCHIVED CampaignSummaryStatus = "ARCHIVED"
)

// AssertCampaignSummaryStatusRequired checks if the required fields are not zero-ed
func AssertCampaignSummaryStatusRequired(obj CampaignSummaryStatus) error {
	return nil
}

// AssertRecurseCampaignSummaryStatusRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of CampaignSummaryStatus (e.g. [][]CampaignSummaryStatus), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseCampaignSummaryStatusRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aCampaignSummaryStatus, ok := obj.(CampaignSummaryStatus)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertCampaignSummaryStatusRequired(aCampaignSummaryStatus)
	})
}
