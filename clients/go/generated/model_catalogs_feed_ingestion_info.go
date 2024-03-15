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
)

// checks if the CatalogsFeedIngestionInfo type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsFeedIngestionInfo{}

// CatalogsFeedIngestionInfo struct for CatalogsFeedIngestionInfo
type CatalogsFeedIngestionInfo struct {
	// The number of ingested products that are in stock.
	IN_STOCK *int32 `json:"IN_STOCK,omitempty"`
	// The number of ingested products that are in out of stock.
	OUT_OF_STOCK *int32 `json:"OUT_OF_STOCK,omitempty"`
	// The number of ingested products that are in preorder.
	PREORDER *int32 `json:"PREORDER,omitempty"`
}

// NewCatalogsFeedIngestionInfo instantiates a new CatalogsFeedIngestionInfo object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsFeedIngestionInfo() *CatalogsFeedIngestionInfo {
	this := CatalogsFeedIngestionInfo{}
	return &this
}

// NewCatalogsFeedIngestionInfoWithDefaults instantiates a new CatalogsFeedIngestionInfo object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsFeedIngestionInfoWithDefaults() *CatalogsFeedIngestionInfo {
	this := CatalogsFeedIngestionInfo{}
	return &this
}

// GetIN_STOCK returns the IN_STOCK field value if set, zero value otherwise.
func (o *CatalogsFeedIngestionInfo) GetIN_STOCK() int32 {
	if o == nil || IsNil(o.IN_STOCK) {
		var ret int32
		return ret
	}
	return *o.IN_STOCK
}

// GetIN_STOCKOk returns a tuple with the IN_STOCK field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionInfo) GetIN_STOCKOk() (*int32, bool) {
	if o == nil || IsNil(o.IN_STOCK) {
		return nil, false
	}
	return o.IN_STOCK, true
}

// HasIN_STOCK returns a boolean if a field has been set.
func (o *CatalogsFeedIngestionInfo) HasIN_STOCK() bool {
	if o != nil && !IsNil(o.IN_STOCK) {
		return true
	}

	return false
}

// SetIN_STOCK gets a reference to the given int32 and assigns it to the IN_STOCK field.
func (o *CatalogsFeedIngestionInfo) SetIN_STOCK(v int32) {
	o.IN_STOCK = &v
}

// GetOUT_OF_STOCK returns the OUT_OF_STOCK field value if set, zero value otherwise.
func (o *CatalogsFeedIngestionInfo) GetOUT_OF_STOCK() int32 {
	if o == nil || IsNil(o.OUT_OF_STOCK) {
		var ret int32
		return ret
	}
	return *o.OUT_OF_STOCK
}

// GetOUT_OF_STOCKOk returns a tuple with the OUT_OF_STOCK field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionInfo) GetOUT_OF_STOCKOk() (*int32, bool) {
	if o == nil || IsNil(o.OUT_OF_STOCK) {
		return nil, false
	}
	return o.OUT_OF_STOCK, true
}

// HasOUT_OF_STOCK returns a boolean if a field has been set.
func (o *CatalogsFeedIngestionInfo) HasOUT_OF_STOCK() bool {
	if o != nil && !IsNil(o.OUT_OF_STOCK) {
		return true
	}

	return false
}

// SetOUT_OF_STOCK gets a reference to the given int32 and assigns it to the OUT_OF_STOCK field.
func (o *CatalogsFeedIngestionInfo) SetOUT_OF_STOCK(v int32) {
	o.OUT_OF_STOCK = &v
}

// GetPREORDER returns the PREORDER field value if set, zero value otherwise.
func (o *CatalogsFeedIngestionInfo) GetPREORDER() int32 {
	if o == nil || IsNil(o.PREORDER) {
		var ret int32
		return ret
	}
	return *o.PREORDER
}

// GetPREORDEROk returns a tuple with the PREORDER field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionInfo) GetPREORDEROk() (*int32, bool) {
	if o == nil || IsNil(o.PREORDER) {
		return nil, false
	}
	return o.PREORDER, true
}

// HasPREORDER returns a boolean if a field has been set.
func (o *CatalogsFeedIngestionInfo) HasPREORDER() bool {
	if o != nil && !IsNil(o.PREORDER) {
		return true
	}

	return false
}

// SetPREORDER gets a reference to the given int32 and assigns it to the PREORDER field.
func (o *CatalogsFeedIngestionInfo) SetPREORDER(v int32) {
	o.PREORDER = &v
}

func (o CatalogsFeedIngestionInfo) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsFeedIngestionInfo) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.IN_STOCK) {
		toSerialize["IN_STOCK"] = o.IN_STOCK
	}
	if !IsNil(o.OUT_OF_STOCK) {
		toSerialize["OUT_OF_STOCK"] = o.OUT_OF_STOCK
	}
	if !IsNil(o.PREORDER) {
		toSerialize["PREORDER"] = o.PREORDER
	}
	return toSerialize, nil
}

type NullableCatalogsFeedIngestionInfo struct {
	value *CatalogsFeedIngestionInfo
	isSet bool
}

func (v NullableCatalogsFeedIngestionInfo) Get() *CatalogsFeedIngestionInfo {
	return v.value
}

func (v *NullableCatalogsFeedIngestionInfo) Set(val *CatalogsFeedIngestionInfo) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFeedIngestionInfo) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFeedIngestionInfo) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFeedIngestionInfo(val *CatalogsFeedIngestionInfo) *NullableCatalogsFeedIngestionInfo {
	return &NullableCatalogsFeedIngestionInfo{value: val, isSet: true}
}

func (v NullableCatalogsFeedIngestionInfo) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFeedIngestionInfo) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


