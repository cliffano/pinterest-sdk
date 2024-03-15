/*
Pinterest REST API

Pinterest's REST API

API version: 5.12.0
Contact: blah+oapicf@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"fmt"
)

// UpdateMaskFieldType The field types supported by the update mask
type UpdateMaskFieldType string

// List of UpdateMaskFieldType
const (
	AD_LINK UpdateMaskFieldType = "ad_link"
	ADULT UpdateMaskFieldType = "adult"
	AGE_GROUP UpdateMaskFieldType = "age_group"
	AVAILABILITY UpdateMaskFieldType = "availability"
	AVERAGE_REVIEW_RATING UpdateMaskFieldType = "average_review_rating"
	BRAND UpdateMaskFieldType = "brand"
	CHECKOUT_ENABLED UpdateMaskFieldType = "checkout_enabled"
	COLOR UpdateMaskFieldType = "color"
	CONDITION UpdateMaskFieldType = "condition"
	CUSTOM_LABEL_0 UpdateMaskFieldType = "custom_label_0"
	CUSTOM_LABEL_1 UpdateMaskFieldType = "custom_label_1"
	CUSTOM_LABEL_2 UpdateMaskFieldType = "custom_label_2"
	CUSTOM_LABEL_3 UpdateMaskFieldType = "custom_label_3"
	CUSTOM_LABEL_4 UpdateMaskFieldType = "custom_label_4"
	DESCRIPTION UpdateMaskFieldType = "description"
	FREE_SHIPPING_LABEL UpdateMaskFieldType = "free_shipping_label"
	FREE_SHIPPING_LIMIT UpdateMaskFieldType = "free_shipping_limit"
	GENDER UpdateMaskFieldType = "gender"
	GOOGLE_PRODUCT_CATEGORY UpdateMaskFieldType = "google_product_category"
	GTIN UpdateMaskFieldType = "gtin"
	ITEM_GROUP_ID UpdateMaskFieldType = "item_group_id"
	LAST_UPDATED_TIME UpdateMaskFieldType = "last_updated_time"
	LINK UpdateMaskFieldType = "link"
	MATERIAL UpdateMaskFieldType = "material"
	MIN_AD_PRICE UpdateMaskFieldType = "min_ad_price"
	MPN UpdateMaskFieldType = "mpn"
	NUMBER_OF_RATINGS UpdateMaskFieldType = "number_of_ratings"
	NUMBER_OF_REVIEWS UpdateMaskFieldType = "number_of_reviews"
	PATTERN UpdateMaskFieldType = "pattern"
	PRICE UpdateMaskFieldType = "price"
	PRODUCT_TYPE UpdateMaskFieldType = "product_type"
	SALE_PRICE UpdateMaskFieldType = "sale_price"
	SHIPPING UpdateMaskFieldType = "shipping"
	SHIPPING_HEIGHT UpdateMaskFieldType = "shipping_height"
	SHIPPING_WEIGHT UpdateMaskFieldType = "shipping_weight"
	SHIPPING_WIDTH UpdateMaskFieldType = "shipping_width"
	SIZE UpdateMaskFieldType = "size"
	SIZE_SYSTEM UpdateMaskFieldType = "size_system"
	SIZE_TYPE UpdateMaskFieldType = "size_type"
	TAX UpdateMaskFieldType = "tax"
	TITLE UpdateMaskFieldType = "title"
	VARIANT_NAMES UpdateMaskFieldType = "variant_names"
	VARIANT_VALUES UpdateMaskFieldType = "variant_values"
)

// All allowed values of UpdateMaskFieldType enum
var AllowedUpdateMaskFieldTypeEnumValues = []UpdateMaskFieldType{
	"ad_link",
	"adult",
	"age_group",
	"availability",
	"average_review_rating",
	"brand",
	"checkout_enabled",
	"color",
	"condition",
	"custom_label_0",
	"custom_label_1",
	"custom_label_2",
	"custom_label_3",
	"custom_label_4",
	"description",
	"free_shipping_label",
	"free_shipping_limit",
	"gender",
	"google_product_category",
	"gtin",
	"item_group_id",
	"last_updated_time",
	"link",
	"material",
	"min_ad_price",
	"mpn",
	"number_of_ratings",
	"number_of_reviews",
	"pattern",
	"price",
	"product_type",
	"sale_price",
	"shipping",
	"shipping_height",
	"shipping_weight",
	"shipping_width",
	"size",
	"size_system",
	"size_type",
	"tax",
	"title",
	"variant_names",
	"variant_values",
}

func (v *UpdateMaskFieldType) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := UpdateMaskFieldType(value)
	for _, existing := range AllowedUpdateMaskFieldTypeEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid UpdateMaskFieldType", value)
}

// NewUpdateMaskFieldTypeFromValue returns a pointer to a valid UpdateMaskFieldType
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewUpdateMaskFieldTypeFromValue(v string) (*UpdateMaskFieldType, error) {
	ev := UpdateMaskFieldType(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for UpdateMaskFieldType: valid values are %v", v, AllowedUpdateMaskFieldTypeEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v UpdateMaskFieldType) IsValid() bool {
	for _, existing := range AllowedUpdateMaskFieldTypeEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to UpdateMaskFieldType value
func (v UpdateMaskFieldType) Ptr() *UpdateMaskFieldType {
	return &v
}

type NullableUpdateMaskFieldType struct {
	value *UpdateMaskFieldType
	isSet bool
}

func (v NullableUpdateMaskFieldType) Get() *UpdateMaskFieldType {
	return v.value
}

func (v *NullableUpdateMaskFieldType) Set(val *UpdateMaskFieldType) {
	v.value = val
	v.isSet = true
}

func (v NullableUpdateMaskFieldType) IsSet() bool {
	return v.isSet
}

func (v *NullableUpdateMaskFieldType) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableUpdateMaskFieldType(val *UpdateMaskFieldType) *NullableUpdateMaskFieldType {
	return &NullableUpdateMaskFieldType{value: val, isSet: true}
}

func (v NullableUpdateMaskFieldType) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableUpdateMaskFieldType) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
