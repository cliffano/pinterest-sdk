package models

type CatalogsRetailItemsFilter struct {

	CatalogType string `json:"catalog_type"`

	ItemIds []string `json:"item_ids"`

	// Catalog id pertaining to the retail item. If not provided, default to oldest retail catalog
	CatalogId string `json:"catalog_id,omitempty"`
}
