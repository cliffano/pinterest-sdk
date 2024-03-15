//
// CatalogsFeedValidationWarnings.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CatalogsFeedValidationWarnings: Codable, JSONEncodable, Hashable {

    public enum FETCHSAMESIGNATURE: Int, Codable, CaseIterable {
        case _1 = 1
    }
    /** Some items have ad links that are formatted incorrectly. */
    public var AD_LINK_FORMAT_WARNING: Int?
    /** Some items have ad link URLs that are duplicates of the link URLs for those items. */
    public var AD_LINK_SAME_AS_LINK: Int?
    /** The title for some items were truncated because they contain too many characters. */
    public var TITLE_LENGTH_TOO_LONG: Int?
    /** The description for some items were truncated because they contain too many characters. */
    public var DESCRIPTION_LENGTH_TOO_LONG: Int?
    /** Some items have gender values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. */
    public var GENDER_INVALID: Int?
    /** Some items have age group values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. */
    public var AGE_GROUP_INVALID: Int?
    /** Some items have size type values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. */
    public var SIZE_TYPE_INVALID: Int?
    /** Some items have size system values which are not one of the supported size systems. */
    public var SIZE_SYSTEM_INVALID: Int?
    /** Some items have an invalid product link which contains invalid UTM tracking paramaters. */
    public var LINK_FORMAT_WARNING: Int?
    /** Some items have sale price values that are higher than the original price of the item. */
    public var SALES_PRICE_INVALID: Int?
    /** Some items only have 1 or 2 levels of google_product_category values, which may limit visibility in recommendations, search results and shopping experiences. */
    public var PRODUCT_CATEGORY_DEPTH_WARNING: Int?
    /** Some items have adwords_redirect links that are formatted incorrectly. */
    public var ADWORDS_FORMAT_WARNING: Int?
    /** Some items have adwords_redirect URLs that are duplicates of the link URLs for those items. */
    public var ADWORDS_SAME_AS_LINK: Int?
    /** Your feed contains duplicate headers. */
    public var DUPLICATE_HEADERS: Int?
    /** Ingestion completed early because there are no changes to your feed since the last successful update. */
    public var FETCH_SAME_SIGNATURE: FETCHSAMESIGNATURE?
    /** Some items have additional_image_link URLs that contain too many characters, so those items will not be published. */
    public var ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG: Int?
    /** Some items have additional_image_link URLs that are formatted incorrectly and will not be published with your items. */
    public var ADDITIONAL_IMAGE_LINK_WARNING: Int?
    /** Some items have image_link URLs that are formatted incorrectly and will not be published with those items. */
    public var IMAGE_LINK_WARNING: Int?
    /** Some items have shipping values that are formatted incorrectly. */
    public var SHIPPING_INVALID: Int?
    /** Some items have tax values that are formatted incorrectly. */
    public var TAX_INVALID: Int?
    /** Some items have invalid shipping_weight values. */
    public var SHIPPING_WEIGHT_INVALID: Int?
    /** Some items have expiration_date values that are formatted incorrectly, those items will be published without an expiration date. */
    public var EXPIRATION_DATE_INVALID: Int?
    /** Some items have availability_date values that are formatted incorrectly, those items will be published without an availability date. */
    public var AVAILABILITY_DATE_INVALID: Int?
    /** Some items have sale_price_effective_date values that are formatted incorrectly, those items will be published without a sale date. */
    public var SALE_DATE_INVALID: Int?
    /** Some items have weight_unit values that are formatted incorrectly, those items will be published without a weight unit. */
    public var WEIGHT_UNIT_INVALID: Int?
    /** Some items have is_bundle values that are formatted incorrectly, those items will be published without being bundled with other products. */
    public var IS_BUNDLE_INVALID: Int?
    /** Some items have updated_time values thate are formatted incorrectly, those items will be published without an updated time. */
    public var UPDATED_TIME_INVALID: Int?
    /** Some items have custom_label values that are too long, those items will be published without that custom label. */
    public var CUSTOM_LABEL_LENGTH_TOO_LONG: Int?
    /** Some items have product_type values that are too long, those items will be published without that product type. */
    public var PRODUCT_TYPE_LENGTH_TOO_LONG: Int?
    /** Some items have additional_image_link values that exceed the limit for additional images, those items will be published without some of your images. */
    public var TOO_MANY_ADDITIONAL_IMAGE_LINKS: Int?
    /** Some items have invalid multipack values. */
    public var MULTIPACK_INVALID: Int?
    /** The product count has increased or decreased significantly compared to the last successful ingestion. */
    public var INDEXED_PRODUCT_COUNT_LARGE_DELTA: Int?
    /** Some items include additional_image_links that can't be found. */
    public var ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE: Int?
    /** Some items are missing a google_product_category. */
    public var OPTIONAL_PRODUCT_CATEGORY_MISSING: Int?
    /** Some items include google_product_category values that are not formatted correctly according to the GPC taxonomy. */
    public var OPTIONAL_PRODUCT_CATEGORY_INVALID: Int?
    /** Some items are missing a condition value, which may limit visibility in recommendations, search results and shopping experiences. */
    public var OPTIONAL_CONDITION_MISSING: Int?
    /** Some items include condition values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. */
    public var OPTIONAL_CONDITION_INVALID: Int?
    /** Some items include invalid ios_deep_link values. */
    public var IOS_DEEP_LINK_INVALID: Int?
    /** Some items include invalid android_deep_link. */
    public var ANDROID_DEEP_LINK_INVALID: Int?
    /** Some items include utm_source values that are formatted incorrectly and have been automatically corrected. */
    public var UTM_SOURCE_AUTO_CORRECTED: Int?
    /** Some items include a currency that doesn't match the usual currency for the location where that product is sold or shipped. */
    public var COUNTRY_DOES_NOT_MAP_TO_CURRENCY: Int?
    /** Some items include min_ad_price values that are formatted incorrectly. */
    public var MIN_AD_PRICE_INVALID: Int?
    /** Some items include incorrectly formatted GTINs. */
    public var GTIN_INVALID: Int?
    /** Some items include inconsistent currencies in price fields. */
    public var INCONSISTENT_CURRENCY_VALUES: Int?
    /** Some items include sales price that is much lower than the list price. */
    public var SALES_PRICE_TOO_LOW: Int?
    /** Some items include incorrectly formatted shipping_width. */
    public var SHIPPING_WIDTH_INVALID: Int?
    /** Some items include incorrectly formatted shipping_height. */
    public var SHIPPING_HEIGHT_INVALID: Int?
    /** Some items include a sales price that is higher than the list price. The sales price has been defaulted to the list price. */
    public var SALES_PRICE_TOO_HIGH: Int?
    /** Some items include incorrectly formatted MPNs. */
    public var MPN_INVALID: Int?

    public init(AD_LINK_FORMAT_WARNING: Int? = nil, AD_LINK_SAME_AS_LINK: Int? = nil, TITLE_LENGTH_TOO_LONG: Int? = nil, DESCRIPTION_LENGTH_TOO_LONG: Int? = nil, GENDER_INVALID: Int? = nil, AGE_GROUP_INVALID: Int? = nil, SIZE_TYPE_INVALID: Int? = nil, SIZE_SYSTEM_INVALID: Int? = nil, LINK_FORMAT_WARNING: Int? = nil, SALES_PRICE_INVALID: Int? = nil, PRODUCT_CATEGORY_DEPTH_WARNING: Int? = nil, ADWORDS_FORMAT_WARNING: Int? = nil, ADWORDS_SAME_AS_LINK: Int? = nil, DUPLICATE_HEADERS: Int? = nil, FETCH_SAME_SIGNATURE: FETCHSAMESIGNATURE? = nil, ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG: Int? = nil, ADDITIONAL_IMAGE_LINK_WARNING: Int? = nil, IMAGE_LINK_WARNING: Int? = nil, SHIPPING_INVALID: Int? = nil, TAX_INVALID: Int? = nil, SHIPPING_WEIGHT_INVALID: Int? = nil, EXPIRATION_DATE_INVALID: Int? = nil, AVAILABILITY_DATE_INVALID: Int? = nil, SALE_DATE_INVALID: Int? = nil, WEIGHT_UNIT_INVALID: Int? = nil, IS_BUNDLE_INVALID: Int? = nil, UPDATED_TIME_INVALID: Int? = nil, CUSTOM_LABEL_LENGTH_TOO_LONG: Int? = nil, PRODUCT_TYPE_LENGTH_TOO_LONG: Int? = nil, TOO_MANY_ADDITIONAL_IMAGE_LINKS: Int? = nil, MULTIPACK_INVALID: Int? = nil, INDEXED_PRODUCT_COUNT_LARGE_DELTA: Int? = nil, ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE: Int? = nil, OPTIONAL_PRODUCT_CATEGORY_MISSING: Int? = nil, OPTIONAL_PRODUCT_CATEGORY_INVALID: Int? = nil, OPTIONAL_CONDITION_MISSING: Int? = nil, OPTIONAL_CONDITION_INVALID: Int? = nil, IOS_DEEP_LINK_INVALID: Int? = nil, ANDROID_DEEP_LINK_INVALID: Int? = nil, UTM_SOURCE_AUTO_CORRECTED: Int? = nil, COUNTRY_DOES_NOT_MAP_TO_CURRENCY: Int? = nil, MIN_AD_PRICE_INVALID: Int? = nil, GTIN_INVALID: Int? = nil, INCONSISTENT_CURRENCY_VALUES: Int? = nil, SALES_PRICE_TOO_LOW: Int? = nil, SHIPPING_WIDTH_INVALID: Int? = nil, SHIPPING_HEIGHT_INVALID: Int? = nil, SALES_PRICE_TOO_HIGH: Int? = nil, MPN_INVALID: Int? = nil) {
        self.AD_LINK_FORMAT_WARNING = AD_LINK_FORMAT_WARNING
        self.AD_LINK_SAME_AS_LINK = AD_LINK_SAME_AS_LINK
        self.TITLE_LENGTH_TOO_LONG = TITLE_LENGTH_TOO_LONG
        self.DESCRIPTION_LENGTH_TOO_LONG = DESCRIPTION_LENGTH_TOO_LONG
        self.GENDER_INVALID = GENDER_INVALID
        self.AGE_GROUP_INVALID = AGE_GROUP_INVALID
        self.SIZE_TYPE_INVALID = SIZE_TYPE_INVALID
        self.SIZE_SYSTEM_INVALID = SIZE_SYSTEM_INVALID
        self.LINK_FORMAT_WARNING = LINK_FORMAT_WARNING
        self.SALES_PRICE_INVALID = SALES_PRICE_INVALID
        self.PRODUCT_CATEGORY_DEPTH_WARNING = PRODUCT_CATEGORY_DEPTH_WARNING
        self.ADWORDS_FORMAT_WARNING = ADWORDS_FORMAT_WARNING
        self.ADWORDS_SAME_AS_LINK = ADWORDS_SAME_AS_LINK
        self.DUPLICATE_HEADERS = DUPLICATE_HEADERS
        self.FETCH_SAME_SIGNATURE = FETCH_SAME_SIGNATURE
        self.ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG = ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG
        self.ADDITIONAL_IMAGE_LINK_WARNING = ADDITIONAL_IMAGE_LINK_WARNING
        self.IMAGE_LINK_WARNING = IMAGE_LINK_WARNING
        self.SHIPPING_INVALID = SHIPPING_INVALID
        self.TAX_INVALID = TAX_INVALID
        self.SHIPPING_WEIGHT_INVALID = SHIPPING_WEIGHT_INVALID
        self.EXPIRATION_DATE_INVALID = EXPIRATION_DATE_INVALID
        self.AVAILABILITY_DATE_INVALID = AVAILABILITY_DATE_INVALID
        self.SALE_DATE_INVALID = SALE_DATE_INVALID
        self.WEIGHT_UNIT_INVALID = WEIGHT_UNIT_INVALID
        self.IS_BUNDLE_INVALID = IS_BUNDLE_INVALID
        self.UPDATED_TIME_INVALID = UPDATED_TIME_INVALID
        self.CUSTOM_LABEL_LENGTH_TOO_LONG = CUSTOM_LABEL_LENGTH_TOO_LONG
        self.PRODUCT_TYPE_LENGTH_TOO_LONG = PRODUCT_TYPE_LENGTH_TOO_LONG
        self.TOO_MANY_ADDITIONAL_IMAGE_LINKS = TOO_MANY_ADDITIONAL_IMAGE_LINKS
        self.MULTIPACK_INVALID = MULTIPACK_INVALID
        self.INDEXED_PRODUCT_COUNT_LARGE_DELTA = INDEXED_PRODUCT_COUNT_LARGE_DELTA
        self.ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE = ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE
        self.OPTIONAL_PRODUCT_CATEGORY_MISSING = OPTIONAL_PRODUCT_CATEGORY_MISSING
        self.OPTIONAL_PRODUCT_CATEGORY_INVALID = OPTIONAL_PRODUCT_CATEGORY_INVALID
        self.OPTIONAL_CONDITION_MISSING = OPTIONAL_CONDITION_MISSING
        self.OPTIONAL_CONDITION_INVALID = OPTIONAL_CONDITION_INVALID
        self.IOS_DEEP_LINK_INVALID = IOS_DEEP_LINK_INVALID
        self.ANDROID_DEEP_LINK_INVALID = ANDROID_DEEP_LINK_INVALID
        self.UTM_SOURCE_AUTO_CORRECTED = UTM_SOURCE_AUTO_CORRECTED
        self.COUNTRY_DOES_NOT_MAP_TO_CURRENCY = COUNTRY_DOES_NOT_MAP_TO_CURRENCY
        self.MIN_AD_PRICE_INVALID = MIN_AD_PRICE_INVALID
        self.GTIN_INVALID = GTIN_INVALID
        self.INCONSISTENT_CURRENCY_VALUES = INCONSISTENT_CURRENCY_VALUES
        self.SALES_PRICE_TOO_LOW = SALES_PRICE_TOO_LOW
        self.SHIPPING_WIDTH_INVALID = SHIPPING_WIDTH_INVALID
        self.SHIPPING_HEIGHT_INVALID = SHIPPING_HEIGHT_INVALID
        self.SALES_PRICE_TOO_HIGH = SALES_PRICE_TOO_HIGH
        self.MPN_INVALID = MPN_INVALID
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case AD_LINK_FORMAT_WARNING
        case AD_LINK_SAME_AS_LINK
        case TITLE_LENGTH_TOO_LONG
        case DESCRIPTION_LENGTH_TOO_LONG
        case GENDER_INVALID
        case AGE_GROUP_INVALID
        case SIZE_TYPE_INVALID
        case SIZE_SYSTEM_INVALID
        case LINK_FORMAT_WARNING
        case SALES_PRICE_INVALID
        case PRODUCT_CATEGORY_DEPTH_WARNING
        case ADWORDS_FORMAT_WARNING
        case ADWORDS_SAME_AS_LINK
        case DUPLICATE_HEADERS
        case FETCH_SAME_SIGNATURE
        case ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG
        case ADDITIONAL_IMAGE_LINK_WARNING
        case IMAGE_LINK_WARNING
        case SHIPPING_INVALID
        case TAX_INVALID
        case SHIPPING_WEIGHT_INVALID
        case EXPIRATION_DATE_INVALID
        case AVAILABILITY_DATE_INVALID
        case SALE_DATE_INVALID
        case WEIGHT_UNIT_INVALID
        case IS_BUNDLE_INVALID
        case UPDATED_TIME_INVALID
        case CUSTOM_LABEL_LENGTH_TOO_LONG
        case PRODUCT_TYPE_LENGTH_TOO_LONG
        case TOO_MANY_ADDITIONAL_IMAGE_LINKS
        case MULTIPACK_INVALID
        case INDEXED_PRODUCT_COUNT_LARGE_DELTA
        case ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE
        case OPTIONAL_PRODUCT_CATEGORY_MISSING
        case OPTIONAL_PRODUCT_CATEGORY_INVALID
        case OPTIONAL_CONDITION_MISSING
        case OPTIONAL_CONDITION_INVALID
        case IOS_DEEP_LINK_INVALID
        case ANDROID_DEEP_LINK_INVALID
        case UTM_SOURCE_AUTO_CORRECTED
        case COUNTRY_DOES_NOT_MAP_TO_CURRENCY
        case MIN_AD_PRICE_INVALID
        case GTIN_INVALID
        case INCONSISTENT_CURRENCY_VALUES
        case SALES_PRICE_TOO_LOW
        case SHIPPING_WIDTH_INVALID
        case SHIPPING_HEIGHT_INVALID
        case SALES_PRICE_TOO_HIGH
        case MPN_INVALID
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(AD_LINK_FORMAT_WARNING, forKey: .AD_LINK_FORMAT_WARNING)
        try container.encodeIfPresent(AD_LINK_SAME_AS_LINK, forKey: .AD_LINK_SAME_AS_LINK)
        try container.encodeIfPresent(TITLE_LENGTH_TOO_LONG, forKey: .TITLE_LENGTH_TOO_LONG)
        try container.encodeIfPresent(DESCRIPTION_LENGTH_TOO_LONG, forKey: .DESCRIPTION_LENGTH_TOO_LONG)
        try container.encodeIfPresent(GENDER_INVALID, forKey: .GENDER_INVALID)
        try container.encodeIfPresent(AGE_GROUP_INVALID, forKey: .AGE_GROUP_INVALID)
        try container.encodeIfPresent(SIZE_TYPE_INVALID, forKey: .SIZE_TYPE_INVALID)
        try container.encodeIfPresent(SIZE_SYSTEM_INVALID, forKey: .SIZE_SYSTEM_INVALID)
        try container.encodeIfPresent(LINK_FORMAT_WARNING, forKey: .LINK_FORMAT_WARNING)
        try container.encodeIfPresent(SALES_PRICE_INVALID, forKey: .SALES_PRICE_INVALID)
        try container.encodeIfPresent(PRODUCT_CATEGORY_DEPTH_WARNING, forKey: .PRODUCT_CATEGORY_DEPTH_WARNING)
        try container.encodeIfPresent(ADWORDS_FORMAT_WARNING, forKey: .ADWORDS_FORMAT_WARNING)
        try container.encodeIfPresent(ADWORDS_SAME_AS_LINK, forKey: .ADWORDS_SAME_AS_LINK)
        try container.encodeIfPresent(DUPLICATE_HEADERS, forKey: .DUPLICATE_HEADERS)
        try container.encodeIfPresent(FETCH_SAME_SIGNATURE, forKey: .FETCH_SAME_SIGNATURE)
        try container.encodeIfPresent(ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG, forKey: .ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG)
        try container.encodeIfPresent(ADDITIONAL_IMAGE_LINK_WARNING, forKey: .ADDITIONAL_IMAGE_LINK_WARNING)
        try container.encodeIfPresent(IMAGE_LINK_WARNING, forKey: .IMAGE_LINK_WARNING)
        try container.encodeIfPresent(SHIPPING_INVALID, forKey: .SHIPPING_INVALID)
        try container.encodeIfPresent(TAX_INVALID, forKey: .TAX_INVALID)
        try container.encodeIfPresent(SHIPPING_WEIGHT_INVALID, forKey: .SHIPPING_WEIGHT_INVALID)
        try container.encodeIfPresent(EXPIRATION_DATE_INVALID, forKey: .EXPIRATION_DATE_INVALID)
        try container.encodeIfPresent(AVAILABILITY_DATE_INVALID, forKey: .AVAILABILITY_DATE_INVALID)
        try container.encodeIfPresent(SALE_DATE_INVALID, forKey: .SALE_DATE_INVALID)
        try container.encodeIfPresent(WEIGHT_UNIT_INVALID, forKey: .WEIGHT_UNIT_INVALID)
        try container.encodeIfPresent(IS_BUNDLE_INVALID, forKey: .IS_BUNDLE_INVALID)
        try container.encodeIfPresent(UPDATED_TIME_INVALID, forKey: .UPDATED_TIME_INVALID)
        try container.encodeIfPresent(CUSTOM_LABEL_LENGTH_TOO_LONG, forKey: .CUSTOM_LABEL_LENGTH_TOO_LONG)
        try container.encodeIfPresent(PRODUCT_TYPE_LENGTH_TOO_LONG, forKey: .PRODUCT_TYPE_LENGTH_TOO_LONG)
        try container.encodeIfPresent(TOO_MANY_ADDITIONAL_IMAGE_LINKS, forKey: .TOO_MANY_ADDITIONAL_IMAGE_LINKS)
        try container.encodeIfPresent(MULTIPACK_INVALID, forKey: .MULTIPACK_INVALID)
        try container.encodeIfPresent(INDEXED_PRODUCT_COUNT_LARGE_DELTA, forKey: .INDEXED_PRODUCT_COUNT_LARGE_DELTA)
        try container.encodeIfPresent(ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE, forKey: .ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE)
        try container.encodeIfPresent(OPTIONAL_PRODUCT_CATEGORY_MISSING, forKey: .OPTIONAL_PRODUCT_CATEGORY_MISSING)
        try container.encodeIfPresent(OPTIONAL_PRODUCT_CATEGORY_INVALID, forKey: .OPTIONAL_PRODUCT_CATEGORY_INVALID)
        try container.encodeIfPresent(OPTIONAL_CONDITION_MISSING, forKey: .OPTIONAL_CONDITION_MISSING)
        try container.encodeIfPresent(OPTIONAL_CONDITION_INVALID, forKey: .OPTIONAL_CONDITION_INVALID)
        try container.encodeIfPresent(IOS_DEEP_LINK_INVALID, forKey: .IOS_DEEP_LINK_INVALID)
        try container.encodeIfPresent(ANDROID_DEEP_LINK_INVALID, forKey: .ANDROID_DEEP_LINK_INVALID)
        try container.encodeIfPresent(UTM_SOURCE_AUTO_CORRECTED, forKey: .UTM_SOURCE_AUTO_CORRECTED)
        try container.encodeIfPresent(COUNTRY_DOES_NOT_MAP_TO_CURRENCY, forKey: .COUNTRY_DOES_NOT_MAP_TO_CURRENCY)
        try container.encodeIfPresent(MIN_AD_PRICE_INVALID, forKey: .MIN_AD_PRICE_INVALID)
        try container.encodeIfPresent(GTIN_INVALID, forKey: .GTIN_INVALID)
        try container.encodeIfPresent(INCONSISTENT_CURRENCY_VALUES, forKey: .INCONSISTENT_CURRENCY_VALUES)
        try container.encodeIfPresent(SALES_PRICE_TOO_LOW, forKey: .SALES_PRICE_TOO_LOW)
        try container.encodeIfPresent(SHIPPING_WIDTH_INVALID, forKey: .SHIPPING_WIDTH_INVALID)
        try container.encodeIfPresent(SHIPPING_HEIGHT_INVALID, forKey: .SHIPPING_HEIGHT_INVALID)
        try container.encodeIfPresent(SALES_PRICE_TOO_HIGH, forKey: .SALES_PRICE_TOO_HIGH)
        try container.encodeIfPresent(MPN_INVALID, forKey: .MPN_INVALID)
    }
}

