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
)

// checks if the UserWebsiteVerifyRequest type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &UserWebsiteVerifyRequest{}

// UserWebsiteVerifyRequest User website verification request
type UserWebsiteVerifyRequest struct {
	Website *string `json:"website,omitempty"`
	VerificationMethod *string `json:"verification_method,omitempty"`
}

// NewUserWebsiteVerifyRequest instantiates a new UserWebsiteVerifyRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewUserWebsiteVerifyRequest() *UserWebsiteVerifyRequest {
	this := UserWebsiteVerifyRequest{}
	var verificationMethod string = "METATAG"
	this.VerificationMethod = &verificationMethod
	return &this
}

// NewUserWebsiteVerifyRequestWithDefaults instantiates a new UserWebsiteVerifyRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewUserWebsiteVerifyRequestWithDefaults() *UserWebsiteVerifyRequest {
	this := UserWebsiteVerifyRequest{}
	var verificationMethod string = "METATAG"
	this.VerificationMethod = &verificationMethod
	return &this
}

// GetWebsite returns the Website field value if set, zero value otherwise.
func (o *UserWebsiteVerifyRequest) GetWebsite() string {
	if o == nil || IsNil(o.Website) {
		var ret string
		return ret
	}
	return *o.Website
}

// GetWebsiteOk returns a tuple with the Website field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *UserWebsiteVerifyRequest) GetWebsiteOk() (*string, bool) {
	if o == nil || IsNil(o.Website) {
		return nil, false
	}
	return o.Website, true
}

// HasWebsite returns a boolean if a field has been set.
func (o *UserWebsiteVerifyRequest) HasWebsite() bool {
	if o != nil && !IsNil(o.Website) {
		return true
	}

	return false
}

// SetWebsite gets a reference to the given string and assigns it to the Website field.
func (o *UserWebsiteVerifyRequest) SetWebsite(v string) {
	o.Website = &v
}

// GetVerificationMethod returns the VerificationMethod field value if set, zero value otherwise.
func (o *UserWebsiteVerifyRequest) GetVerificationMethod() string {
	if o == nil || IsNil(o.VerificationMethod) {
		var ret string
		return ret
	}
	return *o.VerificationMethod
}

// GetVerificationMethodOk returns a tuple with the VerificationMethod field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *UserWebsiteVerifyRequest) GetVerificationMethodOk() (*string, bool) {
	if o == nil || IsNil(o.VerificationMethod) {
		return nil, false
	}
	return o.VerificationMethod, true
}

// HasVerificationMethod returns a boolean if a field has been set.
func (o *UserWebsiteVerifyRequest) HasVerificationMethod() bool {
	if o != nil && !IsNil(o.VerificationMethod) {
		return true
	}

	return false
}

// SetVerificationMethod gets a reference to the given string and assigns it to the VerificationMethod field.
func (o *UserWebsiteVerifyRequest) SetVerificationMethod(v string) {
	o.VerificationMethod = &v
}

func (o UserWebsiteVerifyRequest) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o UserWebsiteVerifyRequest) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Website) {
		toSerialize["website"] = o.Website
	}
	if !IsNil(o.VerificationMethod) {
		toSerialize["verification_method"] = o.VerificationMethod
	}
	return toSerialize, nil
}

type NullableUserWebsiteVerifyRequest struct {
	value *UserWebsiteVerifyRequest
	isSet bool
}

func (v NullableUserWebsiteVerifyRequest) Get() *UserWebsiteVerifyRequest {
	return v.value
}

func (v *NullableUserWebsiteVerifyRequest) Set(val *UserWebsiteVerifyRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableUserWebsiteVerifyRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableUserWebsiteVerifyRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableUserWebsiteVerifyRequest(val *UserWebsiteVerifyRequest) *NullableUserWebsiteVerifyRequest {
	return &NullableUserWebsiteVerifyRequest{value: val, isSet: true}
}

func (v NullableUserWebsiteVerifyRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableUserWebsiteVerifyRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

