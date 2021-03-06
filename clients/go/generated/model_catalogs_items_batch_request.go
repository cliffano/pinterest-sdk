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

// CatalogsItemsBatchRequest Request object of catalogs items batch
type CatalogsItemsBatchRequest struct {
	Country *Country `json:"country,omitempty"`
	Language *Language `json:"language,omitempty"`
	Operation *BatchOperation `json:"operation,omitempty"`
	// Array with catalogs items
	Items []ItemBatchRecord `json:"items,omitempty"`
}

// NewCatalogsItemsBatchRequest instantiates a new CatalogsItemsBatchRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsItemsBatchRequest() *CatalogsItemsBatchRequest {
	this := CatalogsItemsBatchRequest{}
	return &this
}

// NewCatalogsItemsBatchRequestWithDefaults instantiates a new CatalogsItemsBatchRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsItemsBatchRequestWithDefaults() *CatalogsItemsBatchRequest {
	this := CatalogsItemsBatchRequest{}
	return &this
}

// GetCountry returns the Country field value if set, zero value otherwise.
func (o *CatalogsItemsBatchRequest) GetCountry() Country {
	if o == nil || o.Country == nil {
		var ret Country
		return ret
	}
	return *o.Country
}

// GetCountryOk returns a tuple with the Country field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsItemsBatchRequest) GetCountryOk() (*Country, bool) {
	if o == nil || o.Country == nil {
		return nil, false
	}
	return o.Country, true
}

// HasCountry returns a boolean if a field has been set.
func (o *CatalogsItemsBatchRequest) HasCountry() bool {
	if o != nil && o.Country != nil {
		return true
	}

	return false
}

// SetCountry gets a reference to the given Country and assigns it to the Country field.
func (o *CatalogsItemsBatchRequest) SetCountry(v Country) {
	o.Country = &v
}

// GetLanguage returns the Language field value if set, zero value otherwise.
func (o *CatalogsItemsBatchRequest) GetLanguage() Language {
	if o == nil || o.Language == nil {
		var ret Language
		return ret
	}
	return *o.Language
}

// GetLanguageOk returns a tuple with the Language field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsItemsBatchRequest) GetLanguageOk() (*Language, bool) {
	if o == nil || o.Language == nil {
		return nil, false
	}
	return o.Language, true
}

// HasLanguage returns a boolean if a field has been set.
func (o *CatalogsItemsBatchRequest) HasLanguage() bool {
	if o != nil && o.Language != nil {
		return true
	}

	return false
}

// SetLanguage gets a reference to the given Language and assigns it to the Language field.
func (o *CatalogsItemsBatchRequest) SetLanguage(v Language) {
	o.Language = &v
}

// GetOperation returns the Operation field value if set, zero value otherwise.
func (o *CatalogsItemsBatchRequest) GetOperation() BatchOperation {
	if o == nil || o.Operation == nil {
		var ret BatchOperation
		return ret
	}
	return *o.Operation
}

// GetOperationOk returns a tuple with the Operation field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsItemsBatchRequest) GetOperationOk() (*BatchOperation, bool) {
	if o == nil || o.Operation == nil {
		return nil, false
	}
	return o.Operation, true
}

// HasOperation returns a boolean if a field has been set.
func (o *CatalogsItemsBatchRequest) HasOperation() bool {
	if o != nil && o.Operation != nil {
		return true
	}

	return false
}

// SetOperation gets a reference to the given BatchOperation and assigns it to the Operation field.
func (o *CatalogsItemsBatchRequest) SetOperation(v BatchOperation) {
	o.Operation = &v
}

// GetItems returns the Items field value if set, zero value otherwise.
func (o *CatalogsItemsBatchRequest) GetItems() []ItemBatchRecord {
	if o == nil || o.Items == nil {
		var ret []ItemBatchRecord
		return ret
	}
	return o.Items
}

// GetItemsOk returns a tuple with the Items field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsItemsBatchRequest) GetItemsOk() ([]ItemBatchRecord, bool) {
	if o == nil || o.Items == nil {
		return nil, false
	}
	return o.Items, true
}

// HasItems returns a boolean if a field has been set.
func (o *CatalogsItemsBatchRequest) HasItems() bool {
	if o != nil && o.Items != nil {
		return true
	}

	return false
}

// SetItems gets a reference to the given []ItemBatchRecord and assigns it to the Items field.
func (o *CatalogsItemsBatchRequest) SetItems(v []ItemBatchRecord) {
	o.Items = v
}

func (o CatalogsItemsBatchRequest) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Country != nil {
		toSerialize["country"] = o.Country
	}
	if o.Language != nil {
		toSerialize["language"] = o.Language
	}
	if o.Operation != nil {
		toSerialize["operation"] = o.Operation
	}
	if o.Items != nil {
		toSerialize["items"] = o.Items
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsItemsBatchRequest struct {
	value *CatalogsItemsBatchRequest
	isSet bool
}

func (v NullableCatalogsItemsBatchRequest) Get() *CatalogsItemsBatchRequest {
	return v.value
}

func (v *NullableCatalogsItemsBatchRequest) Set(val *CatalogsItemsBatchRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsItemsBatchRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsItemsBatchRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsItemsBatchRequest(val *CatalogsItemsBatchRequest) *NullableCatalogsItemsBatchRequest {
	return &NullableCatalogsItemsBatchRequest{value: val, isSet: true}
}

func (v NullableCatalogsItemsBatchRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsItemsBatchRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


