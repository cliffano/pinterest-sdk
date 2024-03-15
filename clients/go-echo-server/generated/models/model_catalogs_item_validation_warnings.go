package models

type CatalogsItemValidationWarnings struct {

	AD_LINK_FORMAT_WARNING CatalogsItemValidationDetails `json:"AD_LINK_FORMAT_WARNING,omitempty"`

	AD_LINK_SAME_AS_LINK CatalogsItemValidationDetails `json:"AD_LINK_SAME_AS_LINK,omitempty"`

	ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG CatalogsItemValidationDetails `json:"ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG,omitempty"`

	ADDITIONAL_IMAGE_LINK_WARNING CatalogsItemValidationDetails `json:"ADDITIONAL_IMAGE_LINK_WARNING,omitempty"`

	ADWORDS_FORMAT_WARNING CatalogsItemValidationDetails `json:"ADWORDS_FORMAT_WARNING,omitempty"`

	ADWORDS_SAME_AS_LINK CatalogsItemValidationDetails `json:"ADWORDS_SAME_AS_LINK,omitempty"`

	AGE_GROUP_INVALID CatalogsItemValidationDetails `json:"AGE_GROUP_INVALID,omitempty"`

	SIZE_SYSTEM_INVALID CatalogsItemValidationDetails `json:"SIZE_SYSTEM_INVALID,omitempty"`

	ANDROID_DEEP_LINK_INVALID CatalogsItemValidationDetails `json:"ANDROID_DEEP_LINK_INVALID,omitempty"`

	AVAILABILITY_DATE_INVALID CatalogsItemValidationDetails `json:"AVAILABILITY_DATE_INVALID,omitempty"`

	COUNTRY_DOES_NOT_MAP_TO_CURRENCY CatalogsItemValidationDetails `json:"COUNTRY_DOES_NOT_MAP_TO_CURRENCY,omitempty"`

	CUSTOM_LABEL_LENGTH_TOO_LONG CatalogsItemValidationDetails `json:"CUSTOM_LABEL_LENGTH_TOO_LONG,omitempty"`

	DESCRIPTION_LENGTH_TOO_LONG CatalogsItemValidationDetails `json:"DESCRIPTION_LENGTH_TOO_LONG,omitempty"`

	EXPIRATION_DATE_INVALID CatalogsItemValidationDetails `json:"EXPIRATION_DATE_INVALID,omitempty"`

	GENDER_INVALID CatalogsItemValidationDetails `json:"GENDER_INVALID,omitempty"`

	GTIN_INVALID CatalogsItemValidationDetails `json:"GTIN_INVALID,omitempty"`

	IMAGE_LINK_WARNING CatalogsItemValidationDetails `json:"IMAGE_LINK_WARNING,omitempty"`

	IOS_DEEP_LINK_INVALID CatalogsItemValidationDetails `json:"IOS_DEEP_LINK_INVALID,omitempty"`

	IS_BUNDLE_INVALID CatalogsItemValidationDetails `json:"IS_BUNDLE_INVALID,omitempty"`

	ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE CatalogsItemValidationDetails `json:"ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE,omitempty"`

	LINK_FORMAT_WARNING CatalogsItemValidationDetails `json:"LINK_FORMAT_WARNING,omitempty"`

	MIN_AD_PRICE_INVALID CatalogsItemValidationDetails `json:"MIN_AD_PRICE_INVALID,omitempty"`

	MPN_INVALID CatalogsItemValidationDetails `json:"MPN_INVALID,omitempty"`

	MULTIPACK_INVALID CatalogsItemValidationDetails `json:"MULTIPACK_INVALID,omitempty"`

	OPTIONAL_CONDITION_INVALID CatalogsItemValidationDetails `json:"OPTIONAL_CONDITION_INVALID,omitempty"`

	OPTIONAL_CONDITION_MISSING CatalogsItemValidationDetails `json:"OPTIONAL_CONDITION_MISSING,omitempty"`

	OPTIONAL_PRODUCT_CATEGORY_INVALID CatalogsItemValidationDetails `json:"OPTIONAL_PRODUCT_CATEGORY_INVALID,omitempty"`

	OPTIONAL_PRODUCT_CATEGORY_MISSING CatalogsItemValidationDetails `json:"OPTIONAL_PRODUCT_CATEGORY_MISSING,omitempty"`

	PRODUCT_CATEGORY_DEPTH_WARNING CatalogsItemValidationDetails `json:"PRODUCT_CATEGORY_DEPTH_WARNING,omitempty"`

	PRODUCT_TYPE_LENGTH_TOO_LONG CatalogsItemValidationDetails `json:"PRODUCT_TYPE_LENGTH_TOO_LONG,omitempty"`

	SALES_PRICE_INVALID CatalogsItemValidationDetails `json:"SALES_PRICE_INVALID,omitempty"`

	SALES_PRICE_TOO_LOW CatalogsItemValidationDetails `json:"SALES_PRICE_TOO_LOW,omitempty"`

	SALES_PRICE_TOO_HIGH CatalogsItemValidationDetails `json:"SALES_PRICE_TOO_HIGH,omitempty"`

	SALE_DATE_INVALID CatalogsItemValidationDetails `json:"SALE_DATE_INVALID,omitempty"`

	SHIPPING_INVALID CatalogsItemValidationDetails `json:"SHIPPING_INVALID,omitempty"`

	SHIPPING_HEIGHT_INVALID CatalogsItemValidationDetails `json:"SHIPPING_HEIGHT_INVALID,omitempty"`

	SHIPPING_WEIGHT_INVALID CatalogsItemValidationDetails `json:"SHIPPING_WEIGHT_INVALID,omitempty"`

	SHIPPING_WIDTH_INVALID CatalogsItemValidationDetails `json:"SHIPPING_WIDTH_INVALID,omitempty"`

	SIZE_TYPE_INVALID CatalogsItemValidationDetails `json:"SIZE_TYPE_INVALID,omitempty"`

	TAX_INVALID CatalogsItemValidationDetails `json:"TAX_INVALID,omitempty"`

	TITLE_LENGTH_TOO_LONG CatalogsItemValidationDetails `json:"TITLE_LENGTH_TOO_LONG,omitempty"`

	TOO_MANY_ADDITIONAL_IMAGE_LINKS CatalogsItemValidationDetails `json:"TOO_MANY_ADDITIONAL_IMAGE_LINKS,omitempty"`

	UTM_SOURCE_AUTO_CORRECTED CatalogsItemValidationDetails `json:"UTM_SOURCE_AUTO_CORRECTED,omitempty"`

	WEIGHT_UNIT_INVALID CatalogsItemValidationDetails `json:"WEIGHT_UNIT_INVALID,omitempty"`
}
