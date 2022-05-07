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

// GoogleProductCategory6Filter struct for GoogleProductCategory6Filter
type GoogleProductCategory6Filter struct {
	GOOGLEPRODUCTCATEGORY6 CatalogsProductGroupMultipleStringListCriteria `json:"GOOGLE_PRODUCT_CATEGORY_6"`
}

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
	if o == nil  {
		return nil, false
	}
	return o.GOOGLEPRODUCTCATEGORY6, true
}

// SetGOOGLEPRODUCTCATEGORY6 sets field value
func (o *GoogleProductCategory6Filter) SetGOOGLEPRODUCTCATEGORY6(v CatalogsProductGroupMultipleStringListCriteria) {
	o.GOOGLEPRODUCTCATEGORY6 = v
}

func (o GoogleProductCategory6Filter) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["GOOGLE_PRODUCT_CATEGORY_6"] = o.GOOGLEPRODUCTCATEGORY6
	}
	return json.Marshal(toSerialize)
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


