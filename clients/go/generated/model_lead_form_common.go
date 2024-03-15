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

// checks if the LeadFormCommon type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &LeadFormCommon{}

// LeadFormCommon Creation fields
type LeadFormCommon struct {
	// Internal name of the lead form.
	Name NullableString `json:"name,omitempty"`
	// A link to the advertiser's privacy policy. This will be included in the lead form's disclosure language.
	PrivacyPolicyLink NullableString `json:"privacy_policy_link,omitempty"`
	// Whether the advertiser has accepted Pinterest's terms of service for creating a lead ad.
	HasAcceptedTerms *bool `json:"has_accepted_terms,omitempty"`
	// A message for people who complete the form to let them know what happens next.
	CompletionMessage NullableString `json:"completion_message,omitempty"`
	Status *LeadFormStatus `json:"status,omitempty"`
	// Additional disclosure language to be included in the lead form.
	DisclosureLanguage NullableString `json:"disclosure_language,omitempty"`
	// List of questions to be displayed on the lead form.
	Questions []LeadFormQuestion `json:"questions,omitempty"`
}

// NewLeadFormCommon instantiates a new LeadFormCommon object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewLeadFormCommon() *LeadFormCommon {
	this := LeadFormCommon{}
	return &this
}

// NewLeadFormCommonWithDefaults instantiates a new LeadFormCommon object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewLeadFormCommonWithDefaults() *LeadFormCommon {
	this := LeadFormCommon{}
	return &this
}

// GetName returns the Name field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *LeadFormCommon) GetName() string {
	if o == nil || IsNil(o.Name.Get()) {
		var ret string
		return ret
	}
	return *o.Name.Get()
}

// GetNameOk returns a tuple with the Name field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *LeadFormCommon) GetNameOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.Name.Get(), o.Name.IsSet()
}

// HasName returns a boolean if a field has been set.
func (o *LeadFormCommon) HasName() bool {
	if o != nil && o.Name.IsSet() {
		return true
	}

	return false
}

// SetName gets a reference to the given NullableString and assigns it to the Name field.
func (o *LeadFormCommon) SetName(v string) {
	o.Name.Set(&v)
}
// SetNameNil sets the value for Name to be an explicit nil
func (o *LeadFormCommon) SetNameNil() {
	o.Name.Set(nil)
}

// UnsetName ensures that no value is present for Name, not even an explicit nil
func (o *LeadFormCommon) UnsetName() {
	o.Name.Unset()
}

// GetPrivacyPolicyLink returns the PrivacyPolicyLink field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *LeadFormCommon) GetPrivacyPolicyLink() string {
	if o == nil || IsNil(o.PrivacyPolicyLink.Get()) {
		var ret string
		return ret
	}
	return *o.PrivacyPolicyLink.Get()
}

// GetPrivacyPolicyLinkOk returns a tuple with the PrivacyPolicyLink field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *LeadFormCommon) GetPrivacyPolicyLinkOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.PrivacyPolicyLink.Get(), o.PrivacyPolicyLink.IsSet()
}

// HasPrivacyPolicyLink returns a boolean if a field has been set.
func (o *LeadFormCommon) HasPrivacyPolicyLink() bool {
	if o != nil && o.PrivacyPolicyLink.IsSet() {
		return true
	}

	return false
}

// SetPrivacyPolicyLink gets a reference to the given NullableString and assigns it to the PrivacyPolicyLink field.
func (o *LeadFormCommon) SetPrivacyPolicyLink(v string) {
	o.PrivacyPolicyLink.Set(&v)
}
// SetPrivacyPolicyLinkNil sets the value for PrivacyPolicyLink to be an explicit nil
func (o *LeadFormCommon) SetPrivacyPolicyLinkNil() {
	o.PrivacyPolicyLink.Set(nil)
}

// UnsetPrivacyPolicyLink ensures that no value is present for PrivacyPolicyLink, not even an explicit nil
func (o *LeadFormCommon) UnsetPrivacyPolicyLink() {
	o.PrivacyPolicyLink.Unset()
}

// GetHasAcceptedTerms returns the HasAcceptedTerms field value if set, zero value otherwise.
func (o *LeadFormCommon) GetHasAcceptedTerms() bool {
	if o == nil || IsNil(o.HasAcceptedTerms) {
		var ret bool
		return ret
	}
	return *o.HasAcceptedTerms
}

// GetHasAcceptedTermsOk returns a tuple with the HasAcceptedTerms field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *LeadFormCommon) GetHasAcceptedTermsOk() (*bool, bool) {
	if o == nil || IsNil(o.HasAcceptedTerms) {
		return nil, false
	}
	return o.HasAcceptedTerms, true
}

// HasHasAcceptedTerms returns a boolean if a field has been set.
func (o *LeadFormCommon) HasHasAcceptedTerms() bool {
	if o != nil && !IsNil(o.HasAcceptedTerms) {
		return true
	}

	return false
}

// SetHasAcceptedTerms gets a reference to the given bool and assigns it to the HasAcceptedTerms field.
func (o *LeadFormCommon) SetHasAcceptedTerms(v bool) {
	o.HasAcceptedTerms = &v
}

// GetCompletionMessage returns the CompletionMessage field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *LeadFormCommon) GetCompletionMessage() string {
	if o == nil || IsNil(o.CompletionMessage.Get()) {
		var ret string
		return ret
	}
	return *o.CompletionMessage.Get()
}

// GetCompletionMessageOk returns a tuple with the CompletionMessage field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *LeadFormCommon) GetCompletionMessageOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.CompletionMessage.Get(), o.CompletionMessage.IsSet()
}

// HasCompletionMessage returns a boolean if a field has been set.
func (o *LeadFormCommon) HasCompletionMessage() bool {
	if o != nil && o.CompletionMessage.IsSet() {
		return true
	}

	return false
}

// SetCompletionMessage gets a reference to the given NullableString and assigns it to the CompletionMessage field.
func (o *LeadFormCommon) SetCompletionMessage(v string) {
	o.CompletionMessage.Set(&v)
}
// SetCompletionMessageNil sets the value for CompletionMessage to be an explicit nil
func (o *LeadFormCommon) SetCompletionMessageNil() {
	o.CompletionMessage.Set(nil)
}

// UnsetCompletionMessage ensures that no value is present for CompletionMessage, not even an explicit nil
func (o *LeadFormCommon) UnsetCompletionMessage() {
	o.CompletionMessage.Unset()
}

// GetStatus returns the Status field value if set, zero value otherwise.
func (o *LeadFormCommon) GetStatus() LeadFormStatus {
	if o == nil || IsNil(o.Status) {
		var ret LeadFormStatus
		return ret
	}
	return *o.Status
}

// GetStatusOk returns a tuple with the Status field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *LeadFormCommon) GetStatusOk() (*LeadFormStatus, bool) {
	if o == nil || IsNil(o.Status) {
		return nil, false
	}
	return o.Status, true
}

// HasStatus returns a boolean if a field has been set.
func (o *LeadFormCommon) HasStatus() bool {
	if o != nil && !IsNil(o.Status) {
		return true
	}

	return false
}

// SetStatus gets a reference to the given LeadFormStatus and assigns it to the Status field.
func (o *LeadFormCommon) SetStatus(v LeadFormStatus) {
	o.Status = &v
}

// GetDisclosureLanguage returns the DisclosureLanguage field value if set, zero value otherwise (both if not set or set to explicit null).
func (o *LeadFormCommon) GetDisclosureLanguage() string {
	if o == nil || IsNil(o.DisclosureLanguage.Get()) {
		var ret string
		return ret
	}
	return *o.DisclosureLanguage.Get()
}

// GetDisclosureLanguageOk returns a tuple with the DisclosureLanguage field value if set, nil otherwise
// and a boolean to check if the value has been set.
// NOTE: If the value is an explicit nil, `nil, true` will be returned
func (o *LeadFormCommon) GetDisclosureLanguageOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return o.DisclosureLanguage.Get(), o.DisclosureLanguage.IsSet()
}

// HasDisclosureLanguage returns a boolean if a field has been set.
func (o *LeadFormCommon) HasDisclosureLanguage() bool {
	if o != nil && o.DisclosureLanguage.IsSet() {
		return true
	}

	return false
}

// SetDisclosureLanguage gets a reference to the given NullableString and assigns it to the DisclosureLanguage field.
func (o *LeadFormCommon) SetDisclosureLanguage(v string) {
	o.DisclosureLanguage.Set(&v)
}
// SetDisclosureLanguageNil sets the value for DisclosureLanguage to be an explicit nil
func (o *LeadFormCommon) SetDisclosureLanguageNil() {
	o.DisclosureLanguage.Set(nil)
}

// UnsetDisclosureLanguage ensures that no value is present for DisclosureLanguage, not even an explicit nil
func (o *LeadFormCommon) UnsetDisclosureLanguage() {
	o.DisclosureLanguage.Unset()
}

// GetQuestions returns the Questions field value if set, zero value otherwise.
func (o *LeadFormCommon) GetQuestions() []LeadFormQuestion {
	if o == nil || IsNil(o.Questions) {
		var ret []LeadFormQuestion
		return ret
	}
	return o.Questions
}

// GetQuestionsOk returns a tuple with the Questions field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *LeadFormCommon) GetQuestionsOk() ([]LeadFormQuestion, bool) {
	if o == nil || IsNil(o.Questions) {
		return nil, false
	}
	return o.Questions, true
}

// HasQuestions returns a boolean if a field has been set.
func (o *LeadFormCommon) HasQuestions() bool {
	if o != nil && !IsNil(o.Questions) {
		return true
	}

	return false
}

// SetQuestions gets a reference to the given []LeadFormQuestion and assigns it to the Questions field.
func (o *LeadFormCommon) SetQuestions(v []LeadFormQuestion) {
	o.Questions = v
}

func (o LeadFormCommon) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o LeadFormCommon) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	if o.Name.IsSet() {
		toSerialize["name"] = o.Name.Get()
	}
	if o.PrivacyPolicyLink.IsSet() {
		toSerialize["privacy_policy_link"] = o.PrivacyPolicyLink.Get()
	}
	if !IsNil(o.HasAcceptedTerms) {
		toSerialize["has_accepted_terms"] = o.HasAcceptedTerms
	}
	if o.CompletionMessage.IsSet() {
		toSerialize["completion_message"] = o.CompletionMessage.Get()
	}
	if !IsNil(o.Status) {
		toSerialize["status"] = o.Status
	}
	if o.DisclosureLanguage.IsSet() {
		toSerialize["disclosure_language"] = o.DisclosureLanguage.Get()
	}
	if !IsNil(o.Questions) {
		toSerialize["questions"] = o.Questions
	}
	return toSerialize, nil
}

type NullableLeadFormCommon struct {
	value *LeadFormCommon
	isSet bool
}

func (v NullableLeadFormCommon) Get() *LeadFormCommon {
	return v.value
}

func (v *NullableLeadFormCommon) Set(val *LeadFormCommon) {
	v.value = val
	v.isSet = true
}

func (v NullableLeadFormCommon) IsSet() bool {
	return v.isSet
}

func (v *NullableLeadFormCommon) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableLeadFormCommon(val *LeadFormCommon) *NullableLeadFormCommon {
	return &NullableLeadFormCommon{value: val, isSet: true}
}

func (v NullableLeadFormCommon) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableLeadFormCommon) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


