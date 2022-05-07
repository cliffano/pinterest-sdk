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

// Account struct for Account
type Account struct {
	// Type of account
	AccountType *string `json:"account_type,omitempty"`
	ProfileImage *string `json:"profile_image,omitempty"`
	WebsiteUrl *string `json:"website_url,omitempty"`
	Username *string `json:"username,omitempty"`
}

// NewAccount instantiates a new Account object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewAccount() *Account {
	this := Account{}
	return &this
}

// NewAccountWithDefaults instantiates a new Account object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewAccountWithDefaults() *Account {
	this := Account{}
	return &this
}

// GetAccountType returns the AccountType field value if set, zero value otherwise.
func (o *Account) GetAccountType() string {
	if o == nil || o.AccountType == nil {
		var ret string
		return ret
	}
	return *o.AccountType
}

// GetAccountTypeOk returns a tuple with the AccountType field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Account) GetAccountTypeOk() (*string, bool) {
	if o == nil || o.AccountType == nil {
		return nil, false
	}
	return o.AccountType, true
}

// HasAccountType returns a boolean if a field has been set.
func (o *Account) HasAccountType() bool {
	if o != nil && o.AccountType != nil {
		return true
	}

	return false
}

// SetAccountType gets a reference to the given string and assigns it to the AccountType field.
func (o *Account) SetAccountType(v string) {
	o.AccountType = &v
}

// GetProfileImage returns the ProfileImage field value if set, zero value otherwise.
func (o *Account) GetProfileImage() string {
	if o == nil || o.ProfileImage == nil {
		var ret string
		return ret
	}
	return *o.ProfileImage
}

// GetProfileImageOk returns a tuple with the ProfileImage field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Account) GetProfileImageOk() (*string, bool) {
	if o == nil || o.ProfileImage == nil {
		return nil, false
	}
	return o.ProfileImage, true
}

// HasProfileImage returns a boolean if a field has been set.
func (o *Account) HasProfileImage() bool {
	if o != nil && o.ProfileImage != nil {
		return true
	}

	return false
}

// SetProfileImage gets a reference to the given string and assigns it to the ProfileImage field.
func (o *Account) SetProfileImage(v string) {
	o.ProfileImage = &v
}

// GetWebsiteUrl returns the WebsiteUrl field value if set, zero value otherwise.
func (o *Account) GetWebsiteUrl() string {
	if o == nil || o.WebsiteUrl == nil {
		var ret string
		return ret
	}
	return *o.WebsiteUrl
}

// GetWebsiteUrlOk returns a tuple with the WebsiteUrl field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Account) GetWebsiteUrlOk() (*string, bool) {
	if o == nil || o.WebsiteUrl == nil {
		return nil, false
	}
	return o.WebsiteUrl, true
}

// HasWebsiteUrl returns a boolean if a field has been set.
func (o *Account) HasWebsiteUrl() bool {
	if o != nil && o.WebsiteUrl != nil {
		return true
	}

	return false
}

// SetWebsiteUrl gets a reference to the given string and assigns it to the WebsiteUrl field.
func (o *Account) SetWebsiteUrl(v string) {
	o.WebsiteUrl = &v
}

// GetUsername returns the Username field value if set, zero value otherwise.
func (o *Account) GetUsername() string {
	if o == nil || o.Username == nil {
		var ret string
		return ret
	}
	return *o.Username
}

// GetUsernameOk returns a tuple with the Username field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *Account) GetUsernameOk() (*string, bool) {
	if o == nil || o.Username == nil {
		return nil, false
	}
	return o.Username, true
}

// HasUsername returns a boolean if a field has been set.
func (o *Account) HasUsername() bool {
	if o != nil && o.Username != nil {
		return true
	}

	return false
}

// SetUsername gets a reference to the given string and assigns it to the Username field.
func (o *Account) SetUsername(v string) {
	o.Username = &v
}

func (o Account) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.AccountType != nil {
		toSerialize["account_type"] = o.AccountType
	}
	if o.ProfileImage != nil {
		toSerialize["profile_image"] = o.ProfileImage
	}
	if o.WebsiteUrl != nil {
		toSerialize["website_url"] = o.WebsiteUrl
	}
	if o.Username != nil {
		toSerialize["username"] = o.Username
	}
	return json.Marshal(toSerialize)
}

type NullableAccount struct {
	value *Account
	isSet bool
}

func (v NullableAccount) Get() *Account {
	return v.value
}

func (v *NullableAccount) Set(val *Account) {
	v.value = val
	v.isSet = true
}

func (v NullableAccount) IsSet() bool {
	return v.isSet
}

func (v *NullableAccount) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAccount(val *Account) *NullableAccount {
	return &NullableAccount{value: val, isSet: true}
}

func (v NullableAccount) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAccount) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


