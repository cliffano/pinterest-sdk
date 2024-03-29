package models

// CatalogsListProductsByFilterRequestOneOf - Request object to list products for a given feed_id and product group filter.
type CatalogsListProductsByFilterRequestOneOf struct {

	// Catalog Feed id pertaining to the catalog product group filter.
	FeedId string `json:"feed_id"`

	Filters CatalogsProductGroupFilters `json:"filters"`
}
