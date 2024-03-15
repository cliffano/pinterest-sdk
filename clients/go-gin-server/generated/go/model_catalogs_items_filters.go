/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type CatalogsItemsFilters struct {

	CatalogType CatalogsType `json:"catalog_type"`

	ItemIds []string `json:"item_ids"`

	// Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
	CatalogId string `json:"catalog_id,omitempty"`

	HotelIds []string `json:"hotel_ids"`
}
