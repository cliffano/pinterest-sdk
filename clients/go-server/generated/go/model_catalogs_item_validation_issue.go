/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi


import (
	"fmt"
)



type CatalogsItemValidationIssue string

// List of CatalogsItemValidationIssue
const (
	AD_LINK_FORMAT_WARNING CatalogsItemValidationIssue = "AD_LINK_FORMAT_WARNING"
	AD_LINK_SAME_AS_LINK CatalogsItemValidationIssue = "AD_LINK_SAME_AS_LINK"
	ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG CatalogsItemValidationIssue = "ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG"
	ADDITIONAL_IMAGE_LINK_WARNING CatalogsItemValidationIssue = "ADDITIONAL_IMAGE_LINK_WARNING"
	ADULT_INVALID CatalogsItemValidationIssue = "ADULT_INVALID"
	ADWORDS_FORMAT_INVALID CatalogsItemValidationIssue = "ADWORDS_FORMAT_INVALID"
	ADWORDS_FORMAT_WARNING CatalogsItemValidationIssue = "ADWORDS_FORMAT_WARNING"
	ADWORDS_SAME_AS_LINK CatalogsItemValidationIssue = "ADWORDS_SAME_AS_LINK"
	AGE_GROUP_INVALID CatalogsItemValidationIssue = "AGE_GROUP_INVALID"
	ANDROID_DEEP_LINK_INVALID CatalogsItemValidationIssue = "ANDROID_DEEP_LINK_INVALID"
	AVAILABILITY_DATE_INVALID CatalogsItemValidationIssue = "AVAILABILITY_DATE_INVALID"
	AVAILABILITY_INVALID CatalogsItemValidationIssue = "AVAILABILITY_INVALID"
	BLOCKLISTED_IMAGE_SIGNATURE CatalogsItemValidationIssue = "BLOCKLISTED_IMAGE_SIGNATURE"
	COUNTRY_DOES_NOT_MAP_TO_CURRENCY CatalogsItemValidationIssue = "COUNTRY_DOES_NOT_MAP_TO_CURRENCY"
	CUSTOM_LABEL_LENGTH_TOO_LONG CatalogsItemValidationIssue = "CUSTOM_LABEL_LENGTH_TOO_LONG"
	DESCRIPTION_LENGTH_TOO_LONG CatalogsItemValidationIssue = "DESCRIPTION_LENGTH_TOO_LONG"
	DESCRIPTION_MISSING CatalogsItemValidationIssue = "DESCRIPTION_MISSING"
	DUPLICATE_PRODUCTS CatalogsItemValidationIssue = "DUPLICATE_PRODUCTS"
	EXPIRATION_DATE_INVALID CatalogsItemValidationIssue = "EXPIRATION_DATE_INVALID"
	GENDER_INVALID CatalogsItemValidationIssue = "GENDER_INVALID"
	GTIN_INVALID CatalogsItemValidationIssue = "GTIN_INVALID"
	IMAGE_LINK_INVALID CatalogsItemValidationIssue = "IMAGE_LINK_INVALID"
	IMAGE_LINK_LENGTH_TOO_LONG CatalogsItemValidationIssue = "IMAGE_LINK_LENGTH_TOO_LONG"
	IMAGE_LINK_MISSING CatalogsItemValidationIssue = "IMAGE_LINK_MISSING"
	IMAGE_LINK_WARNING CatalogsItemValidationIssue = "IMAGE_LINK_WARNING"
	INVALID_DOMAIN CatalogsItemValidationIssue = "INVALID_DOMAIN"
	IOS_DEEP_LINK_INVALID CatalogsItemValidationIssue = "IOS_DEEP_LINK_INVALID"
	IS_BUNDLE_INVALID CatalogsItemValidationIssue = "IS_BUNDLE_INVALID"
	ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE CatalogsItemValidationIssue = "ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE"
	ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE CatalogsItemValidationIssue = "ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE"
	ITEMID_MISSING CatalogsItemValidationIssue = "ITEMID_MISSING"
	LINK_FORMAT_INVALID CatalogsItemValidationIssue = "LINK_FORMAT_INVALID"
	LINK_FORMAT_WARNING CatalogsItemValidationIssue = "LINK_FORMAT_WARNING"
	LINK_LENGTH_TOO_LONG CatalogsItemValidationIssue = "LINK_LENGTH_TOO_LONG"
	LIST_PRICE_INVALID CatalogsItemValidationIssue = "LIST_PRICE_INVALID"
	MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED CatalogsItemValidationIssue = "MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED"
	MIN_AD_PRICE_INVALID CatalogsItemValidationIssue = "MIN_AD_PRICE_INVALID"
	MPN_INVALID CatalogsItemValidationIssue = "MPN_INVALID"
	MULTIPACK_INVALID CatalogsItemValidationIssue = "MULTIPACK_INVALID"
	OPTIONAL_CONDITION_INVALID CatalogsItemValidationIssue = "OPTIONAL_CONDITION_INVALID"
	OPTIONAL_CONDITION_MISSING CatalogsItemValidationIssue = "OPTIONAL_CONDITION_MISSING"
	OPTIONAL_PRODUCT_CATEGORY_INVALID CatalogsItemValidationIssue = "OPTIONAL_PRODUCT_CATEGORY_INVALID"
	OPTIONAL_PRODUCT_CATEGORY_MISSING CatalogsItemValidationIssue = "OPTIONAL_PRODUCT_CATEGORY_MISSING"
	PARSE_LINE_ERROR CatalogsItemValidationIssue = "PARSE_LINE_ERROR"
	PINJOIN_CONTENT_UNSAFE CatalogsItemValidationIssue = "PINJOIN_CONTENT_UNSAFE"
	PRICE_CANNOT_BE_DETERMINED CatalogsItemValidationIssue = "PRICE_CANNOT_BE_DETERMINED"
	PRICE_MISSING CatalogsItemValidationIssue = "PRICE_MISSING"
	PRODUCT_CATEGORY_DEPTH_WARNING CatalogsItemValidationIssue = "PRODUCT_CATEGORY_DEPTH_WARNING"
	PRODUCT_LINK_MISSING CatalogsItemValidationIssue = "PRODUCT_LINK_MISSING"
	PRODUCT_PRICE_INVALID CatalogsItemValidationIssue = "PRODUCT_PRICE_INVALID"
	PRODUCT_TYPE_LENGTH_TOO_LONG CatalogsItemValidationIssue = "PRODUCT_TYPE_LENGTH_TOO_LONG"
	SALE_DATE_INVALID CatalogsItemValidationIssue = "SALE_DATE_INVALID"
	SALES_PRICE_INVALID CatalogsItemValidationIssue = "SALES_PRICE_INVALID"
	SALES_PRICE_TOO_HIGH CatalogsItemValidationIssue = "SALES_PRICE_TOO_HIGH"
	SALES_PRICE_TOO_LOW CatalogsItemValidationIssue = "SALES_PRICE_TOO_LOW"
	SHIPPING_INVALID CatalogsItemValidationIssue = "SHIPPING_INVALID"
	SHIPPING_HEIGHT_INVALID CatalogsItemValidationIssue = "SHIPPING_HEIGHT_INVALID"
	SHIPPING_WEIGHT_INVALID CatalogsItemValidationIssue = "SHIPPING_WEIGHT_INVALID"
	SHIPPING_WIDTH_INVALID CatalogsItemValidationIssue = "SHIPPING_WIDTH_INVALID"
	SIZE_SYSTEM_INVALID CatalogsItemValidationIssue = "SIZE_SYSTEM_INVALID"
	SIZE_TYPE_INVALID CatalogsItemValidationIssue = "SIZE_TYPE_INVALID"
	TAX_INVALID CatalogsItemValidationIssue = "TAX_INVALID"
	TITLE_LENGTH_TOO_LONG CatalogsItemValidationIssue = "TITLE_LENGTH_TOO_LONG"
	TITLE_MISSING CatalogsItemValidationIssue = "TITLE_MISSING"
	TOO_MANY_ADDITIONAL_IMAGE_LINKS CatalogsItemValidationIssue = "TOO_MANY_ADDITIONAL_IMAGE_LINKS"
	UTM_SOURCE_AUTO_CORRECTED CatalogsItemValidationIssue = "UTM_SOURCE_AUTO_CORRECTED"
	WEIGHT_UNIT_INVALID CatalogsItemValidationIssue = "WEIGHT_UNIT_INVALID"
)

// AllowedCatalogsItemValidationIssueEnumValues is all the allowed values of CatalogsItemValidationIssue enum
var AllowedCatalogsItemValidationIssueEnumValues = []CatalogsItemValidationIssue{
	"AD_LINK_FORMAT_WARNING",
	"AD_LINK_SAME_AS_LINK",
	"ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG",
	"ADDITIONAL_IMAGE_LINK_WARNING",
	"ADULT_INVALID",
	"ADWORDS_FORMAT_INVALID",
	"ADWORDS_FORMAT_WARNING",
	"ADWORDS_SAME_AS_LINK",
	"AGE_GROUP_INVALID",
	"ANDROID_DEEP_LINK_INVALID",
	"AVAILABILITY_DATE_INVALID",
	"AVAILABILITY_INVALID",
	"BLOCKLISTED_IMAGE_SIGNATURE",
	"COUNTRY_DOES_NOT_MAP_TO_CURRENCY",
	"CUSTOM_LABEL_LENGTH_TOO_LONG",
	"DESCRIPTION_LENGTH_TOO_LONG",
	"DESCRIPTION_MISSING",
	"DUPLICATE_PRODUCTS",
	"EXPIRATION_DATE_INVALID",
	"GENDER_INVALID",
	"GTIN_INVALID",
	"IMAGE_LINK_INVALID",
	"IMAGE_LINK_LENGTH_TOO_LONG",
	"IMAGE_LINK_MISSING",
	"IMAGE_LINK_WARNING",
	"INVALID_DOMAIN",
	"IOS_DEEP_LINK_INVALID",
	"IS_BUNDLE_INVALID",
	"ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE",
	"ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE",
	"ITEMID_MISSING",
	"LINK_FORMAT_INVALID",
	"LINK_FORMAT_WARNING",
	"LINK_LENGTH_TOO_LONG",
	"LIST_PRICE_INVALID",
	"MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED",
	"MIN_AD_PRICE_INVALID",
	"MPN_INVALID",
	"MULTIPACK_INVALID",
	"OPTIONAL_CONDITION_INVALID",
	"OPTIONAL_CONDITION_MISSING",
	"OPTIONAL_PRODUCT_CATEGORY_INVALID",
	"OPTIONAL_PRODUCT_CATEGORY_MISSING",
	"PARSE_LINE_ERROR",
	"PINJOIN_CONTENT_UNSAFE",
	"PRICE_CANNOT_BE_DETERMINED",
	"PRICE_MISSING",
	"PRODUCT_CATEGORY_DEPTH_WARNING",
	"PRODUCT_LINK_MISSING",
	"PRODUCT_PRICE_INVALID",
	"PRODUCT_TYPE_LENGTH_TOO_LONG",
	"SALE_DATE_INVALID",
	"SALES_PRICE_INVALID",
	"SALES_PRICE_TOO_HIGH",
	"SALES_PRICE_TOO_LOW",
	"SHIPPING_INVALID",
	"SHIPPING_HEIGHT_INVALID",
	"SHIPPING_WEIGHT_INVALID",
	"SHIPPING_WIDTH_INVALID",
	"SIZE_SYSTEM_INVALID",
	"SIZE_TYPE_INVALID",
	"TAX_INVALID",
	"TITLE_LENGTH_TOO_LONG",
	"TITLE_MISSING",
	"TOO_MANY_ADDITIONAL_IMAGE_LINKS",
	"UTM_SOURCE_AUTO_CORRECTED",
	"WEIGHT_UNIT_INVALID",
}

// validCatalogsItemValidationIssueEnumValue provides a map of CatalogsItemValidationIssues for fast verification of use input
var validCatalogsItemValidationIssueEnumValues = map[CatalogsItemValidationIssue]struct{}{
	"AD_LINK_FORMAT_WARNING": {},
	"AD_LINK_SAME_AS_LINK": {},
	"ADDITIONAL_IMAGE_LINK_LENGTH_TOO_LONG": {},
	"ADDITIONAL_IMAGE_LINK_WARNING": {},
	"ADULT_INVALID": {},
	"ADWORDS_FORMAT_INVALID": {},
	"ADWORDS_FORMAT_WARNING": {},
	"ADWORDS_SAME_AS_LINK": {},
	"AGE_GROUP_INVALID": {},
	"ANDROID_DEEP_LINK_INVALID": {},
	"AVAILABILITY_DATE_INVALID": {},
	"AVAILABILITY_INVALID": {},
	"BLOCKLISTED_IMAGE_SIGNATURE": {},
	"COUNTRY_DOES_NOT_MAP_TO_CURRENCY": {},
	"CUSTOM_LABEL_LENGTH_TOO_LONG": {},
	"DESCRIPTION_LENGTH_TOO_LONG": {},
	"DESCRIPTION_MISSING": {},
	"DUPLICATE_PRODUCTS": {},
	"EXPIRATION_DATE_INVALID": {},
	"GENDER_INVALID": {},
	"GTIN_INVALID": {},
	"IMAGE_LINK_INVALID": {},
	"IMAGE_LINK_LENGTH_TOO_LONG": {},
	"IMAGE_LINK_MISSING": {},
	"IMAGE_LINK_WARNING": {},
	"INVALID_DOMAIN": {},
	"IOS_DEEP_LINK_INVALID": {},
	"IS_BUNDLE_INVALID": {},
	"ITEM_ADDITIONAL_IMAGE_DOWNLOAD_FAILURE": {},
	"ITEM_MAIN_IMAGE_DOWNLOAD_FAILURE": {},
	"ITEMID_MISSING": {},
	"LINK_FORMAT_INVALID": {},
	"LINK_FORMAT_WARNING": {},
	"LINK_LENGTH_TOO_LONG": {},
	"LIST_PRICE_INVALID": {},
	"MAX_ITEMS_PER_ITEM_GROUP_EXCEEDED": {},
	"MIN_AD_PRICE_INVALID": {},
	"MPN_INVALID": {},
	"MULTIPACK_INVALID": {},
	"OPTIONAL_CONDITION_INVALID": {},
	"OPTIONAL_CONDITION_MISSING": {},
	"OPTIONAL_PRODUCT_CATEGORY_INVALID": {},
	"OPTIONAL_PRODUCT_CATEGORY_MISSING": {},
	"PARSE_LINE_ERROR": {},
	"PINJOIN_CONTENT_UNSAFE": {},
	"PRICE_CANNOT_BE_DETERMINED": {},
	"PRICE_MISSING": {},
	"PRODUCT_CATEGORY_DEPTH_WARNING": {},
	"PRODUCT_LINK_MISSING": {},
	"PRODUCT_PRICE_INVALID": {},
	"PRODUCT_TYPE_LENGTH_TOO_LONG": {},
	"SALE_DATE_INVALID": {},
	"SALES_PRICE_INVALID": {},
	"SALES_PRICE_TOO_HIGH": {},
	"SALES_PRICE_TOO_LOW": {},
	"SHIPPING_INVALID": {},
	"SHIPPING_HEIGHT_INVALID": {},
	"SHIPPING_WEIGHT_INVALID": {},
	"SHIPPING_WIDTH_INVALID": {},
	"SIZE_SYSTEM_INVALID": {},
	"SIZE_TYPE_INVALID": {},
	"TAX_INVALID": {},
	"TITLE_LENGTH_TOO_LONG": {},
	"TITLE_MISSING": {},
	"TOO_MANY_ADDITIONAL_IMAGE_LINKS": {},
	"UTM_SOURCE_AUTO_CORRECTED": {},
	"WEIGHT_UNIT_INVALID": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v CatalogsItemValidationIssue) IsValid() bool {
	_, ok := validCatalogsItemValidationIssueEnumValues[v]
	return ok
}

// NewCatalogsItemValidationIssueFromValue returns a pointer to a valid CatalogsItemValidationIssue
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewCatalogsItemValidationIssueFromValue(v string) (CatalogsItemValidationIssue, error) {
	ev := CatalogsItemValidationIssue(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for CatalogsItemValidationIssue: valid values are %v", v, AllowedCatalogsItemValidationIssueEnumValues)
	}
}



// AssertCatalogsItemValidationIssueRequired checks if the required fields are not zero-ed
func AssertCatalogsItemValidationIssueRequired(obj CatalogsItemValidationIssue) error {
	return nil
}

// AssertCatalogsItemValidationIssueConstraints checks if the values respects the defined constraints
func AssertCatalogsItemValidationIssueConstraints(obj CatalogsItemValidationIssue) error {
	return nil
}