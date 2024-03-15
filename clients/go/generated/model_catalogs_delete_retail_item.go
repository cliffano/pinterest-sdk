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
	"bytes"
	"fmt"
)

// checks if the CatalogsDeleteRetailItem type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsDeleteRetailItem{}

// CatalogsDeleteRetailItem An item to be deleted
type CatalogsDeleteRetailItem struct {
	// The catalog item id in the merchant namespace
	ItemId string `json:"item_id"`
	Operation string `json:"operation"`
}

type _CatalogsDeleteRetailItem CatalogsDeleteRetailItem

// NewCatalogsDeleteRetailItem instantiates a new CatalogsDeleteRetailItem object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsDeleteRetailItem(itemId string, operation string) *CatalogsDeleteRetailItem {
	this := CatalogsDeleteRetailItem{}
	this.ItemId = itemId
	this.Operation = operation
	return &this
}

// NewCatalogsDeleteRetailItemWithDefaults instantiates a new CatalogsDeleteRetailItem object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsDeleteRetailItemWithDefaults() *CatalogsDeleteRetailItem {
	this := CatalogsDeleteRetailItem{}
	return &this
}

// GetItemId returns the ItemId field value
func (o *CatalogsDeleteRetailItem) GetItemId() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.ItemId
}

// GetItemIdOk returns a tuple with the ItemId field value
// and a boolean to check if the value has been set.
func (o *CatalogsDeleteRetailItem) GetItemIdOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.ItemId, true
}

// SetItemId sets field value
func (o *CatalogsDeleteRetailItem) SetItemId(v string) {
	o.ItemId = v
}

// GetOperation returns the Operation field value
func (o *CatalogsDeleteRetailItem) GetOperation() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Operation
}

// GetOperationOk returns a tuple with the Operation field value
// and a boolean to check if the value has been set.
func (o *CatalogsDeleteRetailItem) GetOperationOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Operation, true
}

// SetOperation sets field value
func (o *CatalogsDeleteRetailItem) SetOperation(v string) {
	o.Operation = v
}

func (o CatalogsDeleteRetailItem) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsDeleteRetailItem) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["item_id"] = o.ItemId
	toSerialize["operation"] = o.Operation
	return toSerialize, nil
}

func (o *CatalogsDeleteRetailItem) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"item_id",
		"operation",
	}

	allProperties := make(map[string]interface{})

	err = json.Unmarshal(data, &allProperties)

	if err != nil {
		return err;
	}

	for _, requiredProperty := range(requiredProperties) {
		if _, exists := allProperties[requiredProperty]; !exists {
			return fmt.Errorf("no value given for required property %v", requiredProperty)
		}
	}

	varCatalogsDeleteRetailItem := _CatalogsDeleteRetailItem{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCatalogsDeleteRetailItem)

	if err != nil {
		return err
	}

	*o = CatalogsDeleteRetailItem(varCatalogsDeleteRetailItem)

	return err
}

type NullableCatalogsDeleteRetailItem struct {
	value *CatalogsDeleteRetailItem
	isSet bool
}

func (v NullableCatalogsDeleteRetailItem) Get() *CatalogsDeleteRetailItem {
	return v.value
}

func (v *NullableCatalogsDeleteRetailItem) Set(val *CatalogsDeleteRetailItem) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsDeleteRetailItem) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsDeleteRetailItem) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsDeleteRetailItem(val *CatalogsDeleteRetailItem) *NullableCatalogsDeleteRetailItem {
	return &NullableCatalogsDeleteRetailItem{value: val, isSet: true}
}

func (v NullableCatalogsDeleteRetailItem) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsDeleteRetailItem) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


