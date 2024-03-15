/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { HttpFile } from '../http/http';

export enum CatalogsItemValidationIssue {
    AdLinkFormatWarning = 'AD_LINK_FORMAT_WARNING',
    AdLinkSameAsLink = 'AD_LINK_SAME_AS_LINK',
    AdditionalImageLinkLengthTooLong = 'ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG',
    AdditionalImageLinkWarning = 'ADDITIONAL_IMAGE_LINK_WARNING',
    AdultInvalid = 'ADULT_INVALID',
    AdwordsFormatInvalid = 'ADWORDS_FORMAT_INVALID',
    AdwordsFormatWarning = 'ADWORDS_FORMAT_WARNING',
    AdwordsSameAsLink = 'ADWORDS_SAME_AS_LINK',
    AgeGroupInvalid = 'AGE_GROUP_INVALID',
    AndroidDeepLinkInvalid = 'ANDROID_DEEP_LINK_INVALID',
    AvailabilityDateInvalid = 'AVAILABILITY_DATE_INVALID',
    AvailabilityInvalid = 'AVAILABILITY_INVALID',
    BlocklistedImageSignature = 'BLOCKLISTED_IMAGE_SIGNATURE',
    CountryDoesNotMapToCurrency = 'COUNTRY_DOES_NOT_MAP_TO_CURRENCY',
    CustomLabelLengthTooLong = 'CUSTOM_LABEL_LENGTH_TOO_LONG',
    DescriptionLengthTooLong = 'DESCRIPTION_LENGTH_TOO_LONG',
    DescriptionMissing = 'DESCRIPTION_MISSING',
    DuplicateProducts = 'DUPLICATE_PRODUCTS',
    ExpirationDateInvalid = 'EXPIRATION_DATE_INVALID',
    GenderInvalid = 'GENDER_INVALID',
    GtinInvalid = 'GTIN_INVALID',
    ImageLinkInvalid = 'IMAGE_LINK_INVALID',
    ImageLinkLengthTooLong = 'IMAGE_LINK_LENGTH_TOO_LONG',
    ImageLinkMissing = 'IMAGE_LINK_MISSING',
    ImageLinkWarning = 'IMAGE_LINK_WARNING',
    InvalidDomain = 'INVALID_DOMAIN',
    IosDeepLinkInvalid = 'IOS_DEEP_LINK_INVALID',
    IsBundleInvalid = 'IS_BUNDLE_INVALID',
    ItemAdditionalImageDownloadFailure = 'ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE',
    ItemMainImageDownloadFailure = 'ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE',
    ItemidMissing = 'ITEMID_MISSING',
    LinkFormatInvalid = 'LINK_FORMAT_INVALID',
    LinkFormatWarning = 'LINK_FORMAT_WARNING',
    LinkLengthTooLong = 'LINK_LENGTH_TOO_LONG',
    ListPriceInvalid = 'LIST_PRICE_INVALID',
    MaxItemsPerItemGroupExceeded = 'MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED',
    MinAdPriceInvalid = 'MIN_AD_PRICE_INVALID',
    MpnInvalid = 'MPN_INVALID',
    MultipackInvalid = 'MULTIPACK_INVALID',
    OptionalConditionInvalid = 'OPTIONAL_CONDITION_INVALID',
    OptionalConditionMissing = 'OPTIONAL_CONDITION_MISSING',
    OptionalProductCategoryInvalid = 'OPTIONAL_PRODUCT_CATEGORY_INVALID',
    OptionalProductCategoryMissing = 'OPTIONAL_PRODUCT_CATEGORY_MISSING',
    ParseLineError = 'PARSE_LINE_ERROR',
    PinjoinContentUnsafe = 'PINJOIN_CONTENT_UNSAFE',
    PriceCannotBeDetermined = 'PRICE_CANNOT_BE_DETERMINED',
    PriceMissing = 'PRICE_MISSING',
    ProductCategoryDepthWarning = 'PRODUCT_CATEGORY_DEPTH_WARNING',
    ProductLinkMissing = 'PRODUCT_LINK_MISSING',
    ProductPriceInvalid = 'PRODUCT_PRICE_INVALID',
    ProductTypeLengthTooLong = 'PRODUCT_TYPE_LENGTH_TOO_LONG',
    SaleDateInvalid = 'SALE_DATE_INVALID',
    SalesPriceInvalid = 'SALES_PRICE_INVALID',
    SalesPriceTooHigh = 'SALES_PRICE_TOO_HIGH',
    SalesPriceTooLow = 'SALES_PRICE_TOO_LOW',
    ShippingInvalid = 'SHIPPING_INVALID',
    ShippingHeightInvalid = 'SHIPPING_HEIGHT_INVALID',
    ShippingWeightInvalid = 'SHIPPING_WEIGHT_INVALID',
    ShippingWidthInvalid = 'SHIPPING_WIDTH_INVALID',
    SizeSystemInvalid = 'SIZE_SYSTEM_INVALID',
    SizeTypeInvalid = 'SIZE_TYPE_INVALID',
    TaxInvalid = 'TAX_INVALID',
    TitleLengthTooLong = 'TITLE_LENGTH_TOO_LONG',
    TitleMissing = 'TITLE_MISSING',
    TooManyAdditionalImageLinks = 'TOO_MANY_ADDITIONAL_IMAGE_LINKS',
    UtmSourceAutoCorrected = 'UTM_SOURCE_AUTO_CORRECTED',
    WeightUnitInvalid = 'WEIGHT_UNIT_INVALID'
}
