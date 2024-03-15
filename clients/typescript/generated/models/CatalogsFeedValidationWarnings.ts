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

export class CatalogsFeedValidationWarnings {
    /**
    * Some items have ad links that are formatted incorrectly.
    */
    'AD_LINK_FORMAT_WARNING'?: number;
    /**
    * Some items have ad link URLs that are duplicates of the link URLs for those items.
    */
    'AD_LINK_SAME_AS_LINK'?: number;
    /**
    * The title for some items were truncated because they contain too many characters.
    */
    'TITLE_LENGTH_TOO_LONG'?: number;
    /**
    * The description for some items were truncated because they contain too many characters.
    */
    'DESCRIPTION_LENGTH_TOO_LONG'?: number;
    /**
    * Some items have gender values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
    */
    'GENDER_INVALID'?: number;
    /**
    * Some items have age group values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
    */
    'AGE_GROUP_INVALID'?: number;
    /**
    * Some items have size type values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
    */
    'SIZE_TYPE_INVALID'?: number;
    /**
    * Some items have size system values which are not one of the supported size systems.
    */
    'SIZE_SYSTEM_INVALID'?: number;
    /**
    * Some items have an invalid product link which contains invalid UTM tracking paramaters.
    */
    'LINK_FORMAT_WARNING'?: number;
    /**
    * Some items have sale price values that are higher than the original price of the item.
    */
    'SALES_PRICE_INVALID'?: number;
    /**
    * Some items only have 1 or 2 levels of google_product_category values, which may limit visibility in recommendations, search results and shopping experiences.
    */
    'PRODUCT_CATEGORY_DEPTH_WARNING'?: number;
    /**
    * Some items have adwords_redirect links that are formatted incorrectly.
    */
    'ADWORDS_FORMAT_WARNING'?: number;
    /**
    * Some items have adwords_redirect URLs that are duplicates of the link URLs for those items.
    */
    'ADWORDS_SAME_AS_LINK'?: number;
    /**
    * Your feed contains duplicate headers.
    */
    'DUPLICATE_HEADERS'?: number;
    /**
    * Ingestion completed early because there are no changes to your feed since the last successful update.
    */
    'FETCH_SAME_SIGNATURE'?: CatalogsFeedValidationWarningsFETCHSAMESIGNATUREEnum;
    /**
    * Some items have additional_image_link URLs that contain too many characters, so those items will not be published.
    */
    'ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG'?: number;
    /**
    * Some items have additional_image_link URLs that are formatted incorrectly and will not be published with your items.
    */
    'ADDITIONAL_IMAGE_LINK_WARNING'?: number;
    /**
    * Some items have image_link URLs that are formatted incorrectly and will not be published with those items.
    */
    'IMAGE_LINK_WARNING'?: number;
    /**
    * Some items have shipping values that are formatted incorrectly.
    */
    'SHIPPING_INVALID'?: number;
    /**
    * Some items have tax values that are formatted incorrectly.
    */
    'TAX_INVALID'?: number;
    /**
    * Some items have invalid shipping_weight values.
    */
    'SHIPPING_WEIGHT_INVALID'?: number;
    /**
    * Some items have expiration_date values that are formatted incorrectly, those items will be published without an expiration date.
    */
    'EXPIRATION_DATE_INVALID'?: number;
    /**
    * Some items have availability_date values that are formatted incorrectly, those items will be published without an availability date.
    */
    'AVAILABILITY_DATE_INVALID'?: number;
    /**
    * Some items have sale_price_effective_date values that are formatted incorrectly, those items will be published without a sale date.
    */
    'SALE_DATE_INVALID'?: number;
    /**
    * Some items have weight_unit values that are formatted incorrectly, those items will be published without a weight unit.
    */
    'WEIGHT_UNIT_INVALID'?: number;
    /**
    * Some items have is_bundle values that are formatted incorrectly, those items will be published without being bundled with other products.
    */
    'IS_BUNDLE_INVALID'?: number;
    /**
    * Some items have updated_time values thate are formatted incorrectly, those items will be published without an updated time.
    */
    'UPDATED_TIME_INVALID'?: number;
    /**
    * Some items have custom_label values that are too long, those items will be published without that custom label.
    */
    'CUSTOM_LABEL_LENGTH_TOO_LONG'?: number;
    /**
    * Some items have product_type values that are too long, those items will be published without that product type.
    */
    'PRODUCT_TYPE_LENGTH_TOO_LONG'?: number;
    /**
    * Some items have additional_image_link values that exceed the limit for additional images, those items will be published without some of your images.
    */
    'TOO_MANY_ADDITIONAL_IMAGE_LINKS'?: number;
    /**
    * Some items have invalid multipack values.
    */
    'MULTIPACK_INVALID'?: number;
    /**
    * The product count has increased or decreased significantly compared to the last successful ingestion.
    */
    'INDEXED_PRODUCT_COUNT_LARGE_DELTA'?: number;
    /**
    * Some items include additional_image_links that can\'t be found.
    */
    'ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE'?: number;
    /**
    * Some items are missing a google_product_category.
    */
    'OPTIONAL_PRODUCT_CATEGORY_MISSING'?: number;
    /**
    * Some items include google_product_category values that are not formatted correctly according to the GPC taxonomy.
    */
    'OPTIONAL_PRODUCT_CATEGORY_INVALID'?: number;
    /**
    * Some items are missing a condition value, which may limit visibility in recommendations, search results and shopping experiences.
    */
    'OPTIONAL_CONDITION_MISSING'?: number;
    /**
    * Some items include condition values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences.
    */
    'OPTIONAL_CONDITION_INVALID'?: number;
    /**
    * Some items include invalid ios_deep_link values.
    */
    'IOS_DEEP_LINK_INVALID'?: number;
    /**
    * Some items include invalid android_deep_link.
    */
    'ANDROID_DEEP_LINK_INVALID'?: number;
    /**
    * Some items include utm_source values that are formatted incorrectly and have been automatically corrected.
    */
    'UTM_SOURCE_AUTO_CORRECTED'?: number;
    /**
    * Some items include a currency that doesn\'t match the usual currency for the location where that product is sold or shipped.
    */
    'COUNTRY_DOES_NOT_MAP_TO_CURRENCY'?: number;
    /**
    * Some items include min_ad_price values that are formatted incorrectly.
    */
    'MIN_AD_PRICE_INVALID'?: number;
    /**
    * Some items include incorrectly formatted GTINs.
    */
    'GTIN_INVALID'?: number;
    /**
    * Some items include inconsistent currencies in price fields.
    */
    'INCONSISTENT_CURRENCY_VALUES'?: number;
    /**
    * Some items include sales price that is much lower than the list price.
    */
    'SALES_PRICE_TOO_LOW'?: number;
    /**
    * Some items include incorrectly formatted shipping_width.
    */
    'SHIPPING_WIDTH_INVALID'?: number;
    /**
    * Some items include incorrectly formatted shipping_height.
    */
    'SHIPPING_HEIGHT_INVALID'?: number;
    /**
    * Some items include a sales price that is higher than the list price. The sales price has been defaulted to the list price.
    */
    'SALES_PRICE_TOO_HIGH'?: number;
    /**
    * Some items include incorrectly formatted MPNs.
    */
    'MPN_INVALID'?: number;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "AD_LINK_FORMAT_WARNING",
            "baseName": "AD_LINK_FORMAT_WARNING",
            "type": "number",
            "format": ""
        },
        {
            "name": "AD_LINK_SAME_AS_LINK",
            "baseName": "AD_LINK_SAME_AS_LINK",
            "type": "number",
            "format": ""
        },
        {
            "name": "TITLE_LENGTH_TOO_LONG",
            "baseName": "TITLE_LENGTH_TOO_LONG",
            "type": "number",
            "format": ""
        },
        {
            "name": "DESCRIPTION_LENGTH_TOO_LONG",
            "baseName": "DESCRIPTION_LENGTH_TOO_LONG",
            "type": "number",
            "format": ""
        },
        {
            "name": "GENDER_INVALID",
            "baseName": "GENDER_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "AGE_GROUP_INVALID",
            "baseName": "AGE_GROUP_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "SIZE_TYPE_INVALID",
            "baseName": "SIZE_TYPE_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "SIZE_SYSTEM_INVALID",
            "baseName": "SIZE_SYSTEM_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "LINK_FORMAT_WARNING",
            "baseName": "LINK_FORMAT_WARNING",
            "type": "number",
            "format": ""
        },
        {
            "name": "SALES_PRICE_INVALID",
            "baseName": "SALES_PRICE_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "PRODUCT_CATEGORY_DEPTH_WARNING",
            "baseName": "PRODUCT_CATEGORY_DEPTH_WARNING",
            "type": "number",
            "format": ""
        },
        {
            "name": "ADWORDS_FORMAT_WARNING",
            "baseName": "ADWORDS_FORMAT_WARNING",
            "type": "number",
            "format": ""
        },
        {
            "name": "ADWORDS_SAME_AS_LINK",
            "baseName": "ADWORDS_SAME_AS_LINK",
            "type": "number",
            "format": ""
        },
        {
            "name": "DUPLICATE_HEADERS",
            "baseName": "DUPLICATE_HEADERS",
            "type": "number",
            "format": ""
        },
        {
            "name": "FETCH_SAME_SIGNATURE",
            "baseName": "FETCH_SAME_SIGNATURE",
            "type": "CatalogsFeedValidationWarningsFETCHSAMESIGNATUREEnum",
            "format": ""
        },
        {
            "name": "ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG",
            "baseName": "ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG",
            "type": "number",
            "format": ""
        },
        {
            "name": "ADDITIONAL_IMAGE_LINK_WARNING",
            "baseName": "ADDITIONAL_IMAGE_LINK_WARNING",
            "type": "number",
            "format": ""
        },
        {
            "name": "IMAGE_LINK_WARNING",
            "baseName": "IMAGE_LINK_WARNING",
            "type": "number",
            "format": ""
        },
        {
            "name": "SHIPPING_INVALID",
            "baseName": "SHIPPING_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "TAX_INVALID",
            "baseName": "TAX_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "SHIPPING_WEIGHT_INVALID",
            "baseName": "SHIPPING_WEIGHT_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "EXPIRATION_DATE_INVALID",
            "baseName": "EXPIRATION_DATE_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "AVAILABILITY_DATE_INVALID",
            "baseName": "AVAILABILITY_DATE_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "SALE_DATE_INVALID",
            "baseName": "SALE_DATE_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "WEIGHT_UNIT_INVALID",
            "baseName": "WEIGHT_UNIT_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "IS_BUNDLE_INVALID",
            "baseName": "IS_BUNDLE_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "UPDATED_TIME_INVALID",
            "baseName": "UPDATED_TIME_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "CUSTOM_LABEL_LENGTH_TOO_LONG",
            "baseName": "CUSTOM_LABEL_LENGTH_TOO_LONG",
            "type": "number",
            "format": ""
        },
        {
            "name": "PRODUCT_TYPE_LENGTH_TOO_LONG",
            "baseName": "PRODUCT_TYPE_LENGTH_TOO_LONG",
            "type": "number",
            "format": ""
        },
        {
            "name": "TOO_MANY_ADDITIONAL_IMAGE_LINKS",
            "baseName": "TOO_MANY_ADDITIONAL_IMAGE_LINKS",
            "type": "number",
            "format": ""
        },
        {
            "name": "MULTIPACK_INVALID",
            "baseName": "MULTIPACK_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "INDEXED_PRODUCT_COUNT_LARGE_DELTA",
            "baseName": "INDEXED_PRODUCT_COUNT_LARGE_DELTA",
            "type": "number",
            "format": ""
        },
        {
            "name": "ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE",
            "baseName": "ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE",
            "type": "number",
            "format": ""
        },
        {
            "name": "OPTIONAL_PRODUCT_CATEGORY_MISSING",
            "baseName": "OPTIONAL_PRODUCT_CATEGORY_MISSING",
            "type": "number",
            "format": ""
        },
        {
            "name": "OPTIONAL_PRODUCT_CATEGORY_INVALID",
            "baseName": "OPTIONAL_PRODUCT_CATEGORY_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "OPTIONAL_CONDITION_MISSING",
            "baseName": "OPTIONAL_CONDITION_MISSING",
            "type": "number",
            "format": ""
        },
        {
            "name": "OPTIONAL_CONDITION_INVALID",
            "baseName": "OPTIONAL_CONDITION_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "IOS_DEEP_LINK_INVALID",
            "baseName": "IOS_DEEP_LINK_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "ANDROID_DEEP_LINK_INVALID",
            "baseName": "ANDROID_DEEP_LINK_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "UTM_SOURCE_AUTO_CORRECTED",
            "baseName": "UTM_SOURCE_AUTO_CORRECTED",
            "type": "number",
            "format": ""
        },
        {
            "name": "COUNTRY_DOES_NOT_MAP_TO_CURRENCY",
            "baseName": "COUNTRY_DOES_NOT_MAP_TO_CURRENCY",
            "type": "number",
            "format": ""
        },
        {
            "name": "MIN_AD_PRICE_INVALID",
            "baseName": "MIN_AD_PRICE_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "GTIN_INVALID",
            "baseName": "GTIN_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "INCONSISTENT_CURRENCY_VALUES",
            "baseName": "INCONSISTENT_CURRENCY_VALUES",
            "type": "number",
            "format": ""
        },
        {
            "name": "SALES_PRICE_TOO_LOW",
            "baseName": "SALES_PRICE_TOO_LOW",
            "type": "number",
            "format": ""
        },
        {
            "name": "SHIPPING_WIDTH_INVALID",
            "baseName": "SHIPPING_WIDTH_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "SHIPPING_HEIGHT_INVALID",
            "baseName": "SHIPPING_HEIGHT_INVALID",
            "type": "number",
            "format": ""
        },
        {
            "name": "SALES_PRICE_TOO_HIGH",
            "baseName": "SALES_PRICE_TOO_HIGH",
            "type": "number",
            "format": ""
        },
        {
            "name": "MPN_INVALID",
            "baseName": "MPN_INVALID",
            "type": "number",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return CatalogsFeedValidationWarnings.attributeTypeMap;
    }

    public constructor() {
    }
}


export enum CatalogsFeedValidationWarningsFETCHSAMESIGNATUREEnum {
    NUMBER_1 = 1
}

