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

// CatalogsFeed - Catalogs Feed object
type CatalogsFeed struct {
	CatalogsHotelFeed *CatalogsHotelFeed
	CatalogsRetailFeed *CatalogsRetailFeed
}

// CatalogsHotelFeedAsCatalogsFeed is a convenience function that returns CatalogsHotelFeed wrapped in CatalogsFeed
func CatalogsHotelFeedAsCatalogsFeed(v *CatalogsHotelFeed) CatalogsFeed {
	return CatalogsFeed{
		CatalogsHotelFeed: v,
	}
}

// CatalogsRetailFeedAsCatalogsFeed is a convenience function that returns CatalogsRetailFeed wrapped in CatalogsFeed
func CatalogsRetailFeedAsCatalogsFeed(v *CatalogsRetailFeed) CatalogsFeed {
	return CatalogsFeed{
		CatalogsRetailFeed: v,
	}
}


// Unmarshal JSON data into one of the pointers in the struct
func (dst *CatalogsFeed) UnmarshalJSON(data []byte) error {
	var err error
	match := 0
	// try to unmarshal data into CatalogsHotelFeed
	err = newStrictDecoder(data).Decode(&dst.CatalogsHotelFeed)
	if err == nil {
		jsonCatalogsHotelFeed, _ := json.Marshal(dst.CatalogsHotelFeed)
		if string(jsonCatalogsHotelFeed) == "{}" { // empty struct
			dst.CatalogsHotelFeed = nil
		} else {
			match++
		}
	} else {
		dst.CatalogsHotelFeed = nil
	}

	// try to unmarshal data into CatalogsRetailFeed
	err = newStrictDecoder(data).Decode(&dst.CatalogsRetailFeed)
	if err == nil {
		jsonCatalogsRetailFeed, _ := json.Marshal(dst.CatalogsRetailFeed)
		if string(jsonCatalogsRetailFeed) == "{}" { // empty struct
			dst.CatalogsRetailFeed = nil
		} else {
			match++
		}
	} else {
		dst.CatalogsRetailFeed = nil
	}

	if match > 1 { // more than 1 match
		// reset to nil
		dst.CatalogsHotelFeed = nil
		dst.CatalogsRetailFeed = nil

		return fmt.Errorf("data matches more than one schema in oneOf(CatalogsFeed)")
	} else if match == 1 {
		return nil // exactly one match
	} else { // no match
		return fmt.Errorf("data failed to match schemas in oneOf(CatalogsFeed)")
	}
}

// Marshal data from the first non-nil pointers in the struct to JSON
func (src CatalogsFeed) MarshalJSON() ([]byte, error) {
	if src.CatalogsHotelFeed != nil {
		return json.Marshal(&src.CatalogsHotelFeed)
	}

	if src.CatalogsRetailFeed != nil {
		return json.Marshal(&src.CatalogsRetailFeed)
	}

	return nil, nil // no data in oneOf schemas
}

// Get the actual instance
func (obj *CatalogsFeed) GetActualInstance() (interface{}) {
	if obj == nil {
		return nil
	}
	if obj.CatalogsHotelFeed != nil {
		return obj.CatalogsHotelFeed
	}

	if obj.CatalogsRetailFeed != nil {
		return obj.CatalogsRetailFeed
	}

	// all schemas are nil
	return nil
}

type NullableCatalogsFeed struct {
	value *CatalogsFeed
	isSet bool
}

func (v NullableCatalogsFeed) Get() *CatalogsFeed {
	return v.value
}

func (v *NullableCatalogsFeed) Set(val *CatalogsFeed) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFeed) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFeed) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFeed(val *CatalogsFeed) *NullableCatalogsFeed {
	return &NullableCatalogsFeed{value: val, isSet: true}
}

func (v NullableCatalogsFeed) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFeed) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


