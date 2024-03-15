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

// checks if the ProductType4Filter type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &ProductType4Filter{}

// ProductType4Filter struct for ProductType4Filter
type ProductType4Filter struct {
	PRODUCTTYPE4 CatalogsProductGroupMultipleStringListCriteria `json:"PRODUCT_TYPE_4"`
}

type _ProductType4Filter ProductType4Filter

// NewProductType4Filter instantiates a new ProductType4Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewProductType4Filter(pRODUCTTYPE4 CatalogsProductGroupMultipleStringListCriteria) *ProductType4Filter {
	this := ProductType4Filter{}
	this.PRODUCTTYPE4 = pRODUCTTYPE4
	return &this
}

// NewProductType4FilterWithDefaults instantiates a new ProductType4Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewProductType4FilterWithDefaults() *ProductType4Filter {
	this := ProductType4Filter{}
	return &this
}

// GetPRODUCTTYPE4 returns the PRODUCTTYPE4 field value
func (o *ProductType4Filter) GetPRODUCTTYPE4() CatalogsProductGroupMultipleStringListCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringListCriteria
		return ret
	}

	return o.PRODUCTTYPE4
}

// GetPRODUCTTYPE4Ok returns a tuple with the PRODUCTTYPE4 field value
// and a boolean to check if the value has been set.
func (o *ProductType4Filter) GetPRODUCTTYPE4Ok() (CatalogsProductGroupMultipleStringListCriteria, bool) {
	if o == nil {
		return CatalogsProductGroupMultipleStringListCriteria{}, false
	}
	return o.PRODUCTTYPE4, true
}

// SetPRODUCTTYPE4 sets field value
func (o *ProductType4Filter) SetPRODUCTTYPE4(v CatalogsProductGroupMultipleStringListCriteria) {
	o.PRODUCTTYPE4 = v
}

func (o ProductType4Filter) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o ProductType4Filter) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["PRODUCT_TYPE_4"] = o.PRODUCTTYPE4
	return toSerialize, nil
}

func (o *ProductType4Filter) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"PRODUCT_TYPE_4",
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

	varProductType4Filter := _ProductType4Filter{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varProductType4Filter)

	if err != nil {
		return err
	}

	*o = ProductType4Filter(varProductType4Filter)

	return err
}

type NullableProductType4Filter struct {
	value *ProductType4Filter
	isSet bool
}

func (v NullableProductType4Filter) Get() *ProductType4Filter {
	return v.value
}

func (v *NullableProductType4Filter) Set(val *ProductType4Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableProductType4Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableProductType4Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableProductType4Filter(val *ProductType4Filter) *NullableProductType4Filter {
	return &NullableProductType4Filter{value: val, isSet: true}
}

func (v NullableProductType4Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableProductType4Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


