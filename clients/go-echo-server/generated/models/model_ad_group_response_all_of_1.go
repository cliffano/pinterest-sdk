package models

type AdGroupResponseAllOf1 struct {

	// Campaign ID of the ad group.
	CampaignId string `json:"campaign_id,omitempty"`

	BillableEvent ActionType `json:"billable_event,omitempty"`

	// Ad group ID.
	Id string `json:"id,omitempty"`

	// Always \"adgroup\".
	Type string `json:"type,omitempty"`

	// Advertiser ID.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// Ad group creation time. Unix timestamp in seconds.
	CreatedTime int32 `json:"created_time,omitempty"`

	// Ad group last update time. Unix timestamp in seconds.
	UpdatedTime int32 `json:"updated_time,omitempty"`
}
