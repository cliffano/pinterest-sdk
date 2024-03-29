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

// checks if the CatalogsProduct type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsProduct{}

// CatalogsProduct struct for CatalogsProduct
type CatalogsProduct struct {
	Metadata CatalogsProductMetadata `json:"metadata"`
	Pin NullablePin `json:"pin"`
}

type _CatalogsProduct CatalogsProduct

// NewCatalogsProduct instantiates a new CatalogsProduct object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsProduct(metadata CatalogsProductMetadata, pin NullablePin) *CatalogsProduct {
	this := CatalogsProduct{}
	this.Metadata = metadata
	this.Pin = pin
	return &this
}

// NewCatalogsProductWithDefaults instantiates a new CatalogsProduct object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsProductWithDefaults() *CatalogsProduct {
	this := CatalogsProduct{}
	return &this
}

// GetMetadata returns the Metadata field value
func (o *CatalogsProduct) GetMetadata() CatalogsProductMetadata {
	if o == nil {
		var ret CatalogsProductMetadata
		return ret
	}

	return o.Metadata
}

// GetMetadataOk returns a tuple with the Metadata field value
// and a boolean to check if the value has been set.
func (o *CatalogsProduct) GetMetadataOk() (*CatalogsProductMetadata, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Metadata, true
}

// SetMetadata sets field value
func (o *CatalogsProduct) SetMetadata(v CatalogsProductMetadata) {
	o.Metadata = v
}

// GetPin returns the Pin field value
// If the value is explicit nil, the zero value for Pin will be returned
func (o *CatalogsProduct) GetPin() Pin {
	if o == nil || o.Pin.Get() == nil {
		var ret Pin
		return ret
	}

	return *o.Pin.Get()
}

// GetPinOk returns a tuple with the Pin field value
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsProduct) GetPinOk() (*Pin, bool) {
	if o == nil {
		return nil, false
	}
	return o.Pin.Get(), o.Pin.IsSet()
}

// SetPin sets field value
func (o *CatalogsProduct) SetPin(v Pin) {
	o.Pin.Set(&v)
}

func (o CatalogsProduct) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsProduct) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["metadata"] = o.Metadata
	toSerialize["pin"] = o.Pin.Get()
	return toSerialize, nil
}

func (o *CatalogsProduct) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"metadata",
		"pin",
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

	varCatalogsProduct := _CatalogsProduct{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCatalogsProduct)

	if err != nil {
		return err
	}

	*o = CatalogsProduct(varCatalogsProduct)

	return err
}

type NullableCatalogsProduct struct {
	value *CatalogsProduct
	isSet bool
}

func (v NullableCatalogsProduct) Get() *CatalogsProduct {
	return v.value
}

func (v *NullableCatalogsProduct) Set(val *CatalogsProduct) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsProduct) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsProduct) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsProduct(val *CatalogsProduct) *NullableCatalogsProduct {
	return &NullableCatalogsProduct{value: val, isSet: true}
}

func (v NullableCatalogsProduct) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsProduct) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


