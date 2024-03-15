package models

// IntegrationMetadata - Integration metadata
type IntegrationMetadata struct {

	Id string `json:"id,omitempty"`

	ExternalBusinessId string `json:"external_business_id,omitempty"`

	ConnectedMerchantId string `json:"connected_merchant_id,omitempty"`

	ConnectedUserId string `json:"connected_user_id,omitempty"`

	ConnectedAdvertiserId string `json:"connected_advertiser_id,omitempty"`

	ConnectedLbaId string `json:"connected_lba_id,omitempty"`

	ConnectedTagId string `json:"connected_tag_id,omitempty"`

	PartnerAccessTokenExpiry float32 `json:"partner_access_token_expiry,omitempty"`

	PartnerRefreshTokenExpiry float32 `json:"partner_refresh_token_expiry,omitempty"`

	Scopes string `json:"scopes,omitempty"`

	CreatedTimestamp float32 `json:"created_timestamp,omitempty"`

	UpdatedTimestamp float32 `json:"updated_timestamp,omitempty"`

	AdditionalId1 string `json:"additional_id_1,omitempty"`

	PartnerMetadata string `json:"partner_metadata,omitempty"`
}
