//
// CatalogsFeedValidationErrors.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CatalogsFeedValidationErrors: Codable, JSONEncodable, Hashable {

    /** Pinterest couldn't download your feed. */
    public var FETCH_ERROR: Int?
    /** Your feed wasn't ingested because it hasn’t changed in the previous 90 days. */
    public var FETCH_INACTIVE_FEED_ERROR: Int?
    /** Your feed includes data with an unsupported encoding format. */
    public var ENCODING_ERROR: Int?
    /** Your feed includes data with formatting errors. */
    public var DELIMITER_ERROR: Int?
    /** Your feed is missing some required column headers. */
    public var REQUIRED_COLUMNS_MISSING: Int?
    /** Some products are duplicated. */
    public var DUPLICATE_PRODUCTS: Int?
    /** Some image links are formatted incorrectly. */
    public var IMAGE_LINK_INVALID: Int?
    /** Some items are missing an item id in their product metadata, those items will not be published. */
    public var ITEMID_MISSING: Int?
    /** Some items are missing a title in their product metadata, those items will not be published. */
    public var TITLE_MISSING: Int?
    /** Some items are missing a description in their product metadata, those items will not be published. */
    public var DESCRIPTION_MISSING: Int?
    /** Some items are missing a link URL in their product metadata, those items will not be published. */
    public var PRODUCT_LINK_MISSING: Int?
    /** Some items are missing an image link URL in their product metadata, those items will not be published. */
    public var IMAGE_LINK_MISSING: Int?
    /** Some items are missing an availability value in their product metadata, those items will not be published. */
    public var AVAILABILITY_INVALID: Int?
    /** Some items have price formatting errors in their product metadata, those items will not be published. */
    public var PRODUCT_PRICE_INVALID: Int?
    /** Some link values are formatted incorrectly. */
    public var LINK_FORMAT_INVALID: Int?
    /** Your feed contains formatting errors for some items. */
    public var PARSE_LINE_ERROR: Int?
    /** Some adwords links contain too many characters. */
    public var ADWORDS_FORMAT_INVALID: Int?
    /** We experienced a technical difficulty and were unable to ingest your feed. The next ingestion will happen in 24 hours. */
    public var INTERNAL_SERVICE_ERROR: Int?
    /** Your merchant domain needs to be claimed. */
    public var NO_VERIFIED_DOMAIN: Int?
    /** Some items have invalid adult values. */
    public var ADULT_INVALID: Int?
    /** Some items have image_link URLs that contain too many characters, so those items will not be published. */
    public var IMAGE_LINK_LENGTH_TOO_LONG: Int?
    /** Some of your product link values don't match the verified domain associated with this account. */
    public var INVALID_DOMAIN: Int?
    /** Your feed contains too many items, some items will not be published. */
    public var FEED_LENGTH_TOO_LONG: Int?
    /** Some product links contain too many characters, those items will not be published. */
    public var LINK_LENGTH_TOO_LONG: Int?
    /** Your feed couldn't be validated because the xml file is formatted incorrectly. */
    public var MALFORMED_XML: Int?
    /** Some products are missing a price, those items will not be published. */
    public var PRICE_MISSING: Int?
    /** Your feed couldn't be validated because the file doesn't contain the minimum number of lines required. */
    public var FEED_TOO_SMALL: Int?
    /** Some items exceed the maximum number of items per item group, those items will not be published. */
    public var MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED: Int?
    /** Some items' main images can't be found. */
    public var ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE: Int?
    /** Some items were not published because they don't meet Pinterest's Merchant Guidelines. */
    public var PINJOIN_CONTENT_UNSAFE: Int?
    /** Some items were not published because they don't meet Pinterest's Merchant Guidelines. */
    public var BLOCKLISTED_IMAGE_SIGNATURE: Int?
    /** Some items have list price formatting errors in their product metadata, those items will not be published. */
    public var LIST_PRICE_INVALID: Int?
    /** Some items were not published because price cannot be determined. The price, list price, and sale price are all different, so those items will not be published. */
    public var PRICE_CANNOT_BE_DETERMINED: Int?

    public init(FETCH_ERROR: Int? = nil, FETCH_INACTIVE_FEED_ERROR: Int? = nil, ENCODING_ERROR: Int? = nil, DELIMITER_ERROR: Int? = nil, REQUIRED_COLUMNS_MISSING: Int? = nil, DUPLICATE_PRODUCTS: Int? = nil, IMAGE_LINK_INVALID: Int? = nil, ITEMID_MISSING: Int? = nil, TITLE_MISSING: Int? = nil, DESCRIPTION_MISSING: Int? = nil, PRODUCT_LINK_MISSING: Int? = nil, IMAGE_LINK_MISSING: Int? = nil, AVAILABILITY_INVALID: Int? = nil, PRODUCT_PRICE_INVALID: Int? = nil, LINK_FORMAT_INVALID: Int? = nil, PARSE_LINE_ERROR: Int? = nil, ADWORDS_FORMAT_INVALID: Int? = nil, INTERNAL_SERVICE_ERROR: Int? = nil, NO_VERIFIED_DOMAIN: Int? = nil, ADULT_INVALID: Int? = nil, IMAGE_LINK_LENGTH_TOO_LONG: Int? = nil, INVALID_DOMAIN: Int? = nil, FEED_LENGTH_TOO_LONG: Int? = nil, LINK_LENGTH_TOO_LONG: Int? = nil, MALFORMED_XML: Int? = nil, PRICE_MISSING: Int? = nil, FEED_TOO_SMALL: Int? = nil, MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED: Int? = nil, ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE: Int? = nil, PINJOIN_CONTENT_UNSAFE: Int? = nil, BLOCKLISTED_IMAGE_SIGNATURE: Int? = nil, LIST_PRICE_INVALID: Int? = nil, PRICE_CANNOT_BE_DETERMINED: Int? = nil) {
        self.FETCH_ERROR = FETCH_ERROR
        self.FETCH_INACTIVE_FEED_ERROR = FETCH_INACTIVE_FEED_ERROR
        self.ENCODING_ERROR = ENCODING_ERROR
        self.DELIMITER_ERROR = DELIMITER_ERROR
        self.REQUIRED_COLUMNS_MISSING = REQUIRED_COLUMNS_MISSING
        self.DUPLICATE_PRODUCTS = DUPLICATE_PRODUCTS
        self.IMAGE_LINK_INVALID = IMAGE_LINK_INVALID
        self.ITEMID_MISSING = ITEMID_MISSING
        self.TITLE_MISSING = TITLE_MISSING
        self.DESCRIPTION_MISSING = DESCRIPTION_MISSING
        self.PRODUCT_LINK_MISSING = PRODUCT_LINK_MISSING
        self.IMAGE_LINK_MISSING = IMAGE_LINK_MISSING
        self.AVAILABILITY_INVALID = AVAILABILITY_INVALID
        self.PRODUCT_PRICE_INVALID = PRODUCT_PRICE_INVALID
        self.LINK_FORMAT_INVALID = LINK_FORMAT_INVALID
        self.PARSE_LINE_ERROR = PARSE_LINE_ERROR
        self.ADWORDS_FORMAT_INVALID = ADWORDS_FORMAT_INVALID
        self.INTERNAL_SERVICE_ERROR = INTERNAL_SERVICE_ERROR
        self.NO_VERIFIED_DOMAIN = NO_VERIFIED_DOMAIN
        self.ADULT_INVALID = ADULT_INVALID
        self.IMAGE_LINK_LENGTH_TOO_LONG = IMAGE_LINK_LENGTH_TOO_LONG
        self.INVALID_DOMAIN = INVALID_DOMAIN
        self.FEED_LENGTH_TOO_LONG = FEED_LENGTH_TOO_LONG
        self.LINK_LENGTH_TOO_LONG = LINK_LENGTH_TOO_LONG
        self.MALFORMED_XML = MALFORMED_XML
        self.PRICE_MISSING = PRICE_MISSING
        self.FEED_TOO_SMALL = FEED_TOO_SMALL
        self.MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED = MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED
        self.ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE = ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE
        self.PINJOIN_CONTENT_UNSAFE = PINJOIN_CONTENT_UNSAFE
        self.BLOCKLISTED_IMAGE_SIGNATURE = BLOCKLISTED_IMAGE_SIGNATURE
        self.LIST_PRICE_INVALID = LIST_PRICE_INVALID
        self.PRICE_CANNOT_BE_DETERMINED = PRICE_CANNOT_BE_DETERMINED
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case FETCH_ERROR
        case FETCH_INACTIVE_FEED_ERROR
        case ENCODING_ERROR
        case DELIMITER_ERROR
        case REQUIRED_COLUMNS_MISSING
        case DUPLICATE_PRODUCTS
        case IMAGE_LINK_INVALID
        case ITEMID_MISSING
        case TITLE_MISSING
        case DESCRIPTION_MISSING
        case PRODUCT_LINK_MISSING
        case IMAGE_LINK_MISSING
        case AVAILABILITY_INVALID
        case PRODUCT_PRICE_INVALID
        case LINK_FORMAT_INVALID
        case PARSE_LINE_ERROR
        case ADWORDS_FORMAT_INVALID
        case INTERNAL_SERVICE_ERROR
        case NO_VERIFIED_DOMAIN
        case ADULT_INVALID
        case IMAGE_LINK_LENGTH_TOO_LONG
        case INVALID_DOMAIN
        case FEED_LENGTH_TOO_LONG
        case LINK_LENGTH_TOO_LONG
        case MALFORMED_XML
        case PRICE_MISSING
        case FEED_TOO_SMALL
        case MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED
        case ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE
        case PINJOIN_CONTENT_UNSAFE
        case BLOCKLISTED_IMAGE_SIGNATURE
        case LIST_PRICE_INVALID
        case PRICE_CANNOT_BE_DETERMINED
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(FETCH_ERROR, forKey: .FETCH_ERROR)
        try container.encodeIfPresent(FETCH_INACTIVE_FEED_ERROR, forKey: .FETCH_INACTIVE_FEED_ERROR)
        try container.encodeIfPresent(ENCODING_ERROR, forKey: .ENCODING_ERROR)
        try container.encodeIfPresent(DELIMITER_ERROR, forKey: .DELIMITER_ERROR)
        try container.encodeIfPresent(REQUIRED_COLUMNS_MISSING, forKey: .REQUIRED_COLUMNS_MISSING)
        try container.encodeIfPresent(DUPLICATE_PRODUCTS, forKey: .DUPLICATE_PRODUCTS)
        try container.encodeIfPresent(IMAGE_LINK_INVALID, forKey: .IMAGE_LINK_INVALID)
        try container.encodeIfPresent(ITEMID_MISSING, forKey: .ITEMID_MISSING)
        try container.encodeIfPresent(TITLE_MISSING, forKey: .TITLE_MISSING)
        try container.encodeIfPresent(DESCRIPTION_MISSING, forKey: .DESCRIPTION_MISSING)
        try container.encodeIfPresent(PRODUCT_LINK_MISSING, forKey: .PRODUCT_LINK_MISSING)
        try container.encodeIfPresent(IMAGE_LINK_MISSING, forKey: .IMAGE_LINK_MISSING)
        try container.encodeIfPresent(AVAILABILITY_INVALID, forKey: .AVAILABILITY_INVALID)
        try container.encodeIfPresent(PRODUCT_PRICE_INVALID, forKey: .PRODUCT_PRICE_INVALID)
        try container.encodeIfPresent(LINK_FORMAT_INVALID, forKey: .LINK_FORMAT_INVALID)
        try container.encodeIfPresent(PARSE_LINE_ERROR, forKey: .PARSE_LINE_ERROR)
        try container.encodeIfPresent(ADWORDS_FORMAT_INVALID, forKey: .ADWORDS_FORMAT_INVALID)
        try container.encodeIfPresent(INTERNAL_SERVICE_ERROR, forKey: .INTERNAL_SERVICE_ERROR)
        try container.encodeIfPresent(NO_VERIFIED_DOMAIN, forKey: .NO_VERIFIED_DOMAIN)
        try container.encodeIfPresent(ADULT_INVALID, forKey: .ADULT_INVALID)
        try container.encodeIfPresent(IMAGE_LINK_LENGTH_TOO_LONG, forKey: .IMAGE_LINK_LENGTH_TOO_LONG)
        try container.encodeIfPresent(INVALID_DOMAIN, forKey: .INVALID_DOMAIN)
        try container.encodeIfPresent(FEED_LENGTH_TOO_LONG, forKey: .FEED_LENGTH_TOO_LONG)
        try container.encodeIfPresent(LINK_LENGTH_TOO_LONG, forKey: .LINK_LENGTH_TOO_LONG)
        try container.encodeIfPresent(MALFORMED_XML, forKey: .MALFORMED_XML)
        try container.encodeIfPresent(PRICE_MISSING, forKey: .PRICE_MISSING)
        try container.encodeIfPresent(FEED_TOO_SMALL, forKey: .FEED_TOO_SMALL)
        try container.encodeIfPresent(MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED, forKey: .MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED)
        try container.encodeIfPresent(ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE, forKey: .ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE)
        try container.encodeIfPresent(PINJOIN_CONTENT_UNSAFE, forKey: .PINJOIN_CONTENT_UNSAFE)
        try container.encodeIfPresent(BLOCKLISTED_IMAGE_SIGNATURE, forKey: .BLOCKLISTED_IMAGE_SIGNATURE)
        try container.encodeIfPresent(LIST_PRICE_INVALID, forKey: .LIST_PRICE_INVALID)
        try container.encodeIfPresent(PRICE_CANNOT_BE_DETERMINED, forKey: .PRICE_CANNOT_BE_DETERMINED)
    }
}

