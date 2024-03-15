-module(openapi_catalogs_feed_validation_warnings).

-export([encode/1]).

-export_type([openapi_catalogs_feed_validation_warnings/0]).

-type openapi_catalogs_feed_validation_warnings() ::
    #{ 'AD_LINK_FORMAT_WARNING' => integer(),
       'AD_LINK_SAME_AS_LINK' => integer(),
       'TITLE_LENGTH_TOO_LONG' => integer(),
       'DESCRIPTION_LENGTH_TOO_LONG' => integer(),
       'GENDER_INVALID' => integer(),
       'AGE_GROUP_INVALID' => integer(),
       'SIZE_TYPE_INVALID' => integer(),
       'SIZE_SYSTEM_INVALID' => integer(),
       'LINK_FORMAT_WARNING' => integer(),
       'SALES_PRICE_INVALID' => integer(),
       'PRODUCT_CATEGORY_DEPTH_WARNING' => integer(),
       'ADWORDS_FORMAT_WARNING' => integer(),
       'ADWORDS_SAME_AS_LINK' => integer(),
       'DUPLICATE_HEADERS' => integer(),
       'FETCH_SAME_SIGNATURE' => integer(),
       'ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG' => integer(),
       'ADDITIONAL_IMAGE_LINK_WARNING' => integer(),
       'IMAGE_LINK_WARNING' => integer(),
       'SHIPPING_INVALID' => integer(),
       'TAX_INVALID' => integer(),
       'SHIPPING_WEIGHT_INVALID' => integer(),
       'EXPIRATION_DATE_INVALID' => integer(),
       'AVAILABILITY_DATE_INVALID' => integer(),
       'SALE_DATE_INVALID' => integer(),
       'WEIGHT_UNIT_INVALID' => integer(),
       'IS_BUNDLE_INVALID' => integer(),
       'UPDATED_TIME_INVALID' => integer(),
       'CUSTOM_LABEL_LENGTH_TOO_LONG' => integer(),
       'PRODUCT_TYPE_LENGTH_TOO_LONG' => integer(),
       'TOO_MANY_ADDITIONAL_IMAGE_LINKS' => integer(),
       'MULTIPACK_INVALID' => integer(),
       'INDEXED_PRODUCT_COUNT_LARGE_DELTA' => integer(),
       'ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE' => integer(),
       'OPTIONAL_PRODUCT_CATEGORY_MISSING' => integer(),
       'OPTIONAL_PRODUCT_CATEGORY_INVALID' => integer(),
       'OPTIONAL_CONDITION_MISSING' => integer(),
       'OPTIONAL_CONDITION_INVALID' => integer(),
       'IOS_DEEP_LINK_INVALID' => integer(),
       'ANDROID_DEEP_LINK_INVALID' => integer(),
       'UTM_SOURCE_AUTO_CORRECTED' => integer(),
       'COUNTRY_DOES_NOT_MAP_TO_CURRENCY' => integer(),
       'MIN_AD_PRICE_INVALID' => integer(),
       'GTIN_INVALID' => integer(),
       'INCONSISTENT_CURRENCY_VALUES' => integer(),
       'SALES_PRICE_TOO_LOW' => integer(),
       'SHIPPING_WIDTH_INVALID' => integer(),
       'SHIPPING_HEIGHT_INVALID' => integer(),
       'SALES_PRICE_TOO_HIGH' => integer(),
       'MPN_INVALID' => integer()
     }.

encode(#{ 'AD_LINK_FORMAT_WARNING' := ADLINKFORMATWARNING,
          'AD_LINK_SAME_AS_LINK' := ADLINKSAMEASLINK,
          'TITLE_LENGTH_TOO_LONG' := TITLELENGTHTOOLONG,
          'DESCRIPTION_LENGTH_TOO_LONG' := DESCRIPTIONLENGTHTOOLONG,
          'GENDER_INVALID' := GENDERINVALID,
          'AGE_GROUP_INVALID' := AGEGROUPINVALID,
          'SIZE_TYPE_INVALID' := SIZETYPEINVALID,
          'SIZE_SYSTEM_INVALID' := SIZESYSTEMINVALID,
          'LINK_FORMAT_WARNING' := LINKFORMATWARNING,
          'SALES_PRICE_INVALID' := SALESPRICEINVALID,
          'PRODUCT_CATEGORY_DEPTH_WARNING' := PRODUCTCATEGORYDEPTHWARNING,
          'ADWORDS_FORMAT_WARNING' := ADWORDSFORMATWARNING,
          'ADWORDS_SAME_AS_LINK' := ADWORDSSAMEASLINK,
          'DUPLICATE_HEADERS' := DUPLICATEHEADERS,
          'FETCH_SAME_SIGNATURE' := FETCHSAMESIGNATURE,
          'ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG' := ADDITIONALIMAGELINKLENGTHTOOLONG,
          'ADDITIONAL_IMAGE_LINK_WARNING' := ADDITIONALIMAGELINKWARNING,
          'IMAGE_LINK_WARNING' := IMAGELINKWARNING,
          'SHIPPING_INVALID' := SHIPPINGINVALID,
          'TAX_INVALID' := TAXINVALID,
          'SHIPPING_WEIGHT_INVALID' := SHIPPINGWEIGHTINVALID,
          'EXPIRATION_DATE_INVALID' := EXPIRATIONDATEINVALID,
          'AVAILABILITY_DATE_INVALID' := AVAILABILITYDATEINVALID,
          'SALE_DATE_INVALID' := SALEDATEINVALID,
          'WEIGHT_UNIT_INVALID' := WEIGHTUNITINVALID,
          'IS_BUNDLE_INVALID' := ISBUNDLEINVALID,
          'UPDATED_TIME_INVALID' := UPDATEDTIMEINVALID,
          'CUSTOM_LABEL_LENGTH_TOO_LONG' := CUSTOMLABELLENGTHTOOLONG,
          'PRODUCT_TYPE_LENGTH_TOO_LONG' := PRODUCTTYPELENGTHTOOLONG,
          'TOO_MANY_ADDITIONAL_IMAGE_LINKS' := TOOMANYADDITIONALIMAGELINKS,
          'MULTIPACK_INVALID' := MULTIPACKINVALID,
          'INDEXED_PRODUCT_COUNT_LARGE_DELTA' := INDEXEDPRODUCTCOUNTLARGEDELTA,
          'ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE' := ITEMADDITIONALIMAGEDOWNLOADFAILURE,
          'OPTIONAL_PRODUCT_CATEGORY_MISSING' := OPTIONALPRODUCTCATEGORYMISSING,
          'OPTIONAL_PRODUCT_CATEGORY_INVALID' := OPTIONALPRODUCTCATEGORYINVALID,
          'OPTIONAL_CONDITION_MISSING' := OPTIONALCONDITIONMISSING,
          'OPTIONAL_CONDITION_INVALID' := OPTIONALCONDITIONINVALID,
          'IOS_DEEP_LINK_INVALID' := IOSDEEPLINKINVALID,
          'ANDROID_DEEP_LINK_INVALID' := ANDROIDDEEPLINKINVALID,
          'UTM_SOURCE_AUTO_CORRECTED' := UTMSOURCEAUTOCORRECTED,
          'COUNTRY_DOES_NOT_MAP_TO_CURRENCY' := COUNTRYDOESNOTMAPTOCURRENCY,
          'MIN_AD_PRICE_INVALID' := MINADPRICEINVALID,
          'GTIN_INVALID' := GTININVALID,
          'INCONSISTENT_CURRENCY_VALUES' := INCONSISTENTCURRENCYVALUES,
          'SALES_PRICE_TOO_LOW' := SALESPRICETOOLOW,
          'SHIPPING_WIDTH_INVALID' := SHIPPINGWIDTHINVALID,
          'SHIPPING_HEIGHT_INVALID' := SHIPPINGHEIGHTINVALID,
          'SALES_PRICE_TOO_HIGH' := SALESPRICETOOHIGH,
          'MPN_INVALID' := MPNINVALID
        }) ->
    #{ 'AD_LINK_FORMAT_WARNING' => ADLINKFORMATWARNING,
       'AD_LINK_SAME_AS_LINK' => ADLINKSAMEASLINK,
       'TITLE_LENGTH_TOO_LONG' => TITLELENGTHTOOLONG,
       'DESCRIPTION_LENGTH_TOO_LONG' => DESCRIPTIONLENGTHTOOLONG,
       'GENDER_INVALID' => GENDERINVALID,
       'AGE_GROUP_INVALID' => AGEGROUPINVALID,
       'SIZE_TYPE_INVALID' => SIZETYPEINVALID,
       'SIZE_SYSTEM_INVALID' => SIZESYSTEMINVALID,
       'LINK_FORMAT_WARNING' => LINKFORMATWARNING,
       'SALES_PRICE_INVALID' => SALESPRICEINVALID,
       'PRODUCT_CATEGORY_DEPTH_WARNING' => PRODUCTCATEGORYDEPTHWARNING,
       'ADWORDS_FORMAT_WARNING' => ADWORDSFORMATWARNING,
       'ADWORDS_SAME_AS_LINK' => ADWORDSSAMEASLINK,
       'DUPLICATE_HEADERS' => DUPLICATEHEADERS,
       'FETCH_SAME_SIGNATURE' => FETCHSAMESIGNATURE,
       'ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG' => ADDITIONALIMAGELINKLENGTHTOOLONG,
       'ADDITIONAL_IMAGE_LINK_WARNING' => ADDITIONALIMAGELINKWARNING,
       'IMAGE_LINK_WARNING' => IMAGELINKWARNING,
       'SHIPPING_INVALID' => SHIPPINGINVALID,
       'TAX_INVALID' => TAXINVALID,
       'SHIPPING_WEIGHT_INVALID' => SHIPPINGWEIGHTINVALID,
       'EXPIRATION_DATE_INVALID' => EXPIRATIONDATEINVALID,
       'AVAILABILITY_DATE_INVALID' => AVAILABILITYDATEINVALID,
       'SALE_DATE_INVALID' => SALEDATEINVALID,
       'WEIGHT_UNIT_INVALID' => WEIGHTUNITINVALID,
       'IS_BUNDLE_INVALID' => ISBUNDLEINVALID,
       'UPDATED_TIME_INVALID' => UPDATEDTIMEINVALID,
       'CUSTOM_LABEL_LENGTH_TOO_LONG' => CUSTOMLABELLENGTHTOOLONG,
       'PRODUCT_TYPE_LENGTH_TOO_LONG' => PRODUCTTYPELENGTHTOOLONG,
       'TOO_MANY_ADDITIONAL_IMAGE_LINKS' => TOOMANYADDITIONALIMAGELINKS,
       'MULTIPACK_INVALID' => MULTIPACKINVALID,
       'INDEXED_PRODUCT_COUNT_LARGE_DELTA' => INDEXEDPRODUCTCOUNTLARGEDELTA,
       'ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE' => ITEMADDITIONALIMAGEDOWNLOADFAILURE,
       'OPTIONAL_PRODUCT_CATEGORY_MISSING' => OPTIONALPRODUCTCATEGORYMISSING,
       'OPTIONAL_PRODUCT_CATEGORY_INVALID' => OPTIONALPRODUCTCATEGORYINVALID,
       'OPTIONAL_CONDITION_MISSING' => OPTIONALCONDITIONMISSING,
       'OPTIONAL_CONDITION_INVALID' => OPTIONALCONDITIONINVALID,
       'IOS_DEEP_LINK_INVALID' => IOSDEEPLINKINVALID,
       'ANDROID_DEEP_LINK_INVALID' => ANDROIDDEEPLINKINVALID,
       'UTM_SOURCE_AUTO_CORRECTED' => UTMSOURCEAUTOCORRECTED,
       'COUNTRY_DOES_NOT_MAP_TO_CURRENCY' => COUNTRYDOESNOTMAPTOCURRENCY,
       'MIN_AD_PRICE_INVALID' => MINADPRICEINVALID,
       'GTIN_INVALID' => GTININVALID,
       'INCONSISTENT_CURRENCY_VALUES' => INCONSISTENTCURRENCYVALUES,
       'SALES_PRICE_TOO_LOW' => SALESPRICETOOLOW,
       'SHIPPING_WIDTH_INVALID' => SHIPPINGWIDTHINVALID,
       'SHIPPING_HEIGHT_INVALID' => SHIPPINGHEIGHTINVALID,
       'SALES_PRICE_TOO_HIGH' => SALESPRICETOOHIGH,
       'MPN_INVALID' => MPNINVALID
     }.
