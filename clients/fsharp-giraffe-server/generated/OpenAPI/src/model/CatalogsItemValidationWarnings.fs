namespace OpenAPI.Model

open System
open System.Collections.Generic
open OpenAPI.Model.CatalogsItemValidationDetails

module CatalogsItemValidationWarnings =

  //#region CatalogsItemValidationWarnings


  type CatalogsItemValidationWarnings = {
    AD_LINK_FORMAT_WARNING : CatalogsItemValidationDetails;
    AD_LINK_SAME_AS_LINK : CatalogsItemValidationDetails;
    ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG : CatalogsItemValidationDetails;
    ADDITIONAL_IMAGE_LINK_WARNING : CatalogsItemValidationDetails;
    ADWORDS_FORMAT_WARNING : CatalogsItemValidationDetails;
    ADWORDS_SAME_AS_LINK : CatalogsItemValidationDetails;
    AGE_GROUP_INVALID : CatalogsItemValidationDetails;
    SIZE_SYSTEM_INVALID : CatalogsItemValidationDetails;
    ANDROID_DEEP_LINK_INVALID : CatalogsItemValidationDetails;
    AVAILABILITY_DATE_INVALID : CatalogsItemValidationDetails;
    COUNTRY_DOES_NOT_MAP_TO_CURRENCY : CatalogsItemValidationDetails;
    CUSTOM_LABEL_LENGTH_TOO_LONG : CatalogsItemValidationDetails;
    DESCRIPTION_LENGTH_TOO_LONG : CatalogsItemValidationDetails;
    EXPIRATION_DATE_INVALID : CatalogsItemValidationDetails;
    GENDER_INVALID : CatalogsItemValidationDetails;
    GTIN_INVALID : CatalogsItemValidationDetails;
    IMAGE_LINK_WARNING : CatalogsItemValidationDetails;
    IOS_DEEP_LINK_INVALID : CatalogsItemValidationDetails;
    IS_BUNDLE_INVALID : CatalogsItemValidationDetails;
    ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE : CatalogsItemValidationDetails;
    LINK_FORMAT_WARNING : CatalogsItemValidationDetails;
    MIN_AD_PRICE_INVALID : CatalogsItemValidationDetails;
    MPN_INVALID : CatalogsItemValidationDetails;
    MULTIPACK_INVALID : CatalogsItemValidationDetails;
    OPTIONAL_CONDITION_INVALID : CatalogsItemValidationDetails;
    OPTIONAL_CONDITION_MISSING : CatalogsItemValidationDetails;
    OPTIONAL_PRODUCT_CATEGORY_INVALID : CatalogsItemValidationDetails;
    OPTIONAL_PRODUCT_CATEGORY_MISSING : CatalogsItemValidationDetails;
    PRODUCT_CATEGORY_DEPTH_WARNING : CatalogsItemValidationDetails;
    PRODUCT_TYPE_LENGTH_TOO_LONG : CatalogsItemValidationDetails;
    SALES_PRICE_INVALID : CatalogsItemValidationDetails;
    SALES_PRICE_TOO_LOW : CatalogsItemValidationDetails;
    SALES_PRICE_TOO_HIGH : CatalogsItemValidationDetails;
    SALE_DATE_INVALID : CatalogsItemValidationDetails;
    SHIPPING_INVALID : CatalogsItemValidationDetails;
    SHIPPING_HEIGHT_INVALID : CatalogsItemValidationDetails;
    SHIPPING_WEIGHT_INVALID : CatalogsItemValidationDetails;
    SHIPPING_WIDTH_INVALID : CatalogsItemValidationDetails;
    SIZE_TYPE_INVALID : CatalogsItemValidationDetails;
    TAX_INVALID : CatalogsItemValidationDetails;
    TITLE_LENGTH_TOO_LONG : CatalogsItemValidationDetails;
    TOO_MANY_ADDITIONAL_IMAGE_LINKS : CatalogsItemValidationDetails;
    UTM_SOURCE_AUTO_CORRECTED : CatalogsItemValidationDetails;
    WEIGHT_UNIT_INVALID : CatalogsItemValidationDetails;
  }
  //#endregion
