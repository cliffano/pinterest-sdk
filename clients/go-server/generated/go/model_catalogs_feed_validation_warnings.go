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




type CatalogsFeedValidationWarnings struct {

	// Some items have ad links that are formatted incorrectly.
	AD_LINK_FORMAT_WARNING int32 `json:"AD_LINK_FORMAT_WARNING,omitempty"`

	// Some items have ad link URLs that are duplicates of the link URLs for those items.
	AD_LINK_SAME_AS_LINK int32 `json:"AD_LINK_SAME_AS_LINK,omitempty"`

	// The title for some items were truncated because they contain too many characters.
	TITLE_LENGTH_TOO_LONG int32 `json:"TITLE_LENGTH_TOO_LONG,omitempty"`

	// The description for some items were truncated because they contain too many characters.
	DESCRIPTION_LENGTH_TOO_LONG int32 `json:"DESCRIPTION_LENGTH_TOO_LONG,omitempty"`

	// Some items have gender values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
	GENDER_INVALID int32 `json:"GENDER_INVALID,omitempty"`

	// Some items have age group values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
	AGE_GROUP_INVALID int32 `json:"AGE_GROUP_INVALID,omitempty"`

	// Some items have size type values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
	SIZE_TYPE_INVALID int32 `json:"SIZE_TYPE_INVALID,omitempty"`

	// Some items have size system values which are not one of the supported size systems.
	SIZE_SYSTEM_INVALID int32 `json:"SIZE_SYSTEM_INVALID,omitempty"`

	// Some items have an invalid product link which contains invalid UTM tracking paramaters.
	LINK_FORMAT_WARNING int32 `json:"LINK_FORMAT_WARNING,omitempty"`

	// Some items have sale price values that are higher than the original price of the item.
	SALES_PRICE_INVALID int32 `json:"SALES_PRICE_INVALID,omitempty"`

	// Some items only have 1 or 2 levels of google_product_category values, which may limit visibility in recommendations, search results and shopping experiences.
	PRODUCT_CATEGORY_DEPTH_WARNING int32 `json:"PRODUCT_CATEGORY_DEPTH_WARNING,omitempty"`

	// Some items have adwords_redirect links that are formatted incorrectly.
	ADWORDS_FORMAT_WARNING int32 `json:"ADWORDS_FORMAT_WARNING,omitempty"`

	// Some items have adwords_redirect URLs that are duplicates of the link URLs for those items.
	ADWORDS_SAME_AS_LINK int32 `json:"ADWORDS_SAME_AS_LINK,omitempty"`

	// Your feed contains duplicate headers.
	DUPLICATE_HEADERS int32 `json:"DUPLICATE_HEADERS,omitempty"`

	// Ingestion completed early because there are no changes to your feed since the last successful update.
	FETCH_SAME_SIGNATURE int32 `json:"FETCH_SAME_SIGNATURE,omitempty"`

	// Some items have additional_image_link URLs that contain too many characters, so those items will not be published.
	ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG int32 `json:"ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG,omitempty"`

	// Some items have additional_image_link URLs that are formatted incorrectly and will not be published with your items.
	ADDITIONAL_IMAGE_LINK_WARNING int32 `json:"ADDITIONAL_IMAGE_LINK_WARNING,omitempty"`

	// Some items have image_link URLs that are formatted incorrectly and will not be published with those items.
	IMAGE_LINK_WARNING int32 `json:"IMAGE_LINK_WARNING,omitempty"`

	// Some items have shipping values that are formatted incorrectly.
	SHIPPING_INVALID int32 `json:"SHIPPING_INVALID,omitempty"`

	// Some items have tax values that are formatted incorrectly.
	TAX_INVALID int32 `json:"TAX_INVALID,omitempty"`

	// Some items have invalid shipping_weight values.
	SHIPPING_WEIGHT_INVALID int32 `json:"SHIPPING_WEIGHT_INVALID,omitempty"`

	// Some items have expiration_date values that are formatted incorrectly, those items will be published without an expiration date.
	EXPIRATION_DATE_INVALID int32 `json:"EXPIRATION_DATE_INVALID,omitempty"`

	// Some items have availability_date values that are formatted incorrectly, those items will be published without an availability date.
	AVAILABILITY_DATE_INVALID int32 `json:"AVAILABILITY_DATE_INVALID,omitempty"`

	// Some items have sale_price_effective_date values that are formatted incorrectly, those items will be published without a sale date.
	SALE_DATE_INVALID int32 `json:"SALE_DATE_INVALID,omitempty"`

	// Some items have weight_unit values that are formatted incorrectly, those items will be published without a weight unit.
	WEIGHT_UNIT_INVALID int32 `json:"WEIGHT_UNIT_INVALID,omitempty"`

	// Some items have is_bundle values that are formatted incorrectly, those items will be published without being bundled with other products.
	IS_BUNDLE_INVALID int32 `json:"IS_BUNDLE_INVALID,omitempty"`

	// Some items have updated_time values thate are formatted incorrectly, those items will be published without an updated time.
	UPDATED_TIME_INVALID int32 `json:"UPDATED_TIME_INVALID,omitempty"`

	// Some items have custom_label values that are too long, those items will be published without that custom label.
	CUSTOM_LABEL_LENGTH_TOO_LONG int32 `json:"CUSTOM_LABEL_LENGTH_TOO_LONG,omitempty"`

	// Some items have product_type values that are too long, those items will be published without that product type.
	PRODUCT_TYPE_LENGTH_TOO_LONG int32 `json:"PRODUCT_TYPE_LENGTH_TOO_LONG,omitempty"`

	// Some items have additional_image_link values that exceed the limit for additional images, those items will be published without some of your images.
	TOO_MANY_ADDITIONAL_IMAGE_LINKS int32 `json:"TOO_MANY_ADDITIONAL_IMAGE_LINKS,omitempty"`

	// Some items have invalid multipack values.
	MULTIPACK_INVALID int32 `json:"MULTIPACK_INVALID,omitempty"`

	// The product count has increased or decreased significantly compared to the last successful ingestion.
	INDEXED_PRODUCT_COUNT_LARGE_DELTA int32 `json:"INDEXED_PRODUCT_COUNT_LARGE_DELTA,omitempty"`

	// Some items include additional_image_links that can't be found.
	ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE int32 `json:"ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE,omitempty"`

	// Some items are missing a google_product_category.
	OPTIONAL_PRODUCT_CATEGORY_MISSING int32 `json:"OPTIONAL_PRODUCT_CATEGORY_MISSING,omitempty"`

	// Some items include google_product_category values that are not formatted correctly according to the GPC taxonomy.
	OPTIONAL_PRODUCT_CATEGORY_INVALID int32 `json:"OPTIONAL_PRODUCT_CATEGORY_INVALID,omitempty"`

	// Some items are missing a condition value, which may limit visibility in recommendations, search results and shopping experiences.
	OPTIONAL_CONDITION_MISSING int32 `json:"OPTIONAL_CONDITION_MISSING,omitempty"`

	// Some items include condition values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
	OPTIONAL_CONDITION_INVALID int32 `json:"OPTIONAL_CONDITION_INVALID,omitempty"`

	// Some items include invalid ios_deep_link values.
	IOS_DEEP_LINK_INVALID int32 `json:"IOS_DEEP_LINK_INVALID,omitempty"`

	// Some items include invalid android_deep_link.
	ANDROID_DEEP_LINK_INVALID int32 `json:"ANDROID_DEEP_LINK_INVALID,omitempty"`

	// Some items include utm_source values that are formatted incorrectly and have been automatically corrected.
	UTM_SOURCE_AUTO_CORRECTED int32 `json:"UTM_SOURCE_AUTO_CORRECTED,omitempty"`

	// Some items include a currency that doesn't match the usual currency for the location where that product is sold or shipped.
	COUNTRY_DOES_NOT_MAP_TO_CURRENCY int32 `json:"COUNTRY_DOES_NOT_MAP_TO_CURRENCY,omitempty"`

	// Some items include min_ad_price values that are formatted incorrectly.
	MIN_AD_PRICE_INVALID int32 `json:"MIN_AD_PRICE_INVALID,omitempty"`

	// Some items include incorrectly formatted GTINs.
	GTIN_INVALID int32 `json:"GTIN_INVALID,omitempty"`

	// Some items include inconsistent currencies in price fields.
	INCONSISTENT_CURRENCY_VALUES int32 `json:"INCONSISTENT_CURRENCY_VALUES,omitempty"`

	// Some items include sales price that is much lower than the list price.
	SALES_PRICE_TOO_LOW int32 `json:"SALES_PRICE_TOO_LOW,omitempty"`

	// Some items include incorrectly formatted shipping_width.
	SHIPPING_WIDTH_INVALID int32 `json:"SHIPPING_WIDTH_INVALID,omitempty"`

	// Some items include incorrectly formatted shipping_height.
	SHIPPING_HEIGHT_INVALID int32 `json:"SHIPPING_HEIGHT_INVALID,omitempty"`

	// Some items include a sales price that is higher than the list price. The sales price has been defaulted to the list price.
	SALES_PRICE_TOO_HIGH int32 `json:"SALES_PRICE_TOO_HIGH,omitempty"`

	// Some items include incorrectly formatted MPNs.
	MPN_INVALID int32 `json:"MPN_INVALID,omitempty"`
}

// AssertCatalogsFeedValidationWarningsRequired checks if the required fields are not zero-ed
func AssertCatalogsFeedValidationWarningsRequired(obj CatalogsFeedValidationWarnings) error {
	return nil
}

// AssertCatalogsFeedValidationWarningsConstraints checks if the values respects the defined constraints
func AssertCatalogsFeedValidationWarningsConstraints(obj CatalogsFeedValidationWarnings) error {
	return nil
}