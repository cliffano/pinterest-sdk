package models

// CatalogProductGroup - non-promoted catalog product group entity
type CatalogProductGroup struct {

	// ID of the catalog product group.
	Id string `json:"id,omitempty"`

	// Merchant ID pertaining to the owner of the catalog product group.
	MerchantId string `json:"merchant_id,omitempty"`

	// Name of catalog product group
	Name string `json:"name,omitempty"`

	// Object holding a list of filters
	Filters map[string]interface{} `json:"filters,omitempty"`

	// Object holding a list of filters
	FilterV2 map[string]interface{} `json:"filter_v2,omitempty"`

	Type Board `json:"type,omitempty"`

	Status EntityStatus `json:"status,omitempty"`

	// id of the feed profile belonging to this catalog product group
	FeedProfileId string `json:"feed_profile_id,omitempty"`

	// Unix timestamp in seconds of when catalog product group was created.
	CreatedAt int32 `json:"created_at,omitempty"`

	// Unix timestamp in seconds of last time catalog product group was updated.
	LastUpdate int32 `json:"last_update,omitempty"`

	// Amount of products in the catalog product group
	ProductCount int32 `json:"product_count,omitempty"`

	// index of the featured position of the catalog product group
	FeaturedPosition int32 `json:"featured_position,omitempty"`
}
