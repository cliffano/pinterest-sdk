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

// checks if the ItemCreateBatchRecord type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &ItemCreateBatchRecord{}

// ItemCreateBatchRecord Object describing an item batch record to create items
type ItemCreateBatchRecord struct {
	// The catalog item id in the merchant namespace
	ItemId *string `json:"item_id,omitempty"`
	Attributes *ItemAttributes `json:"attributes,omitempty"`
}

// NewItemCreateBatchRecord instantiates a new ItemCreateBatchRecord object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewItemCreateBatchRecord() *ItemCreateBatchRecord {
	this := ItemCreateBatchRecord{}
	return &this
}

// NewItemCreateBatchRecordWithDefaults instantiates a new ItemCreateBatchRecord object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewItemCreateBatchRecordWithDefaults() *ItemCreateBatchRecord {
	this := ItemCreateBatchRecord{}
	return &this
}

// GetItemId returns the ItemId field value if set, zero value otherwise.
func (o *ItemCreateBatchRecord) GetItemId() string {
	if o == nil || IsNil(o.ItemId) {
		var ret string
		return ret
	}
	return *o.ItemId
}

// GetItemIdOk returns a tuple with the ItemId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ItemCreateBatchRecord) GetItemIdOk() (*string, bool) {
	if o == nil || IsNil(o.ItemId) {
		return nil, false
	}
	return o.ItemId, true
}

// HasItemId returns a boolean if a field has been set.
func (o *ItemCreateBatchRecord) HasItemId() bool {
	if o != nil && !IsNil(o.ItemId) {
		return true
	}

	return false
}

// SetItemId gets a reference to the given string and assigns it to the ItemId field.
func (o *ItemCreateBatchRecord) SetItemId(v string) {
	o.ItemId = &v
}

// GetAttributes returns the Attributes field value if set, zero value otherwise.
func (o *ItemCreateBatchRecord) GetAttributes() ItemAttributes {
	if o == nil || IsNil(o.Attributes) {
		var ret ItemAttributes
		return ret
	}
	return *o.Attributes
}

// GetAttributesOk returns a tuple with the Attributes field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ItemCreateBatchRecord) GetAttributesOk() (*ItemAttributes, bool) {
	if o == nil || IsNil(o.Attributes) {
		return nil, false
	}
	return o.Attributes, true
}

// HasAttributes returns a boolean if a field has been set.
func (o *ItemCreateBatchRecord) HasAttributes() bool {
	if o != nil && !IsNil(o.Attributes) {
		return true
	}

	return false
}

// SetAttributes gets a reference to the given ItemAttributes and assigns it to the Attributes field.
func (o *ItemCreateBatchRecord) SetAttributes(v ItemAttributes) {
	o.Attributes = &v
}

func (o ItemCreateBatchRecord) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o ItemCreateBatchRecord) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.ItemId) {
		toSerialize["item_id"] = o.ItemId
	}
	if !IsNil(o.Attributes) {
		toSerialize["attributes"] = o.Attributes
	}
	return toSerialize, nil
}

type NullableItemCreateBatchRecord struct {
	value *ItemCreateBatchRecord
	isSet bool
}

func (v NullableItemCreateBatchRecord) Get() *ItemCreateBatchRecord {
	return v.value
}

func (v *NullableItemCreateBatchRecord) Set(val *ItemCreateBatchRecord) {
	v.value = val
	v.isSet = true
}

func (v NullableItemCreateBatchRecord) IsSet() bool {
	return v.isSet
}

func (v *NullableItemCreateBatchRecord) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableItemCreateBatchRecord(val *ItemCreateBatchRecord) *NullableItemCreateBatchRecord {
	return &NullableItemCreateBatchRecord{value: val, isSet: true}
}

func (v NullableItemCreateBatchRecord) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableItemCreateBatchRecord) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


