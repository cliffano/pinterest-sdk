package models

type CatalogsVerticalProductGroup struct {

	CatalogType string `json:"catalog_type"`

	// ID of the catalog product group.
	Id string `json:"id"`

	// Name of catalog product group
	Name string `json:"name,omitempty"`

	Description *string `json:"description,omitempty"`

	Filters CatalogsProductGroupFilters `json:"filters"`

	// Unix timestamp in seconds of when catalog product group was created.
	CreatedAt int32 `json:"created_at,omitempty"`

	// Unix timestamp in seconds of last time catalog product group was updated.
	UpdatedAt int32 `json:"updated_at,omitempty"`

	CatalogId string `json:"catalog_id"`

	// boolean indicator of whether the product group is being featured or not
	IsFeatured bool `json:"is_featured,omitempty"`

	Type CatalogsProductGroupType `json:"type,omitempty"`

	Status CatalogsProductGroupStatus `json:"status,omitempty"`

	FeedId *string `json:"feed_id"`
}
