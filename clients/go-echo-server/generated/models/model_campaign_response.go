package models

type CampaignResponse struct {

	// Campaign ID.
	Id string `json:"id"`

	// Campaign's Advertiser ID.
	AdAccountId string `json:"ad_account_id"`

	// Campaign name.
	Name string `json:"name,omitempty"`

	Status EntityStatus `json:"status,omitempty"`

	// Campaign total spending cap.
	LifetimeSpendCap *int32 `json:"lifetime_spend_cap,omitempty"`

	// Campaign daily spending cap.
	DailySpendCap *int32 `json:"daily_spend_cap,omitempty"`

	// Order line ID that appears on the invoice.
	OrderLineId *string `json:"order_line_id,omitempty"`

	TrackingUrls *TrackingUrls `json:"tracking_urls,omitempty"`

	// Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
	StartTime *int32 `json:"start_time,omitempty"`

	// Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns.
	EndTime *int32 `json:"end_time,omitempty"`

	ObjectiveType ObjectiveType `json:"objective_type,omitempty"`

	// Campaign creation time. Unix timestamp in seconds.
	CreatedTime int32 `json:"created_time,omitempty"`

	// UTC timestamp. Last update time.
	UpdatedTime int32 `json:"updated_time,omitempty"`

	// Always \"campaign\".
	Type string `json:"type,omitempty"`
}
