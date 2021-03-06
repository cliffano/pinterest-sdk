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
	"time"
)

// CatalogsItemsBatch Object describing the catalogs items batch
type CatalogsItemsBatch struct {
	// Array with the catalogs items processing records part of the catalogs items batch
	Items []ItemProcessingRecord `json:"items,omitempty"`
	// Id of the catalogs items batch
	BatchId *string `json:"batch_id,omitempty"`
	// Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD
	CreatedTime *time.Time `json:"created_time,omitempty"`
	// Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD
	CompletedTime NullableTime `json:"completed_time,omitempty"`
	Status *BatchOperationStatus `json:"status,omitempty"`
}

// NewCatalogsItemsBatch instantiates a new CatalogsItemsBatch object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCatalogsItemsBatch() *CatalogsItemsBatch {
	this := CatalogsItemsBatch{}
	return &this
}

// NewCatalogsItemsBatchWithDefaults instantiates a new CatalogsItemsBatch object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCatalogsItemsBatchWithDefaults() *CatalogsItemsBatch {
	this := CatalogsItemsBatch{}
	return &this
}

// GetItems returns the Items field value if set, zero value otherwise.
func (o *CatalogsItemsBatch) GetItems() []ItemProcessingRecord {
	if o == nil || o.Items == nil {
		var ret []ItemProcessingRecord
		return ret
	}
	return o.Items
}

// GetItemsOk returns a tuple with the Items field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsItemsBatch) GetItemsOk() ([]ItemProcessingRecord, bool) {
	if o == nil || o.Items == nil {
		return nil, false
	}
	return o.Items, true
}

// HasItems returns a boolean if a field has been set.
func (o *CatalogsItemsBatch) HasItems() bool {
	if o != nil && o.Items != nil {
		return true
	}

	return false
}

// SetItems gets a reference to the given []ItemProcessingRecord and assigns it to the Items field.
func (o *CatalogsItemsBatch) SetItems(v []ItemProcessingRecord) {
	o.Items = v
}

// GetBatchId returns the BatchId field value if set, zero value otherwise.
func (o *CatalogsItemsBatch) GetBatchId() string {
	if o == nil || o.BatchId == nil {
		var ret string
		return ret
	}
	return *o.BatchId
}

// GetBatchIdOk returns a tuple with the BatchId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsItemsBatch) GetBatchIdOk() (*string, bool) {
	if o == nil || o.BatchId == nil {
		return nil, false
	}
	return o.BatchId, true
}

// HasBatchId returns a boolean if a field has been set.
func (o *CatalogsItemsBatch) HasBatchId() bool {
	if o != nil && o.BatchId != nil {
		return true
	}

	return false
}

// SetBatchId gets a reference to the given string and assigns it to the BatchId field.
func (o *CatalogsItemsBatch) SetBatchId(v string) {
	o.BatchId = &v
}

// GetCreatedTime returns the CreatedTime field value if set, zero value otherwise.
func (o *CatalogsItemsBatch) GetCreatedTime() time.Time {
	if o == nil || o.CreatedTime == nil {
		var ret time.Time
		return ret
	}
	return *o.CreatedTime
}

// GetCreatedTimeOk returns a tuple with the CreatedTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsItemsBatch) GetCreatedTimeOk() (*time.Time, bool) {
	if o == nil || o.CreatedTime == nil {
		return nil, false
	}
	return o.CreatedTime, true
}

// HasCreatedTime returns a boolean if a field has been set.
func (o *CatalogsItemsBatch) HasCreatedTime() bool {
	if o != nil && o.CreatedTime != nil {
		return true
	}

	return false
}

// SetCreatedTime gets a reference to the given time.Time and assigns it to the CreatedTime field.
func (o *CatalogsItemsBatch) SetCreatedTime(v time.Time) {
	o.CreatedTime = &v
}

// GetCompletedTime returns the CompletedTime field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *CatalogsItemsBatch) GetCompletedTime() time.Time {
	if o == nil || o.CompletedTime.Get() == nil {
		var ret time.Time
		return ret
	}
	return *o.CompletedTime.Get()
}

// GetCompletedTimeOk returns a tuple with the CompletedTime field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *CatalogsItemsBatch) GetCompletedTimeOk() (*time.Time, bool) {
	if o == nil  {
		return nil, false
	}
	return o.CompletedTime.Get(), o.CompletedTime.IsSet()
}

// HasCompletedTime returns a boolean if a field has been set.
func (o *CatalogsItemsBatch) HasCompletedTime() bool {
	if o != nil && o.CompletedTime.IsSet() {
		return true
	}

	return false
}

// SetCompletedTime gets a reference to the given NullableTime and assigns it to the CompletedTime field.
func (o *CatalogsItemsBatch) SetCompletedTime(v time.Time) {
	o.CompletedTime.Set(&v)
}
// SetCompletedTimeNil sets the value for CompletedTime to be an explicit nil
func (o *CatalogsItemsBatch) SetCompletedTimeNil() {
	o.CompletedTime.Set(nil)
}

// UnsetCompletedTime ensures that no value is present for CompletedTime, not even an explicit nil
func (o *CatalogsItemsBatch) UnsetCompletedTime() {
	o.CompletedTime.Unset()
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *CatalogsItemsBatch) GetStatus() BatchOperationStatus {
	if o == nil || o.Status == nil {
		var ret BatchOperationStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CatalogsItemsBatch) GetStatusOk() (*BatchOperationStatus, bool) {
	if o == nil || o.Status == nil {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *CatalogsItemsBatch) HasStatus() bool {
	if o != nil && o.Status != nil {
		return true
	}

	return false
}

// SetStatus gets a reference to the given BatchOperationStatus and assigns it to the Status field.
func (o *CatalogsItemsBatch) SetStatus(v BatchOperationStatus) {
	o.Status = &v
}

func (o CatalogsItemsBatch) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if o.Items != nil {
		toSerialize["items"] = o.Items
	}
	if o.BatchId != nil {
		toSerialize["batch_id"] = o.BatchId
	}
	if o.CreatedTime != nil {
		toSerialize["created_time"] = o.CreatedTime
	}
	if o.CompletedTime.IsSet() {
		toSerialize["completed_time"] = o.CompletedTime.Get()
	}
	if o.Status != nil {
		toSerialize["status"] = o.Status
	}
	return json.Marshal(toSerialize)
}

type NullableCatalogsItemsBatch struct {
	value *CatalogsItemsBatch
	isSet bool
}

func (v NullableCatalogsItemsBatch) Get() *CatalogsItemsBatch {
	return v.value
}

func (v *NullableCatalogsItemsBatch) Set(val *CatalogsItemsBatch) {
	v.value = val
	v.isSet = true
}

func (v NullableCatalogsItemsBatch) IsSet() bool {
	return v.isSet
}

func (v *NullableCatalogsItemsBatch) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCatalogsItemsBatch(val *CatalogsItemsBatch) *NullableCatalogsItemsBatch {
	return &NullableCatalogsItemsBatch{value: val, isSet: true}
}

func (v NullableCatalogsItemsBatch) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCatalogsItemsBatch) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


