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

// OauthAccessTokenResponseCode A successful OAuth access token response for the authorization code flow.
type OauthAccessTokenResponseCode struct {
	RefreshToken string `json:"refresh_token"`
	RefreshTokenExpiresIn int32 `json:"refresh_token_expires_in"`
}

// NewOauthAccessTokenResponseCode instantiates a new OauthAccessTokenResponseCode object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOauthAccessTokenResponseCode(refreshToken string, refreshTokenExpiresIn int32, accessToken string, tokenType string, expiresIn int32, scope string) *OauthAccessTokenResponseCode {
	this := OauthAccessTokenResponseCode{}
	this.AccessToken = accessToken
	this.TokenType = tokenType
	this.ExpiresIn = expiresIn
	this.Scope = scope
	this.RefreshToken = refreshToken
	this.RefreshTokenExpiresIn = refreshTokenExpiresIn
	return &this
}

// NewOauthAccessTokenResponseCodeWithDefaults instantiates a new OauthAccessTokenResponseCode object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOauthAccessTokenResponseCodeWithDefaults() *OauthAccessTokenResponseCode {
	this := OauthAccessTokenResponseCode{}
	return &this
}

// GetRefreshToken returns the RefreshToken field value
func (o *OauthAccessTokenResponseCode) GetRefreshToken() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.RefreshToken
}

// GetRefreshTokenOk returns a tuple with the RefreshToken field value
// and a boolean to check if the value has been set.
func (o *OauthAccessTokenResponseCode) GetRefreshTokenOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.RefreshToken, true
}

// SetRefreshToken sets field value
func (o *OauthAccessTokenResponseCode) SetRefreshToken(v string) {
	o.RefreshToken = v
}

// GetRefreshTokenExpiresIn returns the RefreshTokenExpiresIn field value
func (o *OauthAccessTokenResponseCode) GetRefreshTokenExpiresIn() int32 {
	if o == nil {
		var ret int32
		return ret
	}

	return o.RefreshTokenExpiresIn
}

// GetRefreshTokenExpiresInOk returns a tuple with the RefreshTokenExpiresIn field value
// and a boolean to check if the value has been set.
func (o *OauthAccessTokenResponseCode) GetRefreshTokenExpiresInOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.RefreshTokenExpiresIn, true
}

// SetRefreshTokenExpiresIn sets field value
func (o *OauthAccessTokenResponseCode) SetRefreshTokenExpiresIn(v int32) {
	o.RefreshTokenExpiresIn = v
}

func (o OauthAccessTokenResponseCode) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["refresh_token"] = o.RefreshToken
	}
	if true {
		toSerialize["refresh_token_expires_in"] = o.RefreshTokenExpiresIn
	}
	return json.Marshal(toSerialize)
}

type NullableOauthAccessTokenResponseCode struct {
	value *OauthAccessTokenResponseCode
	isSet bool
}

func (v NullableOauthAccessTokenResponseCode) Get() *OauthAccessTokenResponseCode {
	return v.value
}

func (v *NullableOauthAccessTokenResponseCode) Set(val *OauthAccessTokenResponseCode) {
	v.value = val
	v.isSet = true
}

func (v NullableOauthAccessTokenResponseCode) IsSet() bool {
	return v.isSet
}

func (v *NullableOauthAccessTokenResponseCode) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOauthAccessTokenResponseCode(val *OauthAccessTokenResponseCode) *NullableOauthAccessTokenResponseCode {
	return &NullableOauthAccessTokenResponseCode{value: val, isSet: true}
}

func (v NullableOauthAccessTokenResponseCode) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOauthAccessTokenResponseCode) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


