package models

type CatalogsFeedValidationWarnings struct {

	TitleLengthTooLong int32 `json:"title_length_too_long,omitempty"`

	DescriptionLengthTooLong int32 `json:"description_length_too_long,omitempty"`

	GenderInvalid int32 `json:"gender_invalid,omitempty"`

	AgeGroupInvalid int32 `json:"age_group_invalid,omitempty"`

	SizeTypeInvalid int32 `json:"size_type_invalid,omitempty"`

	LinkFormatWarning int32 `json:"link_format_warning,omitempty"`

	DuplicateProducts int32 `json:"duplicate_products,omitempty"`

	DuplicateLinks int32 `json:"duplicate_links,omitempty"`

	SalesPriceInvalid int32 `json:"sales_price_invalid,omitempty"`

	ProductCategoryDepthWarning int32 `json:"product_category_depth_warning,omitempty"`

	AdwordsSameAsLink int32 `json:"adwords_same_as_link,omitempty"`

	DuplicateHeaders int32 `json:"duplicate_headers,omitempty"`

	FetchSameSignature int32 `json:"fetch_same_signature,omitempty"`

	AdwordsFormatWarning int32 `json:"adwords_format_warning,omitempty"`

	AdditionalImageLinkWarning int32 `json:"additional_image_link_warning,omitempty"`

	ImageLinkWarning int32 `json:"image_link_warning,omitempty"`

	ShippingInvalid int32 `json:"shipping_invalid,omitempty"`

	TaxInvalid int32 `json:"tax_invalid,omitempty"`

	ShippingWeightInvalid int32 `json:"shipping_weight_invalid,omitempty"`

	ExpirationDateInvalid int32 `json:"expiration_date_invalid,omitempty"`

	AvailabilityDateInvalid int32 `json:"availability_date_invalid,omitempty"`

	SaleDateInvalid int32 `json:"sale_date_invalid,omitempty"`

	WeightUnitInvalid int32 `json:"weight_unit_invalid,omitempty"`

	IsBundleInvalid int32 `json:"is_bundle_invalid,omitempty"`

	UpdatedTimeInvalid int32 `json:"updated_time_invalid,omitempty"`

	CustomLabelLengthTooLong int32 `json:"custom_label_length_too_long,omitempty"`

	ProductTypeLengthTooLong int32 `json:"product_type_length_too_long,omitempty"`

	TooManyAdditionalImageLinks int32 `json:"too_many_additional_image_links,omitempty"`

	MultipackInvalid int32 `json:"multipack_invalid,omitempty"`

	IndexedProductCountLargeDelta int32 `json:"indexed_product_count_large_delta,omitempty"`

	ItemAdditionalImageDownloadFailure int32 `json:"item_additional_image_download_failure,omitempty"`

	OptionalProductCategoryMissing int32 `json:"optional_product_category_missing,omitempty"`

	OptionalProductCategoryInvalid int32 `json:"optional_product_category_invalid,omitempty"`

	OptionalConditionMissing int32 `json:"optional_condition_missing,omitempty"`

	OptionalConditionInvalid int32 `json:"optional_condition_invalid,omitempty"`

	IosDeepLinkInvalid int32 `json:"ios_deep_link_invalid,omitempty"`

	AndroidDeepLinkInvalid int32 `json:"android_deep_link_invalid,omitempty"`

	AvailabilityNormalized int32 `json:"availability_normalized,omitempty"`

	ConditionNormalized int32 `json:"condition_normalized,omitempty"`

	GenderNormalized int32 `json:"gender_normalized,omitempty"`

	SizeTypeNormalized int32 `json:"size_type_normalized,omitempty"`

	AgeGroupNormalized int32 `json:"age_group_normalized,omitempty"`

	UtmSourceAutoCorrected int32 `json:"utm_source_auto_corrected,omitempty"`

	CountryDoesNotMapToCurrency int32 `json:"country_does_not_map_to_currency,omitempty"`

	MinAdPriceInvalid int32 `json:"min_ad_price_invalid,omitempty"`
}
