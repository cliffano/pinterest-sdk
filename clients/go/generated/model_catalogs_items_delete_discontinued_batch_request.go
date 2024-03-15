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
	"bytes"
	"fmt"
)

// checks if the CatalogsItemsDeleteDiscontinuedBatchRequest type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CatalogsItemsDeleteDiscontinuedBatchRequest{}

// CatalogsItemsDeleteDiscontinuedBatchRequest Request object to discontinue catalogs items
type CatalogsItemsDeleteDiscontinuedBatchRequest struct {
	Country Country `json:"country"`
	Language Language `json:"language"`
	Operation BatchOperation `json:"operation"`
	// Array with catalogs items
	Items []ItemDeleteDiscontinuedBatchRecord `json:"items"`
}

type _CatalogsItemsDeleteDiscontinuedBatchRequest CatalogsItemsDeleteDiscontinuedBatchRequest

// NewCatalogsItemsDeleteDiscontinuedBatchRequest instantiates a new CatalogsItemsDeleteDiscontinuedBatchRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsItemsDeleteDiscontinuedBatchRequest(country Country, language Language, operation BatchOperation, items []ItemDeleteDiscontinuedBatchRecord) *CatalogsItemsDeleteDiscontinuedBatchRequest {
	this := CatalogsItemsDeleteDiscontinuedBatchRequest{}
	this.Country = country
	this.Language = language
	this.Operation = operation
	this.Items = items
	return &this
}

// NewCatalogsItemsDeleteDiscontinuedBatchRequestWithDefaults instantiates a new CatalogsItemsDeleteDiscontinuedBatchRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsItemsDeleteDiscontinuedBatchRequestWithDefaults() *CatalogsItemsDeleteDiscontinuedBatchRequest {
	this := CatalogsItemsDeleteDiscontinuedBatchRequest{}
	return &this
}

// GetCountry returns the Country field value
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) GetCountry() Country {
	if o == nil {
		var ret Country
		return ret
	}

	return o.Country
}

// GetCountryOk returns a tuple with the Country field value
// and a boolean to check if the value has been set.
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) GetCountryOk() (*Country, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Country, true
}

// SetCountry sets field value
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) SetCountry(v Country) {
	o.Country = v
}

// GetLanguage returns the Language field value
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) GetLanguage() Language {
	if o == nil {
		var ret Language
		return ret
	}

	return o.Language
}

// GetLanguageOk returns a tuple with the Language field value
// and a boolean to check if the value has been set.
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) GetLanguageOk() (*Language, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Language, true
}

// SetLanguage sets field value
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) SetLanguage(v Language) {
	o.Language = v
}

// GetOperation returns the Operation field value
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) GetOperation() BatchOperation {
	if o == nil {
		var ret BatchOperation
		return ret
	}

	return o.Operation
}

// GetOperationOk returns a tuple with the Operation field value
// and a boolean to check if the value has been set.
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) GetOperationOk() (*BatchOperation, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Operation, true
}

// SetOperation sets field value
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) SetOperation(v BatchOperation) {
	o.Operation = v
}

// GetItems returns the Items field value
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) GetItems() []ItemDeleteDiscontinuedBatchRecord {
	if o == nil {
		var ret []ItemDeleteDiscontinuedBatchRecord
		return ret
	}

	return o.Items
}

// GetItemsOk returns a tuple with the Items field value
// and a boolean to check if the value has been set.
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) GetItemsOk() ([]ItemDeleteDiscontinuedBatchRecord, bool) {
	if o == nil {
		return nil, false
	}
	return o.Items, true
}

// SetItems sets field value
func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) SetItems(v []ItemDeleteDiscontinuedBatchRecord) {
	o.Items = v
}

func (o CatalogsItemsDeleteDiscontinuedBatchRequest) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CatalogsItemsDeleteDiscontinuedBatchRequest) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["country"] = o.Country
	toSerialize["language"] = o.Language
	toSerialize["operation"] = o.Operation
	toSerialize["items"] = o.Items
	return toSerialize, nil
}

func (o *CatalogsItemsDeleteDiscontinuedBatchRequest) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"country",
		"language",
		"operation",
		"items",
	}

	allProperties := make(map[string]interface{})

	err = json.Unmarshal(data, &allProperties)

	if err != nil {
		return err;
	}

	for _, requiredProperty := range(requiredProperties) {
		if _, exists := allProperties[requiredProperty]; !exists {
			return fmt.Errorf("no value given for required property %v", requiredProperty)
		}
	}

	varCatalogsItemsDeleteDiscontinuedBatchRequest := _CatalogsItemsDeleteDiscontinuedBatchRequest{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCatalogsItemsDeleteDiscontinuedBatchRequest)

	if err != nil {
		return err
	}

	*o = CatalogsItemsDeleteDiscontinuedBatchRequest(varCatalogsItemsDeleteDiscontinuedBatchRequest)

	return err
}

type NullableCatalogsItemsDeleteDiscontinuedBatchRequest struct {
	value *CatalogsItemsDeleteDiscontinuedBatchRequest
	isSet bool
}

func (v NullableCatalogsItemsDeleteDiscontinuedBatchRequest) Get() *CatalogsItemsDeleteDiscontinuedBatchRequest {
	return v.value
}

func (v *NullableCatalogsItemsDeleteDiscontinuedBatchRequest) Set(val *CatalogsItemsDeleteDiscontinuedBatchRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsItemsDeleteDiscontinuedBatchRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsItemsDeleteDiscontinuedBatchRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsItemsDeleteDiscontinuedBatchRequest(val *CatalogsItemsDeleteDiscontinuedBatchRequest) *NullableCatalogsItemsDeleteDiscontinuedBatchRequest {
	return &NullableCatalogsItemsDeleteDiscontinuedBatchRequest{value: val, isSet: true}
}

func (v NullableCatalogsItemsDeleteDiscontinuedBatchRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsItemsDeleteDiscontinuedBatchRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


