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

// CatalogsVerticalFeedsUpdateRequest - Request object for updating a feed.
type CatalogsVerticalFeedsUpdateRequest struct {
	CatalogsHotelFeedsUpdateRequest *CatalogsHotelFeedsUpdateRequest
	CatalogsRetailFeedsUpdateRequest *CatalogsRetailFeedsUpdateRequest
}

// CatalogsHotelFeedsUpdateRequestAsCatalogsVerticalFeedsUpdateRequest is a convenience function that returns CatalogsHotelFeedsUpdateRequest wrapped in CatalogsVerticalFeedsUpdateRequest
func CatalogsHotelFeedsUpdateRequestAsCatalogsVerticalFeedsUpdateRequest(v *CatalogsHotelFeedsUpdateRequest) CatalogsVerticalFeedsUpdateRequest {
	return CatalogsVerticalFeedsUpdateRequest{
		CatalogsHotelFeedsUpdateRequest: v,
	}
}

// CatalogsRetailFeedsUpdateRequestAsCatalogsVerticalFeedsUpdateRequest is a convenience function that returns CatalogsRetailFeedsUpdateRequest wrapped in CatalogsVerticalFeedsUpdateRequest
func CatalogsRetailFeedsUpdateRequestAsCatalogsVerticalFeedsUpdateRequest(v *CatalogsRetailFeedsUpdateRequest) CatalogsVerticalFeedsUpdateRequest {
	return CatalogsVerticalFeedsUpdateRequest{
		CatalogsRetailFeedsUpdateRequest: v,
	}
}


// Unmarshal JSON data into one of the pointers in the struct
func (dst *CatalogsVerticalFeedsUpdateRequest) UnmarshalJSON(data []byte) error {
	var err error
	match := 0
	// try to unmarshal data into CatalogsHotelFeedsUpdateRequest
	err = newStrictDecoder(data).Decode(&dst.CatalogsHotelFeedsUpdateRequest)
	if err == nil {
		jsonCatalogsHotelFeedsUpdateRequest, _ := json.Marshal(dst.CatalogsHotelFeedsUpdateRequest)
		if string(jsonCatalogsHotelFeedsUpdateRequest) == "{}" { // empty struct
			dst.CatalogsHotelFeedsUpdateRequest = nil
		} else {
			match++
		}
	} else {
		dst.CatalogsHotelFeedsUpdateRequest = nil
	}

	// try to unmarshal data into CatalogsRetailFeedsUpdateRequest
	err = newStrictDecoder(data).Decode(&dst.CatalogsRetailFeedsUpdateRequest)
	if err == nil {
		jsonCatalogsRetailFeedsUpdateRequest, _ := json.Marshal(dst.CatalogsRetailFeedsUpdateRequest)
		if string(jsonCatalogsRetailFeedsUpdateRequest) == "{}" { // empty struct
			dst.CatalogsRetailFeedsUpdateRequest = nil
		} else {
			match++
		}
	} else {
		dst.CatalogsRetailFeedsUpdateRequest = nil
	}

	if match > 1 { // more than 1 match
		// reset to nil
		dst.CatalogsHotelFeedsUpdateRequest = nil
		dst.CatalogsRetailFeedsUpdateRequest = nil

		return fmt.Errorf("data matches more than one schema in oneOf(CatalogsVerticalFeedsUpdateRequest)")
	} else if match == 1 {
		return nil // exactly one match
	} else { // no match
		return fmt.Errorf("data failed to match schemas in oneOf(CatalogsVerticalFeedsUpdateRequest)")
	}
}

// Marshal data from the first non-nil pointers in the struct to JSON
func (src CatalogsVerticalFeedsUpdateRequest) MarshalJSON() ([]byte, error) {
	if src.CatalogsHotelFeedsUpdateRequest != nil {
		return json.Marshal(&src.CatalogsHotelFeedsUpdateRequest)
	}

	if src.CatalogsRetailFeedsUpdateRequest != nil {
		return json.Marshal(&src.CatalogsRetailFeedsUpdateRequest)
	}

	return nil, nil // no data in oneOf schemas
}

// Get the actual instance
func (obj *CatalogsVerticalFeedsUpdateRequest) GetActualInstance() (interface{}) {
	if obj == nil {
		return nil
	}
	if obj.CatalogsHotelFeedsUpdateRequest != nil {
		return obj.CatalogsHotelFeedsUpdateRequest
	}

	if obj.CatalogsRetailFeedsUpdateRequest != nil {
		return obj.CatalogsRetailFeedsUpdateRequest
	}

	// all schemas are nil
	return nil
}

type NullableCatalogsVerticalFeedsUpdateRequest struct {
	value *CatalogsVerticalFeedsUpdateRequest
	isSet bool
}

func (v NullableCatalogsVerticalFeedsUpdateRequest) Get() *CatalogsVerticalFeedsUpdateRequest {
	return v.value
}

func (v *NullableCatalogsVerticalFeedsUpdateRequest) Set(val *CatalogsVerticalFeedsUpdateRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsVerticalFeedsUpdateRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsVerticalFeedsUpdateRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsVerticalFeedsUpdateRequest(val *CatalogsVerticalFeedsUpdateRequest) *NullableCatalogsVerticalFeedsUpdateRequest {
	return &NullableCatalogsVerticalFeedsUpdateRequest{value: val, isSet: true}
}

func (v NullableCatalogsVerticalFeedsUpdateRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsVerticalFeedsUpdateRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


