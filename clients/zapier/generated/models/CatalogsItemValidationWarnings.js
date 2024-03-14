const utils = require('../utils/utils');
const CatalogsItemValidationDetails = require('../models/CatalogsItemValidationDetails');

module.exports = {
    fields: (prefix = '', isInput = true, isArrayChild = false) => {
        const {keyPrefix, labelPrefix} = utils.buildKeyAndLabel(prefix, isInput, isArrayChild)
        return [
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}ADDITIONAL_IMAGE_LINK_WARNING`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}ADWORDS_FORMAT_WARNING`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}ADWORDS_SAME_AS_LINK`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}AGE_GROUP_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SIZE_SYSTEM_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}AGE_GROUP_NORMALIZED`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}ANDROID_DEEP_LINK_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}AVAILABILITY_DATE_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}AVAILABILITY_NORMALIZED`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}CONDITION_NORMALIZED`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}COUNTRY_DOES_NOT_MAP_TO_CURRENCY`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}CUSTOM_LABEL_LENGTH_TOO_LONG`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}DESCRIPTION_LENGTH_TOO_LONG`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}DUPLICATE_PRODUCTS`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}EXPIRATION_DATE_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}GENDER_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}GENDER_NORMALIZED`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}GTIN_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}IMAGE_LINK_WARNING`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}IOS_DEEP_LINK_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}IS_BUNDLE_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}LINK_FORMAT_WARNING`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}MIN_AD_PRICE_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}MPN_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}MULTIPACK_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}OPTIONAL_CONDITION_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}OPTIONAL_CONDITION_MISSING`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}OPTIONAL_PRODUCT_CATEGORY_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}OPTIONAL_PRODUCT_CATEGORY_MISSING`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}PRODUCT_CATEGORY_DEPTH_WARNING`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}PRODUCT_TYPE_LENGTH_TOO_LONG`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SALES_PRICE_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SALES_PRICE_TOO_LOW`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SALES_PRICE_TOO_HIGH`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SALE_DATE_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SHIPPING_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SHIPPING_HEIGHT_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SHIPPING_WEIGHT_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SHIPPING_WIDTH_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SIZE_TYPE_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}SIZE_TYPE_NORMALIZED`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}TAX_INVALID`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}TITLE_LENGTH_TOO_LONG`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}TOO_MANY_ADDITIONAL_IMAGE_LINKS`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}UTM_SOURCE_AUTO_CORRECTED`, isInput),
            ...CatalogsItemValidationDetails.fields(`${keyPrefix}WEIGHT_UNIT_INVALID`, isInput),
        ]
    },
    mapping: (bundle, prefix = '') => {
        const {keyPrefix} = utils.buildKeyAndLabel(prefix)
        return {
            'ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG`)),
            'ADDITIONAL_IMAGE_LINK_WARNING': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}ADDITIONAL_IMAGE_LINK_WARNING`)),
            'ADWORDS_FORMAT_WARNING': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}ADWORDS_FORMAT_WARNING`)),
            'ADWORDS_SAME_AS_LINK': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}ADWORDS_SAME_AS_LINK`)),
            'AGE_GROUP_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}AGE_GROUP_INVALID`)),
            'SIZE_SYSTEM_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SIZE_SYSTEM_INVALID`)),
            'AGE_GROUP_NORMALIZED': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}AGE_GROUP_NORMALIZED`)),
            'ANDROID_DEEP_LINK_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}ANDROID_DEEP_LINK_INVALID`)),
            'AVAILABILITY_DATE_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}AVAILABILITY_DATE_INVALID`)),
            'AVAILABILITY_NORMALIZED': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}AVAILABILITY_NORMALIZED`)),
            'CONDITION_NORMALIZED': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}CONDITION_NORMALIZED`)),
            'COUNTRY_DOES_NOT_MAP_TO_CURRENCY': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}COUNTRY_DOES_NOT_MAP_TO_CURRENCY`)),
            'CUSTOM_LABEL_LENGTH_TOO_LONG': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}CUSTOM_LABEL_LENGTH_TOO_LONG`)),
            'DESCRIPTION_LENGTH_TOO_LONG': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}DESCRIPTION_LENGTH_TOO_LONG`)),
            'DUPLICATE_PRODUCTS': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}DUPLICATE_PRODUCTS`)),
            'EXPIRATION_DATE_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}EXPIRATION_DATE_INVALID`)),
            'GENDER_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}GENDER_INVALID`)),
            'GENDER_NORMALIZED': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}GENDER_NORMALIZED`)),
            'GTIN_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}GTIN_INVALID`)),
            'IMAGE_LINK_WARNING': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}IMAGE_LINK_WARNING`)),
            'IOS_DEEP_LINK_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}IOS_DEEP_LINK_INVALID`)),
            'IS_BUNDLE_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}IS_BUNDLE_INVALID`)),
            'ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE`)),
            'LINK_FORMAT_WARNING': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}LINK_FORMAT_WARNING`)),
            'MIN_AD_PRICE_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}MIN_AD_PRICE_INVALID`)),
            'MPN_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}MPN_INVALID`)),
            'MULTIPACK_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}MULTIPACK_INVALID`)),
            'OPTIONAL_CONDITION_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}OPTIONAL_CONDITION_INVALID`)),
            'OPTIONAL_CONDITION_MISSING': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}OPTIONAL_CONDITION_MISSING`)),
            'OPTIONAL_PRODUCT_CATEGORY_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}OPTIONAL_PRODUCT_CATEGORY_INVALID`)),
            'OPTIONAL_PRODUCT_CATEGORY_MISSING': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}OPTIONAL_PRODUCT_CATEGORY_MISSING`)),
            'PRODUCT_CATEGORY_DEPTH_WARNING': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}PRODUCT_CATEGORY_DEPTH_WARNING`)),
            'PRODUCT_TYPE_LENGTH_TOO_LONG': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}PRODUCT_TYPE_LENGTH_TOO_LONG`)),
            'SALES_PRICE_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SALES_PRICE_INVALID`)),
            'SALES_PRICE_TOO_LOW': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SALES_PRICE_TOO_LOW`)),
            'SALES_PRICE_TOO_HIGH': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SALES_PRICE_TOO_HIGH`)),
            'SALE_DATE_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SALE_DATE_INVALID`)),
            'SHIPPING_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SHIPPING_INVALID`)),
            'SHIPPING_HEIGHT_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SHIPPING_HEIGHT_INVALID`)),
            'SHIPPING_WEIGHT_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SHIPPING_WEIGHT_INVALID`)),
            'SHIPPING_WIDTH_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SHIPPING_WIDTH_INVALID`)),
            'SIZE_TYPE_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SIZE_TYPE_INVALID`)),
            'SIZE_TYPE_NORMALIZED': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}SIZE_TYPE_NORMALIZED`)),
            'TAX_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}TAX_INVALID`)),
            'TITLE_LENGTH_TOO_LONG': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}TITLE_LENGTH_TOO_LONG`)),
            'TOO_MANY_ADDITIONAL_IMAGE_LINKS': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}TOO_MANY_ADDITIONAL_IMAGE_LINKS`)),
            'UTM_SOURCE_AUTO_CORRECTED': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}UTM_SOURCE_AUTO_CORRECTED`)),
            'WEIGHT_UNIT_INVALID': utils.removeIfEmpty(CatalogsItemValidationDetails.mapping(bundle, `${keyPrefix}WEIGHT_UNIT_INVALID`)),
        }
    },
}