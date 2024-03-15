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

// ItemResponseAnyOf1 - struct for ItemResponseAnyOf1
type ItemResponseAnyOf1 struct {
	CatalogsHotelItemErrorResponse *CatalogsHotelItemErrorResponse
	CatalogsRetailItemErrorResponse *CatalogsRetailItemErrorResponse
}

// CatalogsHotelItemErrorResponseAsItemResponseAnyOf1 is a convenience function that returns CatalogsHotelItemErrorResponse wrapped in ItemResponseAnyOf1
func CatalogsHotelItemErrorResponseAsItemResponseAnyOf1(v *CatalogsHotelItemErrorResponse) ItemResponseAnyOf1 {
	return ItemResponseAnyOf1{
		CatalogsHotelItemErrorResponse: v,
	}
}

// CatalogsRetailItemErrorResponseAsItemResponseAnyOf1 is a convenience function that returns CatalogsRetailItemErrorResponse wrapped in ItemResponseAnyOf1
func CatalogsRetailItemErrorResponseAsItemResponseAnyOf1(v *CatalogsRetailItemErrorResponse) ItemResponseAnyOf1 {
	return ItemResponseAnyOf1{
		CatalogsRetailItemErrorResponse: v,
	}
}


// Unmarshal JSON data into one of the pointers in the struct
func (dst *ItemResponseAnyOf1) UnmarshalJSON(data []byte) error {
	var err error
	match := 0
	// try to unmarshal data into CatalogsHotelItemErrorResponse
	err = newStrictDecoder(data).Decode(&dst.CatalogsHotelItemErrorResponse)
	if err == nil {
		jsonCatalogsHotelItemErrorResponse, _ := json.Marshal(dst.CatalogsHotelItemErrorResponse)
		if string(jsonCatalogsHotelItemErrorResponse) == "{}" { // empty struct
			dst.CatalogsHotelItemErrorResponse = nil
		} else {
			match++
		}
	} else {
		dst.CatalogsHotelItemErrorResponse = nil
	}

	// try to unmarshal data into CatalogsRetailItemErrorResponse
	err = newStrictDecoder(data).Decode(&dst.CatalogsRetailItemErrorResponse)
	if err == nil {
		jsonCatalogsRetailItemErrorResponse, _ := json.Marshal(dst.CatalogsRetailItemErrorResponse)
		if string(jsonCatalogsRetailItemErrorResponse) == "{}" { // empty struct
			dst.CatalogsRetailItemErrorResponse = nil
		} else {
			match++
		}
	} else {
		dst.CatalogsRetailItemErrorResponse = nil
	}

	if match > 1 { // more than 1 match
		// reset to nil
		dst.CatalogsHotelItemErrorResponse = nil
		dst.CatalogsRetailItemErrorResponse = nil

		return fmt.Errorf("data matches more than one schema in oneOf(ItemResponseAnyOf1)")
	} else if match == 1 {
		return nil // exactly one match
	} else { // no match
		return fmt.Errorf("data failed to match schemas in oneOf(ItemResponseAnyOf1)")
	}
}

// Marshal data from the first non-nil pointers in the struct to JSON
func (src ItemResponseAnyOf1) MarshalJSON() ([]byte, error) {
	if src.CatalogsHotelItemErrorResponse != nil {
		return json.Marshal(&src.CatalogsHotelItemErrorResponse)
	}

	if src.CatalogsRetailItemErrorResponse != nil {
		return json.Marshal(&src.CatalogsRetailItemErrorResponse)
	}

	return nil, nil // no data in oneOf schemas
}

// Get the actual instance
func (obj *ItemResponseAnyOf1) GetActualInstance() (interface{}) {
	if obj == nil {
		return nil
	}
	if obj.CatalogsHotelItemErrorResponse != nil {
		return obj.CatalogsHotelItemErrorResponse
	}

	if obj.CatalogsRetailItemErrorResponse != nil {
		return obj.CatalogsRetailItemErrorResponse
	}

	// all schemas are nil
	return nil
}

type NullableItemResponseAnyOf1 struct {
	value *ItemResponseAnyOf1
	isSet bool
}

func (v NullableItemResponseAnyOf1) Get() *ItemResponseAnyOf1 {
	return v.value
}

func (v *NullableItemResponseAnyOf1) Set(val *ItemResponseAnyOf1) {
	v.value = val
	v.isSet = true
}

func (v NullableItemResponseAnyOf1) IsSet() bool {
	return v.isSet
}

func (v *NullableItemResponseAnyOf1) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableItemResponseAnyOf1(val *ItemResponseAnyOf1) *NullableItemResponseAnyOf1 {
	return &NullableItemResponseAnyOf1{value: val, isSet: true}
}

func (v NullableItemResponseAnyOf1) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableItemResponseAnyOf1) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

