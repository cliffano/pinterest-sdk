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

// OauthAccessTokenRequest Describes the valid schema for possible OAuth access token requests.
type OauthAccessTokenRequest struct {
	GrantType string `json:"grant_type"`
}

// NewOauthAccessTokenRequest instantiates a new OauthAccessTokenRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOauthAccessTokenRequest(grantType string) *OauthAccessTokenRequest {
	this := OauthAccessTokenRequest{}
	this.GrantType = grantType
	return &this
}

// NewOauthAccessTokenRequestWithDefaults instantiates a new OauthAccessTokenRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOauthAccessTokenRequestWithDefaults() *OauthAccessTokenRequest {
	this := OauthAccessTokenRequest{}
	return &this
}

// GetGrantType returns the GrantType field value
func (o *OauthAccessTokenRequest) GetGrantType() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.GrantType
}

// GetGrantTypeOk returns a tuple with the GrantType field value
// and a boolean to check if the value has been set.
func (o *OauthAccessTokenRequest) GetGrantTypeOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.GrantType, true
}

// SetGrantType sets field value
func (o *OauthAccessTokenRequest) SetGrantType(v string) {
	o.GrantType = v
}

func (o OauthAccessTokenRequest) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["grant_type"] = o.GrantType
	}
	return json.Marshal(toSerialize)
}

type NullableOauthAccessTokenRequest struct {
	value *OauthAccessTokenRequest
	isSet bool
}

func (v NullableOauthAccessTokenRequest) Get() *OauthAccessTokenRequest {
	return v.value
}

func (v *NullableOauthAccessTokenRequest) Set(val *OauthAccessTokenRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableOauthAccessTokenRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableOauthAccessTokenRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOauthAccessTokenRequest(val *OauthAccessTokenRequest) *NullableOauthAccessTokenRequest {
	return &NullableOauthAccessTokenRequest{value: val, isSet: true}
}

func (v NullableOauthAccessTokenRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOauthAccessTokenRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


