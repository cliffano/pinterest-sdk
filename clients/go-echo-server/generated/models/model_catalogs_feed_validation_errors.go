package models

type CatalogsFeedValidationErrors struct {

	FetchError int32 `json:"fetch_error,omitempty"`

	FetchInactiveFeedError int32 `json:"fetch_inactive_feed_error,omitempty"`

	EncodingError int32 `json:"encoding_error,omitempty"`

	DelimiterError int32 `json:"delimiter_error,omitempty"`

	RequiredColumnsMissing int32 `json:"required_columns_missing,omitempty"`

	ImageLinkInvalid int32 `json:"image_link_invalid,omitempty"`

	ItemidMissing int32 `json:"itemid_missing,omitempty"`

	TitleMissing int32 `json:"title_missing,omitempty"`

	DescriptionMissing int32 `json:"description_missing,omitempty"`

	ProductCategoryInvalid int32 `json:"product_category_invalid,omitempty"`

	ProductLinkMissing int32 `json:"product_link_missing,omitempty"`

	ImageLinkMissing int32 `json:"image_link_missing,omitempty"`

	AvailabilityInvalid int32 `json:"availability_invalid,omitempty"`

	ProductPriceInvalid int32 `json:"product_price_invalid,omitempty"`

	LinkFormatInvalid int32 `json:"link_format_invalid,omitempty"`

	ParseLineError int32 `json:"parse_line_error,omitempty"`

	AdwordsFormatInvalid int32 `json:"adwords_format_invalid,omitempty"`

	ProductCategoryMissing int32 `json:"product_category_missing,omitempty"`

	InternalServiceError int32 `json:"internal_service_error,omitempty"`

	NoVerifiedDomain int32 `json:"no_verified_domain,omitempty"`

	AdultInvalid int32 `json:"adult_invalid,omitempty"`

	InvalidDomain int32 `json:"invalid_domain,omitempty"`

	FeedLengthTooLong int32 `json:"feed_length_too_long,omitempty"`

	LinkLengthTooLong int32 `json:"link_length_too_long,omitempty"`

	MalformedXml int32 `json:"malformed_xml,omitempty"`

	RedirectInvalid int32 `json:"redirect_invalid,omitempty"`

	PriceMissing int32 `json:"price_missing,omitempty"`

	FeedTooSmall int32 `json:"feed_too_small,omitempty"`

	ConditionInvalid int32 `json:"condition_invalid,omitempty"`

	ShopifyNoProducts int32 `json:"shopify_no_products,omitempty"`

	MaxItemsPerItemGroupExceeded int32 `json:"max_items_per_item_group_exceeded,omitempty"`

	ItemMainImageDownloadFailure int32 `json:"item_main_image_download_failure,omitempty"`

	PinjoinContentUnsafe int32 `json:"pinjoin_content_unsafe,omitempty"`

	BlocklistedImageSignature int32 `json:"blocklisted_image_signature,omitempty"`
}
