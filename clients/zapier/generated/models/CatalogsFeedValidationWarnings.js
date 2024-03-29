const utils = require('../utils/utils');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            {
                key: `${keyPrefix}AD_LINK_FORMAT_WARNING`,
                label: `Some items have ad links that are formatted incorrectly. - [${labelPrefix}AD_LINK_FORMAT_WARNING]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}AD_LINK_SAME_AS_LINK`,
                label: `Some items have ad link URLs that are duplicates of the link URLs for those items. - [${labelPrefix}AD_LINK_SAME_AS_LINK]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}TITLE_LENGTH_TOO_LONG`,
                label: `The title for some items were truncated because they contain too many characters. - [${labelPrefix}TITLE_LENGTH_TOO_LONG]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}DESCRIPTION_LENGTH_TOO_LONG`,
                label: `The description for some items were truncated because they contain too many characters. - [${labelPrefix}DESCRIPTION_LENGTH_TOO_LONG]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}GENDER_INVALID`,
                label: `Some items have gender values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. - [${labelPrefix}GENDER_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}AGE_GROUP_INVALID`,
                label: `Some items have age group values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. - [${labelPrefix}AGE_GROUP_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SIZE_TYPE_INVALID`,
                label: `Some items have size type values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. - [${labelPrefix}SIZE_TYPE_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SIZE_SYSTEM_INVALID`,
                label: `Some items have size system values which are not one of the supported size systems. - [${labelPrefix}SIZE_SYSTEM_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}LINK_FORMAT_WARNING`,
                label: `Some items have an invalid product link which contains invalid UTM tracking paramaters. - [${labelPrefix}LINK_FORMAT_WARNING]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SALES_PRICE_INVALID`,
                label: `Some items have sale price values that are higher than the original price of the item. - [${labelPrefix}SALES_PRICE_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}PRODUCT_CATEGORY_DEPTH_WARNING`,
                label: `Some items only have 1 or 2 levels of google_product_category values, which may limit visibility in recommendations, search results and shopping experiences. - [${labelPrefix}PRODUCT_CATEGORY_DEPTH_WARNING]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ADWORDS_FORMAT_WARNING`,
                label: `Some items have adwords_redirect links that are formatted incorrectly. - [${labelPrefix}ADWORDS_FORMAT_WARNING]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ADWORDS_SAME_AS_LINK`,
                label: `Some items have adwords_redirect URLs that are duplicates of the link URLs for those items. - [${labelPrefix}ADWORDS_SAME_AS_LINK]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}DUPLICATE_HEADERS`,
                label: `Your feed contains duplicate headers. - [${labelPrefix}DUPLICATE_HEADERS]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}FETCH_SAME_SIGNATURE`,
                label: `Ingestion completed early because there are no changes to your feed since the last successful update. - [${labelPrefix}FETCH_SAME_SIGNATURE]`,
                type: 'integer',
                choices: [
                    '1',
                ],
            },
            {
                key: `${keyPrefix}ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG`,
                label: `Some items have additional_image_link URLs that contain too many characters, so those items will not be published. - [${labelPrefix}ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ADDITIONAL_IMAGE_LINK_WARNING`,
                label: `Some items have additional_image_link URLs that are formatted incorrectly and will not be published with your items. - [${labelPrefix}ADDITIONAL_IMAGE_LINK_WARNING]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}IMAGE_LINK_WARNING`,
                label: `Some items have image_link URLs that are formatted incorrectly and will not be published with those items. - [${labelPrefix}IMAGE_LINK_WARNING]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SHIPPING_INVALID`,
                label: `Some items have shipping values that are formatted incorrectly. - [${labelPrefix}SHIPPING_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}TAX_INVALID`,
                label: `Some items have tax values that are formatted incorrectly. - [${labelPrefix}TAX_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SHIPPING_WEIGHT_INVALID`,
                label: `Some items have invalid shipping_weight values. - [${labelPrefix}SHIPPING_WEIGHT_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}EXPIRATION_DATE_INVALID`,
                label: `Some items have expiration_date values that are formatted incorrectly, those items will be published without an expiration date. - [${labelPrefix}EXPIRATION_DATE_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}AVAILABILITY_DATE_INVALID`,
                label: `Some items have availability_date values that are formatted incorrectly, those items will be published without an availability date. - [${labelPrefix}AVAILABILITY_DATE_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SALE_DATE_INVALID`,
                label: `Some items have sale_price_effective_date values that are formatted incorrectly, those items will be published without a sale date. - [${labelPrefix}SALE_DATE_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}WEIGHT_UNIT_INVALID`,
                label: `Some items have weight_unit values that are formatted incorrectly, those items will be published without a weight unit. - [${labelPrefix}WEIGHT_UNIT_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}IS_BUNDLE_INVALID`,
                label: `Some items have is_bundle values that are formatted incorrectly, those items will be published without being bundled with other products. - [${labelPrefix}IS_BUNDLE_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}UPDATED_TIME_INVALID`,
                label: `Some items have updated_time values thate are formatted incorrectly, those items will be published without an updated time. - [${labelPrefix}UPDATED_TIME_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}CUSTOM_LABEL_LENGTH_TOO_LONG`,
                label: `Some items have custom_label values that are too long, those items will be published without that custom label. - [${labelPrefix}CUSTOM_LABEL_LENGTH_TOO_LONG]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}PRODUCT_TYPE_LENGTH_TOO_LONG`,
                label: `Some items have product_type values that are too long, those items will be published without that product type. - [${labelPrefix}PRODUCT_TYPE_LENGTH_TOO_LONG]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}TOO_MANY_ADDITIONAL_IMAGE_LINKS`,
                label: `Some items have additional_image_link values that exceed the limit for additional images, those items will be published without some of your images. - [${labelPrefix}TOO_MANY_ADDITIONAL_IMAGE_LINKS]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}MULTIPACK_INVALID`,
                label: `Some items have invalid multipack values. - [${labelPrefix}MULTIPACK_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}INDEXED_PRODUCT_COUNT_LARGE_DELTA`,
                label: `The product count has increased or decreased significantly compared to the last successful ingestion. - [${labelPrefix}INDEXED_PRODUCT_COUNT_LARGE_DELTA]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE`,
                label: `Some items include additional_image_links that can't be found. - [${labelPrefix}ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}OPTIONAL_PRODUCT_CATEGORY_MISSING`,
                label: `Some items are missing a google_product_category. - [${labelPrefix}OPTIONAL_PRODUCT_CATEGORY_MISSING]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}OPTIONAL_PRODUCT_CATEGORY_INVALID`,
                label: `Some items include google_product_category values that are not formatted correctly according to the GPC taxonomy. - [${labelPrefix}OPTIONAL_PRODUCT_CATEGORY_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}OPTIONAL_CONDITION_MISSING`,
                label: `Some items are missing a condition value, which may limit visibility in recommendations, search results and shopping experiences. - [${labelPrefix}OPTIONAL_CONDITION_MISSING]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}OPTIONAL_CONDITION_INVALID`,
                label: `Some items include condition values that are formatted incorrectly, which may limit visibility in recommendations, search results and shopping experiences. - [${labelPrefix}OPTIONAL_CONDITION_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}IOS_DEEP_LINK_INVALID`,
                label: `Some items include invalid ios_deep_link values. - [${labelPrefix}IOS_DEEP_LINK_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}ANDROID_DEEP_LINK_INVALID`,
                label: `Some items include invalid android_deep_link. - [${labelPrefix}ANDROID_DEEP_LINK_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}UTM_SOURCE_AUTO_CORRECTED`,
                label: `Some items include utm_source values that are formatted incorrectly and have been automatically corrected. - [${labelPrefix}UTM_SOURCE_AUTO_CORRECTED]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}COUNTRY_DOES_NOT_MAP_TO_CURRENCY`,
                label: `Some items include a currency that doesn't match the usual currency for the location where that product is sold or shipped. - [${labelPrefix}COUNTRY_DOES_NOT_MAP_TO_CURRENCY]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}MIN_AD_PRICE_INVALID`,
                label: `Some items include min_ad_price values that are formatted incorrectly. - [${labelPrefix}MIN_AD_PRICE_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}GTIN_INVALID`,
                label: `Some items include incorrectly formatted GTINs. - [${labelPrefix}GTIN_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}INCONSISTENT_CURRENCY_VALUES`,
                label: `Some items include inconsistent currencies in price fields. - [${labelPrefix}INCONSISTENT_CURRENCY_VALUES]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SALES_PRICE_TOO_LOW`,
                label: `Some items include sales price that is much lower than the list price. - [${labelPrefix}SALES_PRICE_TOO_LOW]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SHIPPING_WIDTH_INVALID`,
                label: `Some items include incorrectly formatted shipping_width. - [${labelPrefix}SHIPPING_WIDTH_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SHIPPING_HEIGHT_INVALID`,
                label: `Some items include incorrectly formatted shipping_height. - [${labelPrefix}SHIPPING_HEIGHT_INVALID]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}SALES_PRICE_TOO_HIGH`,
                label: `Some items include a sales price that is higher than the list price. The sales price has been defaulted to the list price. - [${labelPrefix}SALES_PRICE_TOO_HIGH]`,
                type: 'integer',
            },
            {
                key: `${keyPrefix}MPN_INVALID`,
                label: `Some items include incorrectly formatted MPNs. - [${labelPrefix}MPN_INVALID]`,
                type: 'integer',
            },
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'AD_LINK_FORMAT_WARNING': bundle.inputData?.[`${keyPrefix}AD_LINK_FORMAT_WARNING`],
            'AD_LINK_SAME_AS_LINK': bundle.inputData?.[`${keyPrefix}AD_LINK_SAME_AS_LINK`],
            'TITLE_LENGTH_TOO_LONG': bundle.inputData?.[`${keyPrefix}TITLE_LENGTH_TOO_LONG`],
            'DESCRIPTION_LENGTH_TOO_LONG': bundle.inputData?.[`${keyPrefix}DESCRIPTION_LENGTH_TOO_LONG`],
            'GENDER_INVALID': bundle.inputData?.[`${keyPrefix}GENDER_INVALID`],
            'AGE_GROUP_INVALID': bundle.inputData?.[`${keyPrefix}AGE_GROUP_INVALID`],
            'SIZE_TYPE_INVALID': bundle.inputData?.[`${keyPrefix}SIZE_TYPE_INVALID`],
            'SIZE_SYSTEM_INVALID': bundle.inputData?.[`${keyPrefix}SIZE_SYSTEM_INVALID`],
            'LINK_FORMAT_WARNING': bundle.inputData?.[`${keyPrefix}LINK_FORMAT_WARNING`],
            'SALES_PRICE_INVALID': bundle.inputData?.[`${keyPrefix}SALES_PRICE_INVALID`],
            'PRODUCT_CATEGORY_DEPTH_WARNING': bundle.inputData?.[`${keyPrefix}PRODUCT_CATEGORY_DEPTH_WARNING`],
            'ADWORDS_FORMAT_WARNING': bundle.inputData?.[`${keyPrefix}ADWORDS_FORMAT_WARNING`],
            'ADWORDS_SAME_AS_LINK': bundle.inputData?.[`${keyPrefix}ADWORDS_SAME_AS_LINK`],
            'DUPLICATE_HEADERS': bundle.inputData?.[`${keyPrefix}DUPLICATE_HEADERS`],
            'FETCH_SAME_SIGNATURE': bundle.inputData?.[`${keyPrefix}FETCH_SAME_SIGNATURE`],
            'ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG': bundle.inputData?.[`${keyPrefix}ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG`],
            'ADDITIONAL_IMAGE_LINK_WARNING': bundle.inputData?.[`${keyPrefix}ADDITIONAL_IMAGE_LINK_WARNING`],
            'IMAGE_LINK_WARNING': bundle.inputData?.[`${keyPrefix}IMAGE_LINK_WARNING`],
            'SHIPPING_INVALID': bundle.inputData?.[`${keyPrefix}SHIPPING_INVALID`],
            'TAX_INVALID': bundle.inputData?.[`${keyPrefix}TAX_INVALID`],
            'SHIPPING_WEIGHT_INVALID': bundle.inputData?.[`${keyPrefix}SHIPPING_WEIGHT_INVALID`],
            'EXPIRATION_DATE_INVALID': bundle.inputData?.[`${keyPrefix}EXPIRATION_DATE_INVALID`],
            'AVAILABILITY_DATE_INVALID': bundle.inputData?.[`${keyPrefix}AVAILABILITY_DATE_INVALID`],
            'SALE_DATE_INVALID': bundle.inputData?.[`${keyPrefix}SALE_DATE_INVALID`],
            'WEIGHT_UNIT_INVALID': bundle.inputData?.[`${keyPrefix}WEIGHT_UNIT_INVALID`],
            'IS_BUNDLE_INVALID': bundle.inputData?.[`${keyPrefix}IS_BUNDLE_INVALID`],
            'UPDATED_TIME_INVALID': bundle.inputData?.[`${keyPrefix}UPDATED_TIME_INVALID`],
            'CUSTOM_LABEL_LENGTH_TOO_LONG': bundle.inputData?.[`${keyPrefix}CUSTOM_LABEL_LENGTH_TOO_LONG`],
            'PRODUCT_TYPE_LENGTH_TOO_LONG': bundle.inputData?.[`${keyPrefix}PRODUCT_TYPE_LENGTH_TOO_LONG`],
            'TOO_MANY_ADDITIONAL_IMAGE_LINKS': bundle.inputData?.[`${keyPrefix}TOO_MANY_ADDITIONAL_IMAGE_LINKS`],
            'MULTIPACK_INVALID': bundle.inputData?.[`${keyPrefix}MULTIPACK_INVALID`],
            'INDEXED_PRODUCT_COUNT_LARGE_DELTA': bundle.inputData?.[`${keyPrefix}INDEXED_PRODUCT_COUNT_LARGE_DELTA`],
            'ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE': bundle.inputData?.[`${keyPrefix}ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE`],
            'OPTIONAL_PRODUCT_CATEGORY_MISSING': bundle.inputData?.[`${keyPrefix}OPTIONAL_PRODUCT_CATEGORY_MISSING`],
            'OPTIONAL_PRODUCT_CATEGORY_INVALID': bundle.inputData?.[`${keyPrefix}OPTIONAL_PRODUCT_CATEGORY_INVALID`],
            'OPTIONAL_CONDITION_MISSING': bundle.inputData?.[`${keyPrefix}OPTIONAL_CONDITION_MISSING`],
            'OPTIONAL_CONDITION_INVALID': bundle.inputData?.[`${keyPrefix}OPTIONAL_CONDITION_INVALID`],
            'IOS_DEEP_LINK_INVALID': bundle.inputData?.[`${keyPrefix}IOS_DEEP_LINK_INVALID`],
            'ANDROID_DEEP_LINK_INVALID': bundle.inputData?.[`${keyPrefix}ANDROID_DEEP_LINK_INVALID`],
            'UTM_SOURCE_AUTO_CORRECTED': bundle.inputData?.[`${keyPrefix}UTM_SOURCE_AUTO_CORRECTED`],
            'COUNTRY_DOES_NOT_MAP_TO_CURRENCY': bundle.inputData?.[`${keyPrefix}COUNTRY_DOES_NOT_MAP_TO_CURRENCY`],
            'MIN_AD_PRICE_INVALID': bundle.inputData?.[`${keyPrefix}MIN_AD_PRICE_INVALID`],
            'GTIN_INVALID': bundle.inputData?.[`${keyPrefix}GTIN_INVALID`],
            'INCONSISTENT_CURRENCY_VALUES': bundle.inputData?.[`${keyPrefix}INCONSISTENT_CURRENCY_VALUES`],
            'SALES_PRICE_TOO_LOW': bundle.inputData?.[`${keyPrefix}SALES_PRICE_TOO_LOW`],
            'SHIPPING_WIDTH_INVALID': bundle.inputData?.[`${keyPrefix}SHIPPING_WIDTH_INVALID`],
            'SHIPPING_HEIGHT_INVALID': bundle.inputData?.[`${keyPrefix}SHIPPING_HEIGHT_INVALID`],
            'SALES_PRICE_TOO_HIGH': bundle.inputData?.[`${keyPrefix}SALES_PRICE_TOO_HIGH`],
            'MPN_INVALID': bundle.inputData?.[`${keyPrefix}MPN_INVALID`],
        }
    },
}
