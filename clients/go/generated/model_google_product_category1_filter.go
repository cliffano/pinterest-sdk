/*
Pinterest REST API

Pinterest's REST API

API version: 5.3.0
Contact: blah@cliffano.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// GoogleProductCategory1Filter struct for GoogleProductCategory1Filter
type GoogleProductCategory1Filter struct {
	GOOGLEPRODUCTCATEGORY1 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_1"`
}

// NewGoogleProductCategory1Filter instantiates a new GoogleProductCategory1Filter object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGoogleProductCategory1Filter(gOOGLEPRODUCTCATEGORY1 CatalogsProductGroupMultipleStringListCriteria) *GoogleProductCategory1Filter {
	this := GoogleProductCategory1Filter{}
	this.GOOGLEPRODUCTCATEGORY1 = gOOGLEPRODUCTCATEGORY1
	return &this
}

// NewGoogleProductCategory1FilterWithDefaults instantiates a new GoogleProductCategory1Filter object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGoogleProductCategory1FilterWithDefaults() *GoogleProductCategory1Filter {
	this := GoogleProductCategory1Filter{}
	return &this
}

// GetGOOGLEPRODUCTCATEGORY1 returns the GOOGLEPRODUCTCATEGORY1 field value
func (o *GoogleProductCategory1Filter) GetGOOGLEPRODUCTCATEGORY1() CatalogsProductGroupMultipleStringListCriteria {
	if o == nil {
		var ret CatalogsProductGroupMultipleStringListCriteria
		return ret
	}

	return o.GOOGLEPRODUCTCATEGORY1
}

// GetGOOGLEPRODUCTCATEGORY1Ok returns a tuple with the GOOGLEPRODUCTCATEGORY1 field value
// and a boolean to check if the value has been set.
func (o *GoogleProductCategory1Filter) GetGOOGLEPRODUCTCATEGORY1Ok() (CatalogsProductGroupMultipleStringListCriteria, bool) {
	if o == nil  {
		return nil, false
	}
	return o.GOOGLEPRODUCTCATEGORY1, true
}

// SetGOOGLEPRODUCTCATEGORY1 sets field value
func (o *GoogleProductCategory1Filter) SetGOOGLEPRODUCTCATEGORY1(v CatalogsProductGroupMultipleStringListCriteria) {
	o.GOOGLEPRODUCTCATEGORY1 = v
}

func (o GoogleProductCategory1Filter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["GOOGLE_PRODUCT_CATEGORY_1"] = o.GOOGLEPRODUCTCATEGORY1
	}
	return json.Marshal(toSerialize)
}

type NullableGoogleProductCategory1Filter struct {
	value *GoogleProductCategory1Filter
	isSet bool
}

func (v NullableGoogleProductCategory1Filter) Get() *GoogleProductCategory1Filter {
	return v.value
}

func (v *NullableGoogleProductCategory1Filter) Set(val *GoogleProductCategory1Filter) {
	v.value = val
	v.isSet = true
}

func (v NullableGoogleProductCategory1Filter) IsSet() bool {
	return v.isSet
}

func (v *NullableGoogleProductCategory1Filter) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGoogleProductCategory1Filter(val *GoogleProductCategory1Filter) *NullableGoogleProductCategory1Filter {
	return &NullableGoogleProductCategory1Filter{value: val, isSet: true}
}

func (v NullableGoogleProductCategory1Filter) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGoogleProductCategory1Filter) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


