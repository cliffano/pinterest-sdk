/*
Pinterest REST API

Pinterest's REST API

API version: 5.3.0
Contact: pinterest-api@pinterest.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// GoogleProductCategory0Filter struct for GoogleProductCategory0Filter
type GoogleProductCategory0Filter struct {
	GOOGLEPRODUCTCATEGORY0 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_0"`
}

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
	if o == nil  {
		return nil, false
	}
	return o.GOOGLEPRODUCTCATEGORY0, true
}

// SetGOOGLEPRODUCTCATEGORY0 sets field value
func (o *GoogleProductCategory0Filter) SetGOOGLEPRODUCTCATEGORY0(v CatalogsProductGroupMultipleStringListCriteria) {
	o.GOOGLEPRODUCTCATEGORY0 = v
}

func (o GoogleProductCategory0Filter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["GOOGLE_PRODUCT_CATEGORY_0"] = o.GOOGLEPRODUCTCATEGORY0
	}
	return json.Marshal(toSerialize)
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

