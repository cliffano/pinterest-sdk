package models

type ConversionEventsDataInnerCustomDataContentsInner struct {

	// The id of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
	Id string `json:"id,omitempty"`

	// The price of a product. Accepted as a string in the request; it will be parsed into a double. This is the original item value before any discount. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
	ItemPrice string `json:"item_price,omitempty"`

	// The amount of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section).
	Quantity int64 `json:"quantity,omitempty"`

	// The name of a product.
	ItemName string `json:"item_name,omitempty"`

	// The category of a product.
	ItemCategory string `json:"item_category,omitempty"`

	// The brand of a product.
	ItemBrand string `json:"item_brand,omitempty"`
}
