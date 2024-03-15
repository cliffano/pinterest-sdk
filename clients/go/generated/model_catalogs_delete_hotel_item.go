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

// checks if the CatalogsDeleteHotelItem type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsDeleteHotelItem{}

// CatalogsDeleteHotelItem A hotel item to be deleted
type CatalogsDeleteHotelItem struct {
	// The catalog hotel id in the merchant namespace
	HotelId string `json:"hotel_id"`
	Operation string `json:"operation"`
}

type _CatalogsDeleteHotelItem CatalogsDeleteHotelItem

// NewCatalogsDeleteHotelItem instantiates a new CatalogsDeleteHotelItem object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsDeleteHotelItem(hotelId string, operation string) *CatalogsDeleteHotelItem {
	this := CatalogsDeleteHotelItem{}
	this.HotelId = hotelId
	this.Operation = operation
	return &this
}

// NewCatalogsDeleteHotelItemWithDefaults instantiates a new CatalogsDeleteHotelItem object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsDeleteHotelItemWithDefaults() *CatalogsDeleteHotelItem {
	this := CatalogsDeleteHotelItem{}
	return &this
}

// GetHotelId returns the HotelId field value
func (o *CatalogsDeleteHotelItem) GetHotelId() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.HotelId
}

// GetHotelIdOk returns a tuple with the HotelId field value
// and a boolean to check if the value has been set.
func (o *CatalogsDeleteHotelItem) GetHotelIdOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.HotelId, true
}

// SetHotelId sets field value
func (o *CatalogsDeleteHotelItem) SetHotelId(v string) {
	o.HotelId = v
}

// GetOperation returns the Operation field value
func (o *CatalogsDeleteHotelItem) GetOperation() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Operation
}

// GetOperationOk returns a tuple with the Operation field value
// and a boolean to check if the value has been set.
func (o *CatalogsDeleteHotelItem) GetOperationOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Operation, true
}

// SetOperation sets field value
func (o *CatalogsDeleteHotelItem) SetOperation(v string) {
	o.Operation = v
}

func (o CatalogsDeleteHotelItem) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsDeleteHotelItem) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["hotel_id"] = o.HotelId
	toSerialize["operation"] = o.Operation
	return toSerialize, nil
}

func (o *CatalogsDeleteHotelItem) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"hotel_id",
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

	varCatalogsDeleteHotelItem := _CatalogsDeleteHotelItem{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCatalogsDeleteHotelItem)

	if err != nil {
		return err
	}

	*o = CatalogsDeleteHotelItem(varCatalogsDeleteHotelItem)

	return err
}

type NullableCatalogsDeleteHotelItem struct {
	value *CatalogsDeleteHotelItem
	isSet bool
}

func (v NullableCatalogsDeleteHotelItem) Get() *CatalogsDeleteHotelItem {
	return v.value
}

func (v *NullableCatalogsDeleteHotelItem) Set(val *CatalogsDeleteHotelItem) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsDeleteHotelItem) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsDeleteHotelItem) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsDeleteHotelItem(val *CatalogsDeleteHotelItem) *NullableCatalogsDeleteHotelItem {
	return &NullableCatalogsDeleteHotelItem{value: val, isSet: true}
}

func (v NullableCatalogsDeleteHotelItem) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsDeleteHotelItem) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


