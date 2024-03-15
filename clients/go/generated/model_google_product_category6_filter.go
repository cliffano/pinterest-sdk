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

// checks if the GoogleProductCategory6Filter type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &GoogleProductCategory6Filter{}

// GoogleProductCategory6Filter struct for GoogleProductCategory6Filter
type GoogleProductCategory6Filter struct {
	GOOGLEPRODUCTCATEGORY6 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_6"`
}

type _GoogleProductCategory6Filter GoogleProductCategory6Filter

// NewGoogleProductCategory6Filter instantiates a new GoogleProductCategory6Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGoogleProductCategory6Filter(gOOGLEPRODUCTCATEGORY6 CatalogsProductGroupMultipleStringListCriteria) *GoogleProductCategory6Filter {
	this := GoogleProductCategory6Filter{}
	this.GOOGLEPRODUCTCATEGORY6 = gOOGLEPRODUCTCATEGORY6
	return &this
}

// NewGoogleProductCategory6FilterWithDefaults instantiates a new GoogleProductCategory6Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGoogleProductCategory6FilterWithDefaults() *GoogleProductCategory6Filter {
	this := GoogleProductCategory6Filter{}
	return &this
}

// GetGOOGLEPRODUCTCATEGORY6 returns the GOOGLEPRODUCTCATEGORY6 field value
func (o *GoogleProductCategory6Filter) GetGOOGLEPRODUCTCATEGORY6() CatalogsProductGroupMultipleStringListCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringListCriteria
		return ret
	}

	return o.GOOGLEPRODUCTCATEGORY6
}

// GetGOOGLEPRODUCTCATEGORY6Ok returns a tuple with the GOOGLEPRODUCTCATEGORY6 field value
// and a boolean to check if the value has been set.
func (o *GoogleProductCategory6Filter) GetGOOGLEPRODUCTCATEGORY6Ok() (CatalogsProductGroupMultipleStringListCriteria, bool) {
	if o == nil {
		return CatalogsProductGroupMultipleStringListCriteria{}, false
	}
	return o.GOOGLEPRODUCTCATEGORY6, true
}

// SetGOOGLEPRODUCTCATEGORY6 sets field value
func (o *GoogleProductCategory6Filter) SetGOOGLEPRODUCTCATEGORY6(v CatalogsProductGroupMultipleStringListCriteria) {
	o.GOOGLEPRODUCTCATEGORY6 = v
}

func (o GoogleProductCategory6Filter) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o GoogleProductCategory6Filter) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["GOOGLE_PRODUCT_CATEGORY_6"] = o.GOOGLEPRODUCTCATEGORY6
	return toSerialize, nil
}

func (o *GoogleProductCategory6Filter) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"GOOGLE_PRODUCT_CATEGORY_6",
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

	varGoogleProductCategory6Filter := _GoogleProductCategory6Filter{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varGoogleProductCategory6Filter)

	if err != nil {
		return err
	}

	*o = GoogleProductCategory6Filter(varGoogleProductCategory6Filter)

	return err
}

type NullableGoogleProductCategory6Filter struct {
	value *GoogleProductCategory6Filter
	isSet bool
}

func (v NullableGoogleProductCategory6Filter) Get() *GoogleProductCategory6Filter {
	return v.value
}

func (v *NullableGoogleProductCategory6Filter) Set(val *GoogleProductCategory6Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableGoogleProductCategory6Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableGoogleProductCategory6Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGoogleProductCategory6Filter(val *GoogleProductCategory6Filter) *NullableGoogleProductCategory6Filter {
	return &NullableGoogleProductCategory6Filter{value: val, isSet: true}
}

func (v NullableGoogleProductCategory6Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGoogleProductCategory6Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

