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

// OauthAccessTokenResponse A successful OAuth access token response.
type OauthAccessTokenResponse struct {
	ResponseType *string `json:"response_type,omitempty"`
	AccessToken string `json:"access_token"`
	TokenType string `json:"token_type"`
	ExpiresIn int32 `json:"expires_in"`
	Scope string `json:"scope"`
}

// NewOauthAccessTokenResponse instantiates a new OauthAccessTokenResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewOauthAccessTokenResponse(accessToken string, tokenType string, expiresIn int32, scope string) *OauthAccessTokenResponse {
	this := OauthAccessTokenResponse{}
	this.AccessToken = accessToken
	this.TokenType = tokenType
	this.ExpiresIn = expiresIn
	this.Scope = scope
	return &this
}

// NewOauthAccessTokenResponseWithDefaults instantiates a new OauthAccessTokenResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewOauthAccessTokenResponseWithDefaults() *OauthAccessTokenResponse {
	this := OauthAccessTokenResponse{}
	var tokenType string = "bearer"
	this.TokenType = tokenType
	return &this
}

// GetResponseType returns the ResponseType field value if set, zero value otherwise.
func (o *OauthAccessTokenResponse) GetResponseType() string {
	if o == nil || o.ResponseType == nil {
		var ret string
		return ret
	}
	return *o.ResponseType
}

// GetResponseTypeOk returns a tuple with the ResponseType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *OauthAccessTokenResponse) GetResponseTypeOk() (*string, bool) {
	if o == nil || o.ResponseType == nil {
		return nil, false
	}
	return o.ResponseType, true
}

// HasResponseType returns a boolean if a field has been set.
func (o *OauthAccessTokenResponse) HasResponseType() bool {
	if o != nil && o.ResponseType != nil {
		return true
	}

	return false
}

// SetResponseType gets a reference to the given string and assigns it to the ResponseType field.
func (o *OauthAccessTokenResponse) SetResponseType(v string) {
	o.ResponseType = &v
}

// GetAccessToken returns the AccessToken field value
func (o *OauthAccessTokenResponse) GetAccessToken() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.AccessToken
}

// GetAccessTokenOk returns a tuple with the AccessToken field value
// and a boolean to check if the value has been set.
func (o *OauthAccessTokenResponse) GetAccessTokenOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.AccessToken, true
}

// SetAccessToken sets field value
func (o *OauthAccessTokenResponse) SetAccessToken(v string) {
	o.AccessToken = v
}

// GetTokenType returns the TokenType field value
func (o *OauthAccessTokenResponse) GetTokenType() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.TokenType
}

// GetTokenTypeOk returns a tuple with the TokenType field value
// and a boolean to check if the value has been set.
func (o *OauthAccessTokenResponse) GetTokenTypeOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.TokenType, true
}

// SetTokenType sets field value
func (o *OauthAccessTokenResponse) SetTokenType(v string) {
	o.TokenType = v
}

// GetExpiresIn returns the ExpiresIn field value
func (o *OauthAccessTokenResponse) GetExpiresIn() int32 {
	if o == nil {
		var ret int32
		return ret
	}

	return o.ExpiresIn
}

// GetExpiresInOk returns a tuple with the ExpiresIn field value
// and a boolean to check if the value has been set.
func (o *OauthAccessTokenResponse) GetExpiresInOk() (*int32, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.ExpiresIn, true
}

// SetExpiresIn sets field value
func (o *OauthAccessTokenResponse) SetExpiresIn(v int32) {
	o.ExpiresIn = v
}

// GetScope returns the Scope field value
func (o *OauthAccessTokenResponse) GetScope() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Scope
}

// GetScopeOk returns a tuple with the Scope field value
// and a boolean to check if the value has been set.
func (o *OauthAccessTokenResponse) GetScopeOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Scope, true
}

// SetScope sets field value
func (o *OauthAccessTokenResponse) SetScope(v string) {
	o.Scope = v
}

func (o OauthAccessTokenResponse) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.ResponseType != nil {
		toSerialize["response_type"] = o.ResponseType
	}
	if true {
		toSerialize["access_token"] = o.AccessToken
	}
	if true {
		toSerialize["token_type"] = o.TokenType
	}
	if true {
		toSerialize["expires_in"] = o.ExpiresIn
	}
	if true {
		toSerialize["scope"] = o.Scope
	}
	return json.Marshal(toSerialize)
}

type NullableOauthAccessTokenResponse struct {
	value *OauthAccessTokenResponse
	isSet bool
}

func (v NullableOauthAccessTokenResponse) Get() *OauthAccessTokenResponse {
	return v.value
}

func (v *NullableOauthAccessTokenResponse) Set(val *OauthAccessTokenResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableOauthAccessTokenResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableOauthAccessTokenResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableOauthAccessTokenResponse(val *OauthAccessTokenResponse) *NullableOauthAccessTokenResponse {
	return &NullableOauthAccessTokenResponse{value: val, isSet: true}
}

func (v NullableOauthAccessTokenResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableOauthAccessTokenResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


