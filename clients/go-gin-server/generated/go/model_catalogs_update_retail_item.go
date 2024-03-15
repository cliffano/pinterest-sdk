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

// CatalogsUpdateRetailItem - An item to be updated
type CatalogsUpdateRetailItem struct {

	// The catalog item id in the merchant namespace
	ItemId string `json:"item_id"`

	Operation string `json:"operation"`

	Attributes UpdatableItemAttributes `json:"attributes"`

	// The list of product attributes to be updated. Attributes specified in the update mask without a value specified in the body will be deleted from the product item.
	UpdateMask *[]UpdateMaskFieldType `json:"update_mask,omitempty"`
}
