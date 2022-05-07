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

// CatalogsFeedIngestionDetails struct for CatalogsFeedIngestionDetails
type CatalogsFeedIngestionDetails struct {
	Errors CatalogsFeedIngestionErrors `json:"errors"`
	Info CatalogsFeedIngestionInfo `json:"info"`
}

// NewCatalogsFeedIngestionDetails instantiates a new CatalogsFeedIngestionDetails object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsFeedIngestionDetails(errors CatalogsFeedIngestionErrors, info CatalogsFeedIngestionInfo) *CatalogsFeedIngestionDetails {
	this := CatalogsFeedIngestionDetails{}
	this.Errors = errors
	this.Info = info
	return &this
}

// NewCatalogsFeedIngestionDetailsWithDefaults instantiates a new CatalogsFeedIngestionDetails object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsFeedIngestionDetailsWithDefaults() *CatalogsFeedIngestionDetails {
	this := CatalogsFeedIngestionDetails{}
	return &this
}

// GetErrors returns the Errors field value
func (o *CatalogsFeedIngestionDetails) GetErrors() CatalogsFeedIngestionErrors {
	if o == nil {
		var ret CatalogsFeedIngestionErrors
		return ret
	}

	return o.Errors
}

// GetErrorsOk returns a tuple with the Errors field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionDetails) GetErrorsOk() (*CatalogsFeedIngestionErrors, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Errors, true
}

// SetErrors sets field value
func (o *CatalogsFeedIngestionDetails) SetErrors(v CatalogsFeedIngestionErrors) {
	o.Errors = v
}

// GetInfo returns the Info field value
func (o *CatalogsFeedIngestionDetails) GetInfo() CatalogsFeedIngestionInfo {
	if o == nil {
		var ret CatalogsFeedIngestionInfo
		return ret
	}

	return o.Info
}

// GetInfoOk returns a tuple with the Info field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedIngestionDetails) GetInfoOk() (*CatalogsFeedIngestionInfo, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Info, true
}

// SetInfo sets field value
func (o *CatalogsFeedIngestionDetails) SetInfo(v CatalogsFeedIngestionInfo) {
	o.Info = v
}

func (o CatalogsFeedIngestionDetails) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["errors"] = o.Errors
	}
	if true {
		toSerialize["info"] = o.Info
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsFeedIngestionDetails struct {
	value *CatalogsFeedIngestionDetails
	isSet bool
}

func (v NullableCatalogsFeedIngestionDetails) Get() *CatalogsFeedIngestionDetails {
	return v.value
}

func (v *NullableCatalogsFeedIngestionDetails) Set(val *CatalogsFeedIngestionDetails) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFeedIngestionDetails) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFeedIngestionDetails) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFeedIngestionDetails(val *CatalogsFeedIngestionDetails) *NullableCatalogsFeedIngestionDetails {
	return &NullableCatalogsFeedIngestionDetails{value: val, isSet: true}
}

func (v NullableCatalogsFeedIngestionDetails) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFeedIngestionDetails) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


