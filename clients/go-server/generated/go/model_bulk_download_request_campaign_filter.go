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




type BulkDownloadRequestCampaignFilter struct {

	// Unix UTC timestamp.
	StartTime string `json:"start_time,omitempty"`

	// Unix UTC timestamp.
	EndTime string `json:"end_time,omitempty"`

	// Campaign name
	Name string `json:"name,omitempty"`

	CampaignStatus []CampaignSummaryStatus `json:"campaign_status,omitempty"`

	ObjectiveType []ObjectiveType `json:"objective_type,omitempty"`
}

// AssertBulkDownloadRequestCampaignFilterRequired checks if the required fields are not zero-ed
func AssertBulkDownloadRequestCampaignFilterRequired(obj BulkDownloadRequestCampaignFilter) error {
	return nil
}

// AssertBulkDownloadRequestCampaignFilterConstraints checks if the values respects the defined constraints
func AssertBulkDownloadRequestCampaignFilterConstraints(obj BulkDownloadRequestCampaignFilter) error {
	return nil
}
