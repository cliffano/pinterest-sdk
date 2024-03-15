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

// checks if the GoogleProductCategory0Filter type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &GoogleProductCategory0Filter{}

// GoogleProductCategory0Filter struct for GoogleProductCategory0Filter
type GoogleProductCategory0Filter struct {
	GOOGLEPRODUCTCATEGORY0 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_0"`
}

type _GoogleProductCategory0Filter GoogleProductCategory0Filter

// NewGoogleProductCategory0Filter instantiates a new GoogleProductCategory0Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGoogleProductCategory0Filter(gOOGLEPRODUCTCATEGORY0 CatalogsProductGroupMultipleStringListCriteria) *GoogleProductCategory0Filter {
	this := GoogleProductCategory0Filter{}
	this.GOOGLEPRODUCTCATEGORY0 = gOOGLEPRODUCTCATEGORY0
	return &this
}

// NewGoogleProductCategory0FilterWithDefaults instantiates a new GoogleProductCategory0Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGoogleProductCategory0FilterWithDefaults() *GoogleProductCategory0Filter {
	this := GoogleProductCategory0Filter{}
	return &this
}

// GetGOOGLEPRODUCTCATEGORY0 returns the GOOGLEPRODUCTCATEGORY0 field value
func (o *GoogleProductCategory0Filter) GetGOOGLEPRODUCTCATEGORY0() CatalogsProductGroupMultipleStringListCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringListCriteria
		return ret
	}

	return o.GOOGLEPRODUCTCATEGORY0
}

// GetGOOGLEPRODUCTCATEGORY0Ok returns a tuple with the GOOGLEPRODUCTCATEGORY0 field value
// and a boolean to check if the value has been set.
func (o *GoogleProductCategory0Filter) GetGOOGLEPRODUCTCATEGORY0Ok() (CatalogsProductGroupMultipleStringListCriteria, bool) {
	if o == nil {
		return CatalogsProductGroupMultipleStringListCriteria{}, false
	}
	return o.GOOGLEPRODUCTCATEGORY0, true
}

// SetGOOGLEPRODUCTCATEGORY0 sets field value
func (o *GoogleProductCategory0Filter) SetGOOGLEPRODUCTCATEGORY0(v CatalogsProductGroupMultipleStringListCriteria) {
	o.GOOGLEPRODUCTCATEGORY0 = v
}

func (o GoogleProductCategory0Filter) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o GoogleProductCategory0Filter) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["GOOGLE_PRODUCT_CATEGORY_0"] = o.GOOGLEPRODUCTCATEGORY0
	return toSerialize, nil
}

func (o *GoogleProductCategory0Filter) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"GOOGLE_PRODUCT_CATEGORY_0",
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

	varGoogleProductCategory0Filter := _GoogleProductCategory0Filter{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varGoogleProductCategory0Filter)

	if err != nil {
		return err
	}

	*o = GoogleProductCategory0Filter(varGoogleProductCategory0Filter)

	return err
}

type NullableGoogleProductCategory0Filter struct {
	value *GoogleProductCategory0Filter
	isSet bool
}

func (v NullableGoogleProductCategory0Filter) Get() *GoogleProductCategory0Filter {
	return v.value
}

func (v *NullableGoogleProductCategory0Filter) Set(val *GoogleProductCategory0Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableGoogleProductCategory0Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableGoogleProductCategory0Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGoogleProductCategory0Filter(val *GoogleProductCategory0Filter) *NullableGoogleProductCategory0Filter {
	return &NullableGoogleProductCategory0Filter{value: val, isSet: true}
}

func (v NullableGoogleProductCategory0Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGoogleProductCategory0Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


