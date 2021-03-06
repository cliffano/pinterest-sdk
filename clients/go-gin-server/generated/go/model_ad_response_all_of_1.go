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

type AdResponseAllOf1 struct {

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
