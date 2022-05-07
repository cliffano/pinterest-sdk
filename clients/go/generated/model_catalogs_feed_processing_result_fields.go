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

// CatalogsFeedProcessingResultFields struct for CatalogsFeedProcessingResultFields
type CatalogsFeedProcessingResultFields struct {
	IngestionDetails CatalogsFeedIngestionDetails `json:"ingestion_details"`
	Status CatalogsFeedProcessingStatus `json:"status"`
	ProductCounts NullableCatalogsFeedProductCounts `json:"product_counts"`
	ValidationDetails CatalogsFeedValidationDetails `json:"validation_details"`
}

// NewCatalogsFeedProcessingResultFields instantiates a new CatalogsFeedProcessingResultFields object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsFeedProcessingResultFields(ingestionDetails CatalogsFeedIngestionDetails, status CatalogsFeedProcessingStatus, productCounts NullableCatalogsFeedProductCounts, validationDetails CatalogsFeedValidationDetails) *CatalogsFeedProcessingResultFields {
	this := CatalogsFeedProcessingResultFields{}
	this.IngestionDetails = ingestionDetails
	this.Status = status
	this.ProductCounts = productCounts
	this.ValidationDetails = validationDetails
	return &this
}

// NewCatalogsFeedProcessingResultFieldsWithDefaults instantiates a new CatalogsFeedProcessingResultFields object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsFeedProcessingResultFieldsWithDefaults() *CatalogsFeedProcessingResultFields {
	this := CatalogsFeedProcessingResultFields{}
	return &this
}

// GetIngestionDetails returns the IngestionDetails field value
func (o *CatalogsFeedProcessingResultFields) GetIngestionDetails() CatalogsFeedIngestionDetails {
	if o == nil {
		var ret CatalogsFeedIngestionDetails
		return ret
	}

	return o.IngestionDetails
}

// GetIngestionDetailsOk returns a tuple with the IngestionDetails field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedProcessingResultFields) GetIngestionDetailsOk() (*CatalogsFeedIngestionDetails, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.IngestionDetails, true
}

// SetIngestionDetails sets field value
func (o *CatalogsFeedProcessingResultFields) SetIngestionDetails(v CatalogsFeedIngestionDetails) {
	o.IngestionDetails = v
}

// GetStatus returns the Status field value
func (o *CatalogsFeedProcessingResultFields) GetStatus() CatalogsFeedProcessingStatus {
	if o == nil {
		var ret CatalogsFeedProcessingStatus
		return ret
	}

	return o.Status
}

// GetStatusOk returns a tuple with the Status field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedProcessingResultFields) GetStatusOk() (*CatalogsFeedProcessingStatus, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.Status, true
}

// SetStatus sets field value
func (o *CatalogsFeedProcessingResultFields) SetStatus(v CatalogsFeedProcessingStatus) {
	o.Status = v
}

// GetProductCounts returns the ProductCounts field value
// If the value is explicit nil, the zero value for CatalogsFeedProductCounts will be returned
func (o *CatalogsFeedProcessingResultFields) GetProductCounts() CatalogsFeedProductCounts {
	if o == nil || o.ProductCounts.Get() == nil {
		var ret CatalogsFeedProductCounts
		return ret
	}

	return *o.ProductCounts.Get()
}

// GetProductCountsOk returns a tuple with the ProductCounts field value
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsFeedProcessingResultFields) GetProductCountsOk() (*CatalogsFeedProductCounts, bool) {
	if o == nil  {
		return nil, false
	}
	return o.ProductCounts.Get(), o.ProductCounts.IsSet()
}

// SetProductCounts sets field value
func (o *CatalogsFeedProcessingResultFields) SetProductCounts(v CatalogsFeedProductCounts) {
	o.ProductCounts.Set(&v)
}

// GetValidationDetails returns the ValidationDetails field value
func (o *CatalogsFeedProcessingResultFields) GetValidationDetails() CatalogsFeedValidationDetails {
	if o == nil {
		var ret CatalogsFeedValidationDetails
		return ret
	}

	return o.ValidationDetails
}

// GetValidationDetailsOk returns a tuple with the ValidationDetails field value
// and a boolean to check if the value has been set.
func (o *CatalogsFeedProcessingResultFields) GetValidationDetailsOk() (*CatalogsFeedValidationDetails, bool) {
	if o == nil  {
		return nil, false
	}
	return &o.ValidationDetails, true
}

// SetValidationDetails sets field value
func (o *CatalogsFeedProcessingResultFields) SetValidationDetails(v CatalogsFeedValidationDetails) {
	o.ValidationDetails = v
}

func (o CatalogsFeedProcessingResultFields) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["ingestion_details"] = o.IngestionDetails
	}
	if true {
		toSerialize["status"] = o.Status
	}
	if true {
		toSerialize["product_counts"] = o.ProductCounts.Get()
	}
	if true {
		toSerialize["validation_details"] = o.ValidationDetails
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsFeedProcessingResultFields struct {
	value *CatalogsFeedProcessingResultFields
	isSet bool
}

func (v NullableCatalogsFeedProcessingResultFields) Get() *CatalogsFeedProcessingResultFields {
	return v.value
}

func (v *NullableCatalogsFeedProcessingResultFields) Set(val *CatalogsFeedProcessingResultFields) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsFeedProcessingResultFields) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsFeedProcessingResultFields) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsFeedProcessingResultFields(val *CatalogsFeedProcessingResultFields) *NullableCatalogsFeedProcessingResultFields {
	return &NullableCatalogsFeedProcessingResultFields{value: val, isSet: true}
}

func (v NullableCatalogsFeedProcessingResultFields) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsFeedProcessingResultFields) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


