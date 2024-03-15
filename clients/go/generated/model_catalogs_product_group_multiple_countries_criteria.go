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

// checks if the CatalogsProductGroupMultipleCountriesCriteria type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsProductGroupMultipleCountriesCriteria{}

// CatalogsProductGroupMultipleCountriesCriteria struct for CatalogsProductGroupMultipleCountriesCriteria
type CatalogsProductGroupMultipleCountriesCriteria struct {
	Values []Country `json:"values"`
	Negated *bool `json:"negated,omitempty"`
}

type _CatalogsProductGroupMultipleCountriesCriteria CatalogsProductGroupMultipleCountriesCriteria

// NewCatalogsProductGroupMultipleCountriesCriteria instantiates a new CatalogsProductGroupMultipleCountriesCriteria object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsProductGroupMultipleCountriesCriteria(values []Country) *CatalogsProductGroupMultipleCountriesCriteria {
	this := CatalogsProductGroupMultipleCountriesCriteria{}
	this.Values = values
	var negated bool = false
	this.Negated = &negated
	return &this
}

// NewCatalogsProductGroupMultipleCountriesCriteriaWithDefaults instantiates a new CatalogsProductGroupMultipleCountriesCriteria object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsProductGroupMultipleCountriesCriteriaWithDefaults() *CatalogsProductGroupMultipleCountriesCriteria {
	this := CatalogsProductGroupMultipleCountriesCriteria{}
	var negated bool = false
	this.Negated = &negated
	return &this
}

// GetValues returns the Values field value
func (o *CatalogsProductGroupMultipleCountriesCriteria) GetValues() []Country {
	if o == nil {
		var ret []Country
		return ret
	}

	return o.Values
}

// GetValuesOk returns a tuple with the Values field value
// and a boolean to check if the value has been set.
func (o *CatalogsProductGroupMultipleCountriesCriteria) GetValuesOk() ([]Country, bool) {
	if o == nil {
		return nil, false
	}
	return o.Values, true
}

// SetValues sets field value
func (o *CatalogsProductGroupMultipleCountriesCriteria) SetValues(v []Country) {
	o.Values = v
}

// GetNegated returns the Negated field value if set, zero value otherwise.
func (o *CatalogsProductGroupMultipleCountriesCriteria) GetNegated() bool {
	if o == nil || IsNil(o.Negated) {
		var ret bool
		return ret
	}
	return *o.Negated
}

// GetNegatedOk returns a tuple with the Negated field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsProductGroupMultipleCountriesCriteria) GetNegatedOk() (*bool, bool) {
	if o == nil || IsNil(o.Negated) {
		return nil, false
	}
	return o.Negated, true
}

// HasNegated returns a boolean if a field has been set.
func (o *CatalogsProductGroupMultipleCountriesCriteria) HasNegated() bool {
	if o != nil && !IsNil(o.Negated) {
		return true
	}

	return false
}

// SetNegated gets a reference to the given bool and assigns it to the Negated field.
func (o *CatalogsProductGroupMultipleCountriesCriteria) SetNegated(v bool) {
	o.Negated = &v
}

func (o CatalogsProductGroupMultipleCountriesCriteria) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsProductGroupMultipleCountriesCriteria) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["values"] = o.Values
	if !IsNil(o.Negated) {
		toSerialize["negated"] = o.Negated
	}
	return toSerialize, nil
}

func (o *CatalogsProductGroupMultipleCountriesCriteria) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"values",
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

	varCatalogsProductGroupMultipleCountriesCriteria := _CatalogsProductGroupMultipleCountriesCriteria{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCatalogsProductGroupMultipleCountriesCriteria)

	if err != nil {
		return err
	}

	*o = CatalogsProductGroupMultipleCountriesCriteria(varCatalogsProductGroupMultipleCountriesCriteria)

	return err
}

type NullableCatalogsProductGroupMultipleCountriesCriteria struct {
	value *CatalogsProductGroupMultipleCountriesCriteria
	isSet bool
}

func (v NullableCatalogsProductGroupMultipleCountriesCriteria) Get() *CatalogsProductGroupMultipleCountriesCriteria {
	return v.value
}

func (v *NullableCatalogsProductGroupMultipleCountriesCriteria) Set(val *CatalogsProductGroupMultipleCountriesCriteria) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsProductGroupMultipleCountriesCriteria) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsProductGroupMultipleCountriesCriteria) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsProductGroupMultipleCountriesCriteria(val *CatalogsProductGroupMultipleCountriesCriteria) *NullableCatalogsProductGroupMultipleCountriesCriteria {
	return &NullableCatalogsProductGroupMultipleCountriesCriteria{value: val, isSet: true}
}

func (v NullableCatalogsProductGroupMultipleCountriesCriteria) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsProductGroupMultipleCountriesCriteria) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

