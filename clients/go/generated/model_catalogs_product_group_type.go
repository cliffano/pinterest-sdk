/*
Pinterest REST API

Pinterest's REST API

API version: 5.3.0
Contact: pinterest-api@pinterest.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
	"fmt"
)

// CatalogsProductGroupType Catalog product group type
type CatalogsProductGroupType string

// List of CatalogsProductGroupType
const (
	MERCHANT_CREATED CatalogsProductGroupType = "MERCHANT_CREATED"
	ALL_PRODUCTS CatalogsProductGroupType = "ALL_PRODUCTS"
	BEST_DEALS CatalogsProductGroupType = "BEST_DEALS"
	PINNER_FAVORITES CatalogsProductGroupType = "PINNER_FAVORITES"
	TOP_SELLERS CatalogsProductGroupType = "TOP_SELLERS"
	BACK_IN_STOCK CatalogsProductGroupType = "BACK_IN_STOCK"
	NEW_ARRIVALS CatalogsProductGroupType = "NEW_ARRIVALS"
)

// All allowed values of CatalogsProductGroupType enum
var AllowedCatalogsProductGroupTypeEnumValues = []CatalogsProductGroupType{
	"MERCHANT_CREATED",
	"ALL_PRODUCTS",
	"BEST_DEALS",
	"PINNER_FAVORITES",
	"TOP_SELLERS",
	"BACK_IN_STOCK",
	"NEW_ARRIVALS",
}

func (v *CatalogsProductGroupType) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := CatalogsProductGroupType(value)
	for _, existing := range AllowedCatalogsProductGroupTypeEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid CatalogsProductGroupType", value)
}

// NewCatalogsProductGroupTypeFromValue returns a pointer to a valid CatalogsProductGroupType
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewCatalogsProductGroupTypeFromValue(v string) (*CatalogsProductGroupType, error) {
	ev := CatalogsProductGroupType(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for CatalogsProductGroupType: valid values are %v", v, AllowedCatalogsProductGroupTypeEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v CatalogsProductGroupType) IsValid() bool {
	for _, existing := range AllowedCatalogsProductGroupTypeEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to CatalogsProductGroupType value
func (v CatalogsProductGroupType) Ptr() *CatalogsProductGroupType {
	return &v
}

type NullableCatalogsProductGroupType struct {
	value *CatalogsProductGroupType
	isSet bool
}

func (v NullableCatalogsProductGroupType) Get() *CatalogsProductGroupType {
	return v.value
}

func (v *NullableCatalogsProductGroupType) Set(val *CatalogsProductGroupType) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsProductGroupType) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsProductGroupType) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsProductGroupType(val *CatalogsProductGroupType) *NullableCatalogsProductGroupType {
	return &NullableCatalogsProductGroupType{value: val, isSet: true}
}

func (v NullableCatalogsProductGroupType) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsProductGroupType) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}
