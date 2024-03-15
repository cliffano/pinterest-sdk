package models

type ConversionTagResponse struct {

	// Ad account ID.
	AdAccountId string `json:"ad_account_id,omitempty"`

	// Tag code snippet.
	CodeSnippet string `json:"code_snippet,omitempty"`

	EnhancedMatchStatus *EnhancedMatchStatusType `json:"enhanced_match_status,omitempty"`

	// Tag ID.
	Id string `json:"id,omitempty"`

	// Time for the last event fired.
	LastFiredTimeMs *float32 `json:"last_fired_time_ms,omitempty"`

	// Conversion tag name.
	Name string `json:"name,omitempty"`

	Status EntityStatus `json:"status,omitempty"`

	// Version number.
	Version string `json:"version,omitempty"`

	Configs ConversionTagConfigs `json:"configs,omitempty"`
}
