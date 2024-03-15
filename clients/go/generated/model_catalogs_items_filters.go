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

// CatalogsItemsFilters - struct for CatalogsItemsFilters
type CatalogsItemsFilters struct {
	CatalogsHotelItemsFilter *CatalogsHotelItemsFilter
	CatalogsRetailItemsFilter *CatalogsRetailItemsFilter
}

// CatalogsHotelItemsFilterAsCatalogsItemsFilters is a convenience function that returns CatalogsHotelItemsFilter wrapped in CatalogsItemsFilters
func CatalogsHotelItemsFilterAsCatalogsItemsFilters(v *CatalogsHotelItemsFilter) CatalogsItemsFilters {
	return CatalogsItemsFilters{
		CatalogsHotelItemsFilter: v,
	}
}

// CatalogsRetailItemsFilterAsCatalogsItemsFilters is a convenience function that returns CatalogsRetailItemsFilter wrapped in CatalogsItemsFilters
func CatalogsRetailItemsFilterAsCatalogsItemsFilters(v *CatalogsRetailItemsFilter) CatalogsItemsFilters {
	return CatalogsItemsFilters{
		CatalogsRetailItemsFilter: v,
	}
}


// Unmarshal JSON data into one of the pointers in the struct
func (dst *CatalogsItemsFilters) UnmarshalJSON(data []byte) error {
	var err error
	match := 0
	// try to unmarshal data into CatalogsHotelItemsFilter
	err = newStrictDecoder(data).Decode(&dst.CatalogsHotelItemsFilter)
	if err == nil {
		jsonCatalogsHotelItemsFilter, _ := json.Marshal(dst.CatalogsHotelItemsFilter)
		if string(jsonCatalogsHotelItemsFilter) == "{}" { // empty struct
			dst.CatalogsHotelItemsFilter = nil
		} else {
			match++
		}
	} else {
		dst.CatalogsHotelItemsFilter = nil
	}

	// try to unmarshal data into CatalogsRetailItemsFilter
	err = newStrictDecoder(data).Decode(&dst.CatalogsRetailItemsFilter)
	if err == nil {
		jsonCatalogsRetailItemsFilter, _ := json.Marshal(dst.CatalogsRetailItemsFilter)
		if string(jsonCatalogsRetailItemsFilter) == "{}" { // empty struct
			dst.CatalogsRetailItemsFilter = nil
		} else {
			match++
		}
	} else {
		dst.CatalogsRetailItemsFilter = nil
	}

	if match > 1 { // more than 1 match
		// reset to nil
		dst.CatalogsHotelItemsFilter = nil
		dst.CatalogsRetailItemsFilter = nil

		return fmt.Errorf("data matches more than one schema in oneOf(CatalogsItemsFilters)")
	} else if match == 1 {
		return nil // exactly one match
	} else { // no match
		return fmt.Errorf("data failed to match schemas in oneOf(CatalogsItemsFilters)")
	}
}

// Marshal data from the first non-nil pointers in the struct to JSON
func (src CatalogsItemsFilters) MarshalJSON() ([]byte, error) {
	if src.CatalogsHotelItemsFilter != nil {
		return json.Marshal(&src.CatalogsHotelItemsFilter)
	}

	if src.CatalogsRetailItemsFilter != nil {
		return json.Marshal(&src.CatalogsRetailItemsFilter)
	}

	return nil, nil // no data in oneOf schemas
}

// Get the actual instance
func (obj *CatalogsItemsFilters) GetActualInstance() (interface{}) {
	if obj == nil {
		return nil
	}
	if obj.CatalogsHotelItemsFilter != nil {
		return obj.CatalogsHotelItemsFilter
	}

	if obj.CatalogsRetailItemsFilter != nil {
		return obj.CatalogsRetailItemsFilter
	}

	// all schemas are nil
	return nil
}

type NullableCatalogsItemsFilters struct {
	value *CatalogsItemsFilters
	isSet bool
}

func (v NullableCatalogsItemsFilters) Get() *CatalogsItemsFilters {
	return v.value
}

func (v *NullableCatalogsItemsFilters) Set(val *CatalogsItemsFilters) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsItemsFilters) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsItemsFilters) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsItemsFilters(val *CatalogsItemsFilters) *NullableCatalogsItemsFilters {
	return &NullableCatalogsItemsFilters{value: val, isSet: true}
}

func (v NullableCatalogsItemsFilters) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsItemsFilters) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

