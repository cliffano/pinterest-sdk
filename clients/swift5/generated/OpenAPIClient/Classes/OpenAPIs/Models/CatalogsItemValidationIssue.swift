//
// CatalogsItemValidationIssue.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public enum CatalogsItemValidationIssue: String, Codable, CaseIterable {
    case adLinkFormatWarning = "AD_LINK_FORMAT_WARNING"
    case adLinkSameAsLink = "AD_LINK_SAME_AS_LINK"
    case additionalImageLinkLengthTooLong = "ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG"
    case additionalImageLinkWarning = "ADDITIONAL_IMAGE_LINK_WARNING"
    case adultInvalid = "ADULT_INVALID"
    case adwordsFormatInvalid = "ADWORDS_FORMAT_INVALID"
    case adwordsFormatWarning = "ADWORDS_FORMAT_WARNING"
    case adwordsSameAsLink = "ADWORDS_SAME_AS_LINK"
    case ageGroupInvalid = "AGE_GROUP_INVALID"
    case androidDeepLinkInvalid = "ANDROID_DEEP_LINK_INVALID"
    case availabilityDateInvalid = "AVAILABILITY_DATE_INVALID"
    case availabilityInvalid = "AVAILABILITY_INVALID"
    case blocklistedImageSignature = "BLOCKLISTED_IMAGE_SIGNATURE"
    case countryDoesNotMapToCurrency = "COUNTRY_DOES_NOT_MAP_TO_CURRENCY"
    case customLabelLengthTooLong = "CUSTOM_LABEL_LENGTH_TOO_LONG"
    case descriptionLengthTooLong = "DESCRIPTION_LENGTH_TOO_LONG"
    case descriptionMissing = "DESCRIPTION_MISSING"
    case duplicateProducts = "DUPLICATE_PRODUCTS"
    case expirationDateInvalid = "EXPIRATION_DATE_INVALID"
    case genderInvalid = "GENDER_INVALID"
    case gtinInvalid = "GTIN_INVALID"
    case imageLinkInvalid = "IMAGE_LINK_INVALID"
    case imageLinkLengthTooLong = "IMAGE_LINK_LENGTH_TOO_LONG"
    case imageLinkMissing = "IMAGE_LINK_MISSING"
    case imageLinkWarning = "IMAGE_LINK_WARNING"
    case invalidDomain = "INVALID_DOMAIN"
    case iosDeepLinkInvalid = "IOS_DEEP_LINK_INVALID"
    case isBundleInvalid = "IS_BUNDLE_INVALID"
    case itemAdditionalImageDownloadFailure = "ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE"
    case itemMainImageDownloadFailure = "ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE"
    case itemidMissing = "ITEMID_MISSING"
    case linkFormatInvalid = "LINK_FORMAT_INVALID"
    case linkFormatWarning = "LINK_FORMAT_WARNING"
    case linkLengthTooLong = "LINK_LENGTH_TOO_LONG"
    case listPriceInvalid = "LIST_PRICE_INVALID"
    case maxItemsPerItemGroupExceeded = "MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED"
    case minAdPriceInvalid = "MIN_AD_PRICE_INVALID"
    case mpnInvalid = "MPN_INVALID"
    case multipackInvalid = "MULTIPACK_INVALID"
    case optionalConditionInvalid = "OPTIONAL_CONDITION_INVALID"
    case optionalConditionMissing = "OPTIONAL_CONDITION_MISSING"
    case optionalProductCategoryInvalid = "OPTIONAL_PRODUCT_CATEGORY_INVALID"
    case optionalProductCategoryMissing = "OPTIONAL_PRODUCT_CATEGORY_MISSING"
    case parseLineError = "PARSE_LINE_ERROR"
    case pinjoinContentUnsafe = "PINJOIN_CONTENT_UNSAFE"
    case priceCannotBeDetermined = "PRICE_CANNOT_BE_DETERMINED"
    case priceMissing = "PRICE_MISSING"
    case productCategoryDepthWarning = "PRODUCT_CATEGORY_DEPTH_WARNING"
    case productLinkMissing = "PRODUCT_LINK_MISSING"
    case productPriceInvalid = "PRODUCT_PRICE_INVALID"
    case productTypeLengthTooLong = "PRODUCT_TYPE_LENGTH_TOO_LONG"
    case saleDateInvalid = "SALE_DATE_INVALID"
    case salesPriceInvalid = "SALES_PRICE_INVALID"
    case salesPriceTooHigh = "SALES_PRICE_TOO_HIGH"
    case salesPriceTooLow = "SALES_PRICE_TOO_LOW"
    case shippingInvalid = "SHIPPING_INVALID"
    case shippingHeightInvalid = "SHIPPING_HEIGHT_INVALID"
    case shippingWeightInvalid = "SHIPPING_WEIGHT_INVALID"
    case shippingWidthInvalid = "SHIPPING_WIDTH_INVALID"
    case sizeSystemInvalid = "SIZE_SYSTEM_INVALID"
    case sizeTypeInvalid = "SIZE_TYPE_INVALID"
    case taxInvalid = "TAX_INVALID"
    case titleLengthTooLong = "TITLE_LENGTH_TOO_LONG"
    case titleMissing = "TITLE_MISSING"
    case tooManyAdditionalImageLinks = "TOO_MANY_ADDITIONAL_IMAGE_LINKS"
    case utmSourceAutoCorrected = "UTM_SOURCE_AUTO_CORRECTED"
    case weightUnitInvalid = "WEIGHT_UNIT_INVALID"
}