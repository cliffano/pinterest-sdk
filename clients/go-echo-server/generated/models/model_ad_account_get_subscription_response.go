package models

type AdAccountGetSubscriptionResponse struct {

	// Lead form ID.
	LeadFormId *string `json:"lead_form_id,omitempty"`

	// Standard HTTPS webhook URL.
	WebhookUrl string `json:"webhook_url,omitempty"`

	// Subscription ID.
	Id string `json:"id,omitempty"`

	// User account used to subscribe lead data.
	UserAccountId string `json:"user_account_id,omitempty"`

	// The Ad Account ID that this lead form belongs to.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// API version.
	ApiVersion string `json:"api_version,omitempty"`

	// Base64 encoded key for client to decrypt lead data.
	CryptographicKey string `json:"cryptographic_key,omitempty"`

	// Lead data encryption algorithm.
	CryptographicAlgorithm string `json:"cryptographic_algorithm,omitempty"`

	// Lead form creation time. Unix timestamp in milliseconds.
	CreatedTime int32 `json:"created_time,omitempty"`
}
