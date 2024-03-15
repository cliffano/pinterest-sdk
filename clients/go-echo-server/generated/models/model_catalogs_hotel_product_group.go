package models

type CatalogsHotelProductGroup struct {

	CatalogType string `json:"catalog_type"`

	// ID of the hotel product group.
	Id string `json:"id"`

	// Name of hotel product group
	Name string `json:"name,omitempty"`

	Description *string `json:"description,omitempty"`

	Filters CatalogsHotelProductGroupFilters `json:"filters"`

	// Unix timestamp in seconds of when catalog product group was created.
	CreatedAt int32 `json:"created_at,omitempty"`

	// Unix timestamp in seconds of last time catalog product group was updated.
	UpdatedAt int32 `json:"updated_at,omitempty"`

	CatalogId string `json:"catalog_id"`
}
