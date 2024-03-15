package models

type CatalogsFeedValidationErrors struct {

	// Pinterest couldn't download your feed.
	FETCH_ERROR int32 `json:"FETCH_ERROR,omitempty"`

	// Your feed wasn't ingested because it hasn’t changed in the previous 90 days.
	FETCH_INACTIVE_FEED_ERROR int32 `json:"FETCH_INACTIVE_FEED_ERROR,omitempty"`

	// Your feed includes data with an unsupported encoding format.
	ENCODING_ERROR int32 `json:"ENCODING_ERROR,omitempty"`

	// Your feed includes data with formatting errors.
	DELIMITER_ERROR int32 `json:"DELIMITER_ERROR,omitempty"`

	// Your feed is missing some required column headers.
	REQUIRED_COLUMNS_MISSING int32 `json:"REQUIRED_COLUMNS_MISSING,omitempty"`

	// Some products are duplicated.
	DUPLICATE_PRODUCTS int32 `json:"DUPLICATE_PRODUCTS,omitempty"`

	// Some image links are formatted incorrectly.
	IMAGE_LINK_INVALID int32 `json:"IMAGE_LINK_INVALID,omitempty"`

	// Some items are missing an item id in their product metadata, those items will not be published.
	ITEMID_MISSING int32 `json:"ITEMID_MISSING,omitempty"`

	// Some items are missing a title in their product metadata, those items will not be published.
	TITLE_MISSING int32 `json:"TITLE_MISSING,omitempty"`

	// Some items are missing a description in their product metadata, those items will not be published.
	DESCRIPTION_MISSING int32 `json:"DESCRIPTION_MISSING,omitempty"`

	// Some items are missing a link URL in their product metadata, those items will not be published.
	PRODUCT_LINK_MISSING int32 `json:"PRODUCT_LINK_MISSING,omitempty"`

	// Some items are missing an image link URL in their product metadata, those items will not be published.
	IMAGE_LINK_MISSING int32 `json:"IMAGE_LINK_MISSING,omitempty"`

	// Some items are missing an availability value in their product metadata, those items will not be published.
	AVAILABILITY_INVALID int32 `json:"AVAILABILITY_INVALID,omitempty"`

	// Some items have price formatting errors in their product metadata, those items will not be published.
	PRODUCT_PRICE_INVALID int32 `json:"PRODUCT_PRICE_INVALID,omitempty"`

	// Some link values are formatted incorrectly.
	LINK_FORMAT_INVALID int32 `json:"LINK_FORMAT_INVALID,omitempty"`

	// Your feed contains formatting errors for some items.
	PARSE_LINE_ERROR int32 `json:"PARSE_LINE_ERROR,omitempty"`

	// Some adwords links contain too many characters.
	ADWORDS_FORMAT_INVALID int32 `json:"ADWORDS_FORMAT_INVALID,omitempty"`

	// We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours.
	INTERNAL_SERVICE_ERROR int32 `json:"INTERNAL_SERVICE_ERROR,omitempty"`

	// Your merchant domain needs to be claimed.
	NO_VERIFIED_DOMAIN int32 `json:"NO_VERIFIED_DOMAIN,omitempty"`

	// Some items have invalid adult values.
	ADULT_INVALID int32 `json:"ADULT_INVALID,omitempty"`

	// Some items have image_link URLs that contain too many characters, so those items will not be published.
	IMAGE_LINK_LENGTH_TOO_LONG int32 `json:"IMAGE_LINK_LENGTH_TOO_LONG,omitempty"`

	// Some of your product link values don't match the verified domain associated with this account.
	INVALID_DOMAIN int32 `json:"INVALID_DOMAIN,omitempty"`

	// Your feed contains too many items, some items will not be published.
	FEED_LENGTH_TOO_LONG int32 `json:"FEED_LENGTH_TOO_LONG,omitempty"`

	// Some product links contain too many characters, those items will not be published.
	LINK_LENGTH_TOO_LONG int32 `json:"LINK_LENGTH_TOO_LONG,omitempty"`

	// Your feed couldn't be validated because the xml file is formatted incorrectly.
	MALFORMED_XML int32 `json:"MALFORMED_XML,omitempty"`

	// Some products are missing a price, those items will not be published.
	PRICE_MISSING int32 `json:"PRICE_MISSING,omitempty"`

	// Your feed couldn't be validated because the file doesn't contain the minimum number of lines required.
	FEED_TOO_SMALL int32 `json:"FEED_TOO_SMALL,omitempty"`

	// Some items exceed the maximum number of items per item group, those items will not be published.
	MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED int32 `json:"MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED,omitempty"`

	// Some items' main images can't be found.
	ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE int32 `json:"ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE,omitempty"`

	// Some items were not published because they don't meet Pinterest's Merchant Guidelines.
	PINJOIN_CONTENT_UNSAFE int32 `json:"PINJOIN_CONTENT_UNSAFE,omitempty"`

	// Some items were not published because they don't meet Pinterest's Merchant Guidelines.
	BLOCKLISTED_IMAGE_SIGNATURE int32 `json:"BLOCKLISTED_IMAGE_SIGNATURE,omitempty"`

	// Some items have list price formatting errors in their product metadata, those items will not be published.
	LIST_PRICE_INVALID int32 `json:"LIST_PRICE_INVALID,omitempty"`

	// Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published.
	PRICE_CANNOT_BE_DETERMINED int32 `json:"PRICE_CANNOT_BE_DETERMINED,omitempty"`
}
