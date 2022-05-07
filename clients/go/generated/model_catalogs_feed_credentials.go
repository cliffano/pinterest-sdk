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

// CatalogsFeedCredentials Use this if your feed file requires username and password.
type CatalogsFeedCredentials struct {
	// The required password for downloading a feed.
	Password string `json:"password"`
	// The required username for downloading a feed.
	Username string `json:"username"`
}

// NewCatalogsFeedCredentials instantiates a new CatalogsFeedCredentials object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsFeedCredentials(password string, username string) *CatalogsFeedCredentials {
	this := CatalogsFeedCredentials{}
	this.Password = password
	this.Username = username
	return &this
}

// NewCatalogsFeedCredentialsWithDefaults instantiates a new CatalogsFeedCredentials object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsFeedCredentialsWithDefaults() *CatalogsFeedCredentials {
	this := CatalogsFeedCredentials{}
	return &this
}

// GetPassword returns the Password field value
func (o *CatalogsFeedCredentials) GetPassword() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Password
}

// GetPasswordOk returns a tuple with the Password field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedCredentials) GetPasswordOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Password, true
}

// SetPassword sets field value
func (o *CatalogsFeedCredentials) SetPassword(v string) {
	o.Password = v
}

// GetUsername returns the Username field value
func (o *CatalogsFeedCredentials) GetUsername() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Username
}

// GetUsernameOk returns a tuple with the Username field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedCredentials) GetUsernameOk() (*string, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Username, true
}

// SetUsername sets field value
func (o *CatalogsFeedCredentials) SetUsername(v string) {
	o.Username = v
}

func (o CatalogsFeedCredentials) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["password"] = o.Password
	}
	if true {
		toSerialize["username"] = o.Username
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsFeedCredentials struct {
	value *CatalogsFeedCredentials
	isSet bool
}

func (v NullableCatalogsFeedCredentials) Get() *CatalogsFeedCredentials {
	return v.value
}

func (v *NullableCatalogsFeedCredentials) Set(val *CatalogsFeedCredentials) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFeedCredentials) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFeedCredentials) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFeedCredentials(val *CatalogsFeedCredentials) *NullableCatalogsFeedCredentials {
	return &NullableCatalogsFeedCredentials{value: val, isSet: true}
}

func (v NullableCatalogsFeedCredentials) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFeedCredentials) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


