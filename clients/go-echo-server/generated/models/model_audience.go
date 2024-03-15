package models

type Audience struct {

	// Ad account ID.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// Audience ID.
	Id string `json:"id,omitempty"`

	// Audience name.
	Name string `json:"name,omitempty"`

	// <a href=\"/docs/reference/glossary/#Audience Types\">Audience types</a>: ACTALIKE, ENGAGEMENT, CUSTOMER_LIST and VISITOR
	AudienceType string `json:"audience_type,omitempty"`

	// Audience description.
	Description *string `json:"description,omitempty"`

	Rule AudienceRule `json:"rule,omitempty"`

	// Audience size.
	Size *int32 `json:"size,omitempty"`

	// Audience status. READY, INITIALIZING, TOO_SMALL - Each audience list needs to have at least 100 people with Pinterest accounts before you can start using it.
	Status string `json:"status,omitempty"`

	// Always \"audience\".
	Type string `json:"type,omitempty"`

	// Creation time. Unix timestamp in seconds.
	CreatedTimestamp *int32 `json:"created_timestamp,omitempty"`

	// Last update time. Unix timestamp in seconds.
	UpdatedTimestamp *int32 `json:"updated_timestamp,omitempty"`
}
