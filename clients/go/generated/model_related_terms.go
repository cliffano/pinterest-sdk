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

// checks if the RelatedTerms type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &RelatedTerms{}

// RelatedTerms struct for RelatedTerms
type RelatedTerms struct {
	// First input term. For example, if you pass \"?terms=clothes,workout\", then id will be \"clothes\"
	Id *string `json:"id,omitempty"`
	// Total number of related terms returned
	RelatedTermCount *int32 `json:"related_term_count,omitempty"`
	// The id of the advertiser.
	RelatedTermsList []RelatedTermsRelatedTermsListInner `json:"related_terms_list,omitempty"`
}

// NewRelatedTerms instantiates a new RelatedTerms object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewRelatedTerms() *RelatedTerms {
	this := RelatedTerms{}
	return &this
}

// NewRelatedTermsWithDefaults instantiates a new RelatedTerms object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewRelatedTermsWithDefaults() *RelatedTerms {
	this := RelatedTerms{}
	return &this
}

// GetId returns the Id field value if set, zero value otherwise.
func (o *RelatedTerms) GetId() string {
	if o == nil || IsNil(o.Id) {
		var ret string
		return ret
	}
	return *o.Id
}

// GetIdOk returns a tuple with the Id field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RelatedTerms) GetIdOk() (*string, bool) {
	if o == nil || IsNil(o.Id) {
		return nil, false
	}
	return o.Id, true
}

// HasId returns a boolean if a field has been set.
func (o *RelatedTerms) HasId() bool {
	if o != nil && !IsNil(o.Id) {
		return true
	}

	return false
}

// SetId gets a reference to the given string and assigns it to the Id field.
func (o *RelatedTerms) SetId(v string) {
	o.Id = &v
}

// GetRelatedTermCount returns the RelatedTermCount field value if set, zero value otherwise.
func (o *RelatedTerms) GetRelatedTermCount() int32 {
	if o == nil || IsNil(o.RelatedTermCount) {
		var ret int32
		return ret
	}
	return *o.RelatedTermCount
}

// GetRelatedTermCountOk returns a tuple with the RelatedTermCount field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RelatedTerms) GetRelatedTermCountOk() (*int32, bool) {
	if o == nil || IsNil(o.RelatedTermCount) {
		return nil, false
	}
	return o.RelatedTermCount, true
}

// HasRelatedTermCount returns a boolean if a field has been set.
func (o *RelatedTerms) HasRelatedTermCount() bool {
	if o != nil && !IsNil(o.RelatedTermCount) {
		return true
	}

	return false
}

// SetRelatedTermCount gets a reference to the given int32 and assigns it to the RelatedTermCount field.
func (o *RelatedTerms) SetRelatedTermCount(v int32) {
	o.RelatedTermCount = &v
}

// GetRelatedTermsList returns the RelatedTermsList field value if set, zero value otherwise.
func (o *RelatedTerms) GetRelatedTermsList() []RelatedTermsRelatedTermsListInner {
	if o == nil || IsNil(o.RelatedTermsList) {
		var ret []RelatedTermsRelatedTermsListInner
		return ret
	}
	return o.RelatedTermsList
}

// GetRelatedTermsListOk returns a tuple with the RelatedTermsList field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *RelatedTerms) GetRelatedTermsListOk() ([]RelatedTermsRelatedTermsListInner, bool) {
	if o == nil || IsNil(o.RelatedTermsList) {
		return nil, false
	}
	return o.RelatedTermsList, true
}

// HasRelatedTermsList returns a boolean if a field has been set.
func (o *RelatedTerms) HasRelatedTermsList() bool {
	if o != nil && !IsNil(o.RelatedTermsList) {
		return true
	}

	return false
}

// SetRelatedTermsList gets a reference to the given []RelatedTermsRelatedTermsListInner and assigns it to the RelatedTermsList field.
func (o *RelatedTerms) SetRelatedTermsList(v []RelatedTermsRelatedTermsListInner) {
	o.RelatedTermsList = v
}

func (o RelatedTerms) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o RelatedTerms) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if !IsNil(o.Id) {
		toSerialize["id"] = o.Id
	}
	if !IsNil(o.RelatedTermCount) {
		toSerialize["related_term_count"] = o.RelatedTermCount
	}
	if !IsNil(o.RelatedTermsList) {
		toSerialize["related_terms_list"] = o.RelatedTermsList
	}
	return toSerialize, nil
}

type NullableRelatedTerms struct {
	value *RelatedTerms
	isSet bool
}

func (v NullableRelatedTerms) Get() *RelatedTerms {
	return v.value
}

func (v *NullableRelatedTerms) Set(val *RelatedTerms) {
	v.value = val
	v.isSet = true
}

func (v NullableRelatedTerms) IsSet() bool {
	return v.isSet
}

func (v *NullableRelatedTerms) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableRelatedTerms(val *RelatedTerms) *NullableRelatedTerms {
	return &NullableRelatedTerms{value: val, isSet: true}
}

func (v NullableRelatedTerms) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableRelatedTerms) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

