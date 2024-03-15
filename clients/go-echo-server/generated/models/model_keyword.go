package models

type Keyword struct {

	Archived bool `json:"archived,omitempty"`

	// Keyword ID .
	Id string `json:"id,omitempty"`

	// Keyword parent entity ID (advertiser, campaign, ad group).
	ParentId string `json:"parent_id,omitempty"`

	// Parent entity type
	ParentType string `json:"parent_type,omitempty"`

	// Always keyword
	Type string `json:"type,omitempty"`

	// Keyword custom bid in microcurrency - null if inherited from parent ad group.
	Bid *int32 `json:"bid,omitempty"`

	MatchType *MatchTypeResponse `json:"match_type"`

	// Keyword value (120 chars max).
	Value string `json:"value"`
}
