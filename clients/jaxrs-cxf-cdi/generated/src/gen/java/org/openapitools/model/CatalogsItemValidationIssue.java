package org.openapitools.model;

import javax.validation.constraints.*;
import javax.validation.Valid;

import com.fasterxml.jackson.annotation.JsonCreator;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonProperty;

public enum CatalogsItemValidationIssue {

    @JsonProperty("AD_LINK_FORMAT_WARNING") AD_LINK_FORMAT_WARNING(String.valueOf("AD_LINK_FORMAT_WARNING")), @JsonProperty("AD_LINK_SAME_AS_LINK") AD_LINK_SAME_AS_LINK(String.valueOf("AD_LINK_SAME_AS_LINK")), @JsonProperty("ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG") ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG(String.valueOf("ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG")), @JsonProperty("ADDITIONAL_IMAGE_LINK_WARNING") ADDITIONAL_IMAGE_LINK_WARNING(String.valueOf("ADDITIONAL_IMAGE_LINK_WARNING")), @JsonProperty("ADULT_INVALID") ADULT_INVALID(String.valueOf("ADULT_INVALID")), @JsonProperty("ADWORDS_FORMAT_INVALID") ADWORDS_FORMAT_INVALID(String.valueOf("ADWORDS_FORMAT_INVALID")), @JsonProperty("ADWORDS_FORMAT_WARNING") ADWORDS_FORMAT_WARNING(String.valueOf("ADWORDS_FORMAT_WARNING")), @JsonProperty("ADWORDS_SAME_AS_LINK") ADWORDS_SAME_AS_LINK(String.valueOf("ADWORDS_SAME_AS_LINK")), @JsonProperty("AGE_GROUP_INVALID") AGE_GROUP_INVALID(String.valueOf("AGE_GROUP_INVALID")), @JsonProperty("ANDROID_DEEP_LINK_INVALID") ANDROID_DEEP_LINK_INVALID(String.valueOf("ANDROID_DEEP_LINK_INVALID")), @JsonProperty("AVAILABILITY_DATE_INVALID") AVAILABILITY_DATE_INVALID(String.valueOf("AVAILABILITY_DATE_INVALID")), @JsonProperty("AVAILABILITY_INVALID") AVAILABILITY_INVALID(String.valueOf("AVAILABILITY_INVALID")), @JsonProperty("BLOCKLISTED_IMAGE_SIGNATURE") BLOCKLISTED_IMAGE_SIGNATURE(String.valueOf("BLOCKLISTED_IMAGE_SIGNATURE")), @JsonProperty("COUNTRY_DOES_NOT_MAP_TO_CURRENCY") COUNTRY_DOES_NOT_MAP_TO_CURRENCY(String.valueOf("COUNTRY_DOES_NOT_MAP_TO_CURRENCY")), @JsonProperty("CUSTOM_LABEL_LENGTH_TOO_LONG") CUSTOM_LABEL_LENGTH_TOO_LONG(String.valueOf("CUSTOM_LABEL_LENGTH_TOO_LONG")), @JsonProperty("DESCRIPTION_LENGTH_TOO_LONG") DESCRIPTION_LENGTH_TOO_LONG(String.valueOf("DESCRIPTION_LENGTH_TOO_LONG")), @JsonProperty("DESCRIPTION_MISSING") DESCRIPTION_MISSING(String.valueOf("DESCRIPTION_MISSING")), @JsonProperty("DUPLICATE_PRODUCTS") DUPLICATE_PRODUCTS(String.valueOf("DUPLICATE_PRODUCTS")), @JsonProperty("EXPIRATION_DATE_INVALID") EXPIRATION_DATE_INVALID(String.valueOf("EXPIRATION_DATE_INVALID")), @JsonProperty("GENDER_INVALID") GENDER_INVALID(String.valueOf("GENDER_INVALID")), @JsonProperty("GTIN_INVALID") GTIN_INVALID(String.valueOf("GTIN_INVALID")), @JsonProperty("IMAGE_LINK_INVALID") IMAGE_LINK_INVALID(String.valueOf("IMAGE_LINK_INVALID")), @JsonProperty("IMAGE_LINK_LENGTH_TOO_LONG") IMAGE_LINK_LENGTH_TOO_LONG(String.valueOf("IMAGE_LINK_LENGTH_TOO_LONG")), @JsonProperty("IMAGE_LINK_MISSING") IMAGE_LINK_MISSING(String.valueOf("IMAGE_LINK_MISSING")), @JsonProperty("IMAGE_LINK_WARNING") IMAGE_LINK_WARNING(String.valueOf("IMAGE_LINK_WARNING")), @JsonProperty("INVALID_DOMAIN") INVALID_DOMAIN(String.valueOf("INVALID_DOMAIN")), @JsonProperty("IOS_DEEP_LINK_INVALID") IOS_DEEP_LINK_INVALID(String.valueOf("IOS_DEEP_LINK_INVALID")), @JsonProperty("IS_BUNDLE_INVALID") IS_BUNDLE_INVALID(String.valueOf("IS_BUNDLE_INVALID")), @JsonProperty("ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE") ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE(String.valueOf("ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE")), @JsonProperty("ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE") ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE(String.valueOf("ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE")), @JsonProperty("ITEMID_MISSING") ITEMID_MISSING(String.valueOf("ITEMID_MISSING")), @JsonProperty("LINK_FORMAT_INVALID") LINK_FORMAT_INVALID(String.valueOf("LINK_FORMAT_INVALID")), @JsonProperty("LINK_FORMAT_WARNING") LINK_FORMAT_WARNING(String.valueOf("LINK_FORMAT_WARNING")), @JsonProperty("LINK_LENGTH_TOO_LONG") LINK_LENGTH_TOO_LONG(String.valueOf("LINK_LENGTH_TOO_LONG")), @JsonProperty("LIST_PRICE_INVALID") LIST_PRICE_INVALID(String.valueOf("LIST_PRICE_INVALID")), @JsonProperty("MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED") MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED(String.valueOf("MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED")), @JsonProperty("MIN_AD_PRICE_INVALID") MIN_AD_PRICE_INVALID(String.valueOf("MIN_AD_PRICE_INVALID")), @JsonProperty("MPN_INVALID") MPN_INVALID(String.valueOf("MPN_INVALID")), @JsonProperty("MULTIPACK_INVALID") MULTIPACK_INVALID(String.valueOf("MULTIPACK_INVALID")), @JsonProperty("OPTIONAL_CONDITION_INVALID") OPTIONAL_CONDITION_INVALID(String.valueOf("OPTIONAL_CONDITION_INVALID")), @JsonProperty("OPTIONAL_CONDITION_MISSING") OPTIONAL_CONDITION_MISSING(String.valueOf("OPTIONAL_CONDITION_MISSING")), @JsonProperty("OPTIONAL_PRODUCT_CATEGORY_INVALID") OPTIONAL_PRODUCT_CATEGORY_INVALID(String.valueOf("OPTIONAL_PRODUCT_CATEGORY_INVALID")), @JsonProperty("OPTIONAL_PRODUCT_CATEGORY_MISSING") OPTIONAL_PRODUCT_CATEGORY_MISSING(String.valueOf("OPTIONAL_PRODUCT_CATEGORY_MISSING")), @JsonProperty("PARSE_LINE_ERROR") PARSE_LINE_ERROR(String.valueOf("PARSE_LINE_ERROR")), @JsonProperty("PINJOIN_CONTENT_UNSAFE") PINJOIN_CONTENT_UNSAFE(String.valueOf("PINJOIN_CONTENT_UNSAFE")), @JsonProperty("PRICE_CANNOT_BE_DETERMINED") PRICE_CANNOT_BE_DETERMINED(String.valueOf("PRICE_CANNOT_BE_DETERMINED")), @JsonProperty("PRICE_MISSING") PRICE_MISSING(String.valueOf("PRICE_MISSING")), @JsonProperty("PRODUCT_CATEGORY_DEPTH_WARNING") PRODUCT_CATEGORY_DEPTH_WARNING(String.valueOf("PRODUCT_CATEGORY_DEPTH_WARNING")), @JsonProperty("PRODUCT_LINK_MISSING") PRODUCT_LINK_MISSING(String.valueOf("PRODUCT_LINK_MISSING")), @JsonProperty("PRODUCT_PRICE_INVALID") PRODUCT_PRICE_INVALID(String.valueOf("PRODUCT_PRICE_INVALID")), @JsonProperty("PRODUCT_TYPE_LENGTH_TOO_LONG") PRODUCT_TYPE_LENGTH_TOO_LONG(String.valueOf("PRODUCT_TYPE_LENGTH_TOO_LONG")), @JsonProperty("SALE_DATE_INVALID") SALE_DATE_INVALID(String.valueOf("SALE_DATE_INVALID")), @JsonProperty("SALES_PRICE_INVALID") SALES_PRICE_INVALID(String.valueOf("SALES_PRICE_INVALID")), @JsonProperty("SALES_PRICE_TOO_HIGH") SALES_PRICE_TOO_HIGH(String.valueOf("SALES_PRICE_TOO_HIGH")), @JsonProperty("SALES_PRICE_TOO_LOW") SALES_PRICE_TOO_LOW(String.valueOf("SALES_PRICE_TOO_LOW")), @JsonProperty("SHIPPING_INVALID") SHIPPING_INVALID(String.valueOf("SHIPPING_INVALID")), @JsonProperty("SHIPPING_HEIGHT_INVALID") SHIPPING_HEIGHT_INVALID(String.valueOf("SHIPPING_HEIGHT_INVALID")), @JsonProperty("SHIPPING_WEIGHT_INVALID") SHIPPING_WEIGHT_INVALID(String.valueOf("SHIPPING_WEIGHT_INVALID")), @JsonProperty("SHIPPING_WIDTH_INVALID") SHIPPING_WIDTH_INVALID(String.valueOf("SHIPPING_WIDTH_INVALID")), @JsonProperty("SIZE_SYSTEM_INVALID") SIZE_SYSTEM_INVALID(String.valueOf("SIZE_SYSTEM_INVALID")), @JsonProperty("SIZE_TYPE_INVALID") SIZE_TYPE_INVALID(String.valueOf("SIZE_TYPE_INVALID")), @JsonProperty("TAX_INVALID") TAX_INVALID(String.valueOf("TAX_INVALID")), @JsonProperty("TITLE_LENGTH_TOO_LONG") TITLE_LENGTH_TOO_LONG(String.valueOf("TITLE_LENGTH_TOO_LONG")), @JsonProperty("TITLE_MISSING") TITLE_MISSING(String.valueOf("TITLE_MISSING")), @JsonProperty("TOO_MANY_ADDITIONAL_IMAGE_LINKS") TOO_MANY_ADDITIONAL_IMAGE_LINKS(String.valueOf("TOO_MANY_ADDITIONAL_IMAGE_LINKS")), @JsonProperty("UTM_SOURCE_AUTO_CORRECTED") UTM_SOURCE_AUTO_CORRECTED(String.valueOf("UTM_SOURCE_AUTO_CORRECTED")), @JsonProperty("WEIGHT_UNIT_INVALID") WEIGHT_UNIT_INVALID(String.valueOf("WEIGHT_UNIT_INVALID"));


    private String value;

    CatalogsItemValidationIssue(String v) {
        value = v;
    }

    public String value() {
        return value;
    }

    @Override
    public String toString() {
        return String.valueOf(value);
    }

    public static CatalogsItemValidationIssue fromValue(String value) {
        for (CatalogsItemValidationIssue b : CatalogsItemValidationIssue.values()) {
            if (b.value.equals(value)) {
                return b;
            }
        }
        throw new IllegalArgumentException("Unexpected value '" + value + "'");
    }
}



