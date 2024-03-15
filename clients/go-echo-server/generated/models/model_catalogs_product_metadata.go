package models

// CatalogsProductMetadata - Product metadata entity
type CatalogsProductMetadata struct {

	// The user-created unique ID that represents the product.
	ItemId string `json:"item_id"`

	// The parent ID of the product.
	ItemGroupId *string `json:"item_group_id"`

	Availability NonNullableProductAvailabilityType `json:"availability"`

	// The price of the product.
	Price float32 `json:"price"`

	// The discounted price of the product.
	SalePrice *float32 `json:"sale_price"`

	Currency NonNullableCatalogsCurrency `json:"currency"`
}
