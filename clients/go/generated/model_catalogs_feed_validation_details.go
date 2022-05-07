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

// CatalogsFeedValidationDetails struct for CatalogsFeedValidationDetails
type CatalogsFeedValidationDetails struct {
	Errors CatalogsFeedValidationErrors `json:"errors"`
	Warnings CatalogsFeedValidationWarnings `json:"warnings"`
}

// NewCatalogsFeedValidationDetails instantiates a new CatalogsFeedValidationDetails object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsFeedValidationDetails(errors CatalogsFeedValidationErrors, warnings CatalogsFeedValidationWarnings) *CatalogsFeedValidationDetails {
	this := CatalogsFeedValidationDetails{}
	this.Errors = errors
	this.Warnings = warnings
	return &this
}

// NewCatalogsFeedValidationDetailsWithDefaults instantiates a new CatalogsFeedValidationDetails object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsFeedValidationDetailsWithDefaults() *CatalogsFeedValidationDetails {
	this := CatalogsFeedValidationDetails{}
	return &this
}

// GetErrors returns the Errors field value
func (o *CatalogsFeedValidationDetails) GetErrors() CatalogsFeedValidationErrors {
	if o == nil {
		var ret CatalogsFeedValidationErrors
		return ret
	}

	return o.Errors
}

// GetErrorsOk returns a tuple with the Errors field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedValidationDetails) GetErrorsOk() (*CatalogsFeedValidationErrors, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Errors, true
}

// SetErrors sets field value
func (o *CatalogsFeedValidationDetails) SetErrors(v CatalogsFeedValidationErrors) {
	o.Errors = v
}

// GetWarnings returns the Warnings field value
func (o *CatalogsFeedValidationDetails) GetWarnings() CatalogsFeedValidationWarnings {
	if o == nil {
		var ret CatalogsFeedValidationWarnings
		return ret
	}

	return o.Warnings
}

// GetWarningsOk returns a tuple with the Warnings field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedValidationDetails) GetWarningsOk() (*CatalogsFeedValidationWarnings, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Warnings, true
}

// SetWarnings sets field value
func (o *CatalogsFeedValidationDetails) SetWarnings(v CatalogsFeedValidationWarnings) {
	o.Warnings = v
}

func (o CatalogsFeedValidationDetails) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["errors"] = o.Errors
	}
	if true {
		toSerialize["warnings"] = o.Warnings
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsFeedValidationDetails struct {
	value *CatalogsFeedValidationDetails
	isSet bool
}

func (v NullableCatalogsFeedValidationDetails) Get() *CatalogsFeedValidationDetails {
	return v.value
}

func (v *NullableCatalogsFeedValidationDetails) Set(val *CatalogsFeedValidationDetails) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFeedValidationDetails) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFeedValidationDetails) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFeedValidationDetails(val *CatalogsFeedValidationDetails) *NullableCatalogsFeedValidationDetails {
	return &NullableCatalogsFeedValidationDetails{value: val, isSet: true}
}

func (v NullableCatalogsFeedValidationDetails) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFeedValidationDetails) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


