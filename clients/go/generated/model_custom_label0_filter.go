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

// checks if the CustomLabel0Filter type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CustomLabel0Filter{}

// CustomLabel0Filter struct for CustomLabel0Filter
type CustomLabel0Filter struct {
	CUSTOMLABEL0 CatalogsProductGroupMultipleStringCriteria `json:"CUSTOM_LABEL_0"`
}

type _CustomLabel0Filter CustomLabel0Filter

// NewCustomLabel0Filter instantiates a new CustomLabel0Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCustomLabel0Filter(cUSTOMLABEL0 CatalogsProductGroupMultipleStringCriteria) *CustomLabel0Filter {
	this := CustomLabel0Filter{}
	this.CUSTOMLABEL0 = cUSTOMLABEL0
	return &this
}

// NewCustomLabel0FilterWithDefaults instantiates a new CustomLabel0Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCustomLabel0FilterWithDefaults() *CustomLabel0Filter {
	this := CustomLabel0Filter{}
	return &this
}

// GetCUSTOMLABEL0 returns the CUSTOMLABEL0 field value
func (o *CustomLabel0Filter) GetCUSTOMLABEL0() CatalogsProductGroupMultipleStringCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringCriteria
		return ret
	}

	return o.CUSTOMLABEL0
}

// GetCUSTOMLABEL0Ok returns a tuple with the CUSTOMLABEL0 field value
// and a boolean to check if the value has been set.
func (o *CustomLabel0Filter) GetCUSTOMLABEL0Ok() (CatalogsProductGroupMultipleStringCriteria, bool) {
	if o == nil {
		return CatalogsProductGroupMultipleStringCriteria{}, false
	}
	return o.CUSTOMLABEL0, true
}

// SetCUSTOMLABEL0 sets field value
func (o *CustomLabel0Filter) SetCUSTOMLABEL0(v CatalogsProductGroupMultipleStringCriteria) {
	o.CUSTOMLABEL0 = v
}

func (o CustomLabel0Filter) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CustomLabel0Filter) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["CUSTOM_LABEL_0"] = o.CUSTOMLABEL0
	return toSerialize, nil
}

func (o *CustomLabel0Filter) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"CUSTOM_LABEL_0",
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

	varCustomLabel0Filter := _CustomLabel0Filter{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCustomLabel0Filter)

	if err != nil {
		return err
	}

	*o = CustomLabel0Filter(varCustomLabel0Filter)

	return err
}

type NullableCustomLabel0Filter struct {
	value *CustomLabel0Filter
	isSet bool
}

func (v NullableCustomLabel0Filter) Get() *CustomLabel0Filter {
	return v.value
}

func (v *NullableCustomLabel0Filter) Set(val *CustomLabel0Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableCustomLabel0Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableCustomLabel0Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCustomLabel0Filter(val *CustomLabel0Filter) *NullableCustomLabel0Filter {
	return &NullableCustomLabel0Filter{value: val, isSet: true}
}

func (v NullableCustomLabel0Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCustomLabel0Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


