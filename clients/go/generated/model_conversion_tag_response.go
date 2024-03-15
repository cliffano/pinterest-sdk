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

// checks if the ConversionTagResponse type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &ConversionTagResponse{}

// ConversionTagResponse struct for ConversionTagResponse
type ConversionTagResponse struct {
	// Ad account ID.
	AdAccountId *string `json:"ad_account_id,omitempty"`
	// Tag code snippet.
	CodeSnippet *string `json:"code_snippet,omitempty"`
	EnhancedMatchStatus NullableEnhancedMatchStatusType `json:"enhanced_match_status,omitempty"`
	// Tag ID.
	Id *string `json:"id,omitempty"`
	// Time for the last event fired.
	LastFiredTimeMs NullableFloat32 `json:"last_fired_time_ms,omitempty"`
	// Conversion tag name.
	Name *string `json:"name,omitempty"`
	Status *EntityStatus `json:"status,omitempty"`
	// Version number.
	Version *string `json:"version,omitempty"`
	Configs *ConversionTagConfigs `json:"configs,omitempty"`
}

// NewConversionTagResponse instantiates a new ConversionTagResponse object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewConversionTagResponse() *ConversionTagResponse {
	this := ConversionTagResponse{}
	return &this
}

// NewConversionTagResponseWithDefaults instantiates a new ConversionTagResponse object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewConversionTagResponseWithDefaults() *ConversionTagResponse {
	this := ConversionTagResponse{}
	return &this
}

// GetAdAccountId returns the AdAccountId field value if set, zero value otherwise.
func (o *ConversionTagResponse) GetAdAccountId() string {
	if o == nil || IsNil(o.AdAccountId) {
		var ret string
		return ret
	}
	return *o.AdAccountId
}

// GetAdAccountIdOk returns a tuple with the AdAccountId field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionTagResponse) GetAdAccountIdOk() (*string, bool) {
	if o == nil || IsNil(o.AdAccountId) {
		return nil, false
	}
	return o.AdAccountId, true
}

// HasAdAccountId returns a boolean if a field has been set.
func (o *ConversionTagResponse) HasAdAccountId() bool {
	if o != nil && !IsNil(o.AdAccountId) {
		return true
	}

	return false
}

// SetAdAccountId gets a reference to the given string and assigns it to the AdAccountId field.
func (o *ConversionTagResponse) SetAdAccountId(v string) {
	o.AdAccountId = &v
}

// GetCodeSnippet returns the CodeSnippet field value if set, zero value otherwise.
func (o *ConversionTagResponse) GetCodeSnippet() string {
	if o == nil || IsNil(o.CodeSnippet) {
		var ret string
		return ret
	}
	return *o.CodeSnippet
}

// GetCodeSnippetOk returns a tuple with the CodeSnippet field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionTagResponse) GetCodeSnippetOk() (*string, bool) {
	if o == nil || IsNil(o.CodeSnippet) {
		return nil, false
	}
	return o.CodeSnippet, true
}

// HasCodeSnippet returns a boolean if a field has been set.
func (o *ConversionTagResponse) HasCodeSnippet() bool {
	if o != nil && !IsNil(o.CodeSnippet) {
		return true
	}

	return false
}

// SetCodeSnippet gets a reference to the given string and assigns it to the CodeSnippet field.
func (o *ConversionTagResponse) SetCodeSnippet(v string) {
	o.CodeSnippet = &v
}

// GetEnhancedMatchStatus returns the EnhancedMatchStatus field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *ConversionTagResponse) GetEnhancedMatchStatus() EnhancedMatchStatusType {
	if o == nil || IsNil(o.EnhancedMatchStatus.Get()) {
		var ret EnhancedMatchStatusType
		return ret
	}
	return *o.EnhancedMatchStatus.Get()
}

// GetEnhancedMatchStatusOk returns a tuple with the EnhancedMatchStatus field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *ConversionTagResponse) GetEnhancedMatchStatusOk() (*EnhancedMatchStatusType, bool) {
	if o == nil {
		return nil, false
	}
	return o.EnhancedMatchStatus.Get(), o.EnhancedMatchStatus.IsSet()
}

// HasEnhancedMatchStatus returns a boolean if a field has been set.
func (o *ConversionTagResponse) HasEnhancedMatchStatus() bool {
	if o != nil && o.EnhancedMatchStatus.IsSet() {
		return true
	}

	return false
}

// SetEnhancedMatchStatus gets a reference to the given NullableEnhancedMatchStatusType and assigns it to the EnhancedMatchStatus field.
func (o *ConversionTagResponse) SetEnhancedMatchStatus(v EnhancedMatchStatusType) {
	o.EnhancedMatchStatus.Set(&v)
}
// SetEnhancedMatchStatusNil sets the value for EnhancedMatchStatus to be an explicit nil
func (o *ConversionTagResponse) SetEnhancedMatchStatusNil() {
	o.EnhancedMatchStatus.Set(nil)
}

// UnsetEnhancedMatchStatus ensures that no value is present for EnhancedMatchStatus, not even an explicit nil
func (o *ConversionTagResponse) UnsetEnhancedMatchStatus() {
	o.EnhancedMatchStatus.Unset()
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *ConversionTagResponse) GetId() string {
	if o == nil || IsNil(o.Id) {
		var ret string
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionTagResponse) GetIdOk() (*string, bool) {
	if o == nil || IsNil(o.Id) {
		return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *ConversionTagResponse) HasId() bool {
	if o != nil && !IsNil(o.Id) {
		return true
	}

	return false
}

// SetId gets a reference to the given string and assigns it to the Id field.
func (o *ConversionTagResponse) SetId(v string) {
	o.Id = &v
}

// GetLastFiredTimeMs returns the LastFiredTimeMs field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *ConversionTagResponse) GetLastFiredTimeMs() float32 {
	if o == nil || IsNil(o.LastFiredTimeMs.Get()) {
		var ret float32
		return ret
	}
	return *o.LastFiredTimeMs.Get()
}

// GetLastFiredTimeMsOk returns a tuple with the LastFiredTimeMs field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *ConversionTagResponse) GetLastFiredTimeMsOk() (*float32, bool) {
	if o == nil {
		return nil, false
	}
	return o.LastFiredTimeMs.Get(), o.LastFiredTimeMs.IsSet()
}

// HasLastFiredTimeMs returns a boolean if a field has been set.
func (o *ConversionTagResponse) HasLastFiredTimeMs() bool {
	if o != nil && o.LastFiredTimeMs.IsSet() {
		return true
	}

	return false
}

// SetLastFiredTimeMs gets a reference to the given NullableFloat32 and assigns it to the LastFiredTimeMs field.
func (o *ConversionTagResponse) SetLastFiredTimeMs(v float32) {
	o.LastFiredTimeMs.Set(&v)
}
// SetLastFiredTimeMsNil sets the value for LastFiredTimeMs to be an explicit nil
func (o *ConversionTagResponse) SetLastFiredTimeMsNil() {
	o.LastFiredTimeMs.Set(nil)
}

// UnsetLastFiredTimeMs ensures that no value is present for LastFiredTimeMs, not even an explicit nil
func (o *ConversionTagResponse) UnsetLastFiredTimeMs() {
	o.LastFiredTimeMs.Unset()
}

// GetName returns the Name field value if set, zero value otherwise.
func (o *ConversionTagResponse) GetName() string {
	if o == nil || IsNil(o.Name) {
		var ret string
		return ret
	}
	return *o.Name
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionTagResponse) GetNameOk() (*string, bool) {
	if o == nil || IsNil(o.Name) {
		return nil, false
	}
	return o.Name, true
}

// HasName returns a boolean if a field has been set.
func (o *ConversionTagResponse) HasName() bool {
	if o != nil && !IsNil(o.Name) {
		return true
	}

	return false
}

// SetName gets a reference to the given string and assigns it to the Name field.
func (o *ConversionTagResponse) SetName(v string) {
	o.Name = &v
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *ConversionTagResponse) GetStatus() EntityStatus {
	if o == nil || IsNil(o.Status) {
		var ret EntityStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionTagResponse) GetStatusOk() (*EntityStatus, bool) {
	if o == nil || IsNil(o.Status) {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *ConversionTagResponse) HasStatus() bool {
	if o != nil && !IsNil(o.Status) {
		return true
	}

	return false
}

// SetStatus gets a reference to the given EntityStatus and assigns it to the Status field.
func (o *ConversionTagResponse) SetStatus(v EntityStatus) {
	o.Status = &v
}

// GetVersion returns the Version field value if set, zero value otherwise.
func (o *ConversionTagResponse) GetVersion() string {
	if o == nil || IsNil(o.Version) {
		var ret string
		return ret
	}
	return *o.Version
}

// GetVersionOk returns a tuple with the Version field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionTagResponse) GetVersionOk() (*string, bool) {
	if o == nil || IsNil(o.Version) {
		return nil, false
	}
	return o.Version, true
}

// HasVersion returns a boolean if a field has been set.
func (o *ConversionTagResponse) HasVersion() bool {
	if o != nil && !IsNil(o.Version) {
		return true
	}

	return false
}

// SetVersion gets a reference to the given string and assigns it to the Version field.
func (o *ConversionTagResponse) SetVersion(v string) {
	o.Version = &v
}

// GetConfigs returns the Configs field value if set, zero value otherwise.
func (o *ConversionTagResponse) GetConfigs() ConversionTagConfigs {
	if o == nil || IsNil(o.Configs) {
		var ret ConversionTagConfigs
		return ret
	}
	return *o.Configs
}

// GetConfigsOk returns a tuple with the Configs field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *ConversionTagResponse) GetConfigsOk() (*ConversionTagConfigs, bool) {
	if o == nil || IsNil(o.Configs) {
		return nil, false
	}
	return o.Configs, true
}

// HasConfigs returns a boolean if a field has been set.
func (o *ConversionTagResponse) HasConfigs() bool {
	if o != nil && !IsNil(o.Configs) {
		return true
	}

	return false
}

// SetConfigs gets a reference to the given ConversionTagConfigs and assigns it to the Configs field.
func (o *ConversionTagResponse) SetConfigs(v ConversionTagConfigs) {
	o.Configs = &v
}

func (o ConversionTagResponse) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o ConversionTagResponse) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.AdAccountId) {
		toSerialize["ad_account_id"] = o.AdAccountId
	}
	if !IsNil(o.CodeSnippet) {
		toSerialize["code_snippet"] = o.CodeSnippet
	}
	if o.EnhancedMatchStatus.IsSet() {
		toSerialize["enhanced_match_status"] = o.EnhancedMatchStatus.Get()
	}
	if !IsNil(o.Id) {
		toSerialize["id"] = o.Id
	}
	if o.LastFiredTimeMs.IsSet() {
		toSerialize["last_fired_time_ms"] = o.LastFiredTimeMs.Get()
	}
	if !IsNil(o.Name) {
		toSerialize["name"] = o.Name
	}
	if !IsNil(o.Status) {
		toSerialize["status"] = o.Status
	}
	if !IsNil(o.Version) {
		toSerialize["version"] = o.Version
	}
	if !IsNil(o.Configs) {
		toSerialize["configs"] = o.Configs
	}
	return toSerialize, nil
}

type NullableConversionTagResponse struct {
	value *ConversionTagResponse
	isSet bool
}

func (v NullableConversionTagResponse) Get() *ConversionTagResponse {
	return v.value
}

func (v *NullableConversionTagResponse) Set(val *ConversionTagResponse) {
	v.value = val
	v.isSet = true
}

func (v NullableConversionTagResponse) IsSet() bool {
	return v.isSet
}

func (v *NullableConversionTagResponse) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableConversionTagResponse(val *ConversionTagResponse) *NullableConversionTagResponse {
	return &NullableConversionTagResponse{value: val, isSet: true}
}

func (v NullableConversionTagResponse) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableConversionTagResponse) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


