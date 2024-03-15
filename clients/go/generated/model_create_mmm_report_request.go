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

// checks if the CreateMMMReportRequest type satisfies the MappedNullable interface at compile time
var _ MappedNullable = &CreateMMMReportRequest{}

// CreateMMMReportRequest struct for CreateMMMReportRequest
type CreateMMMReportRequest struct {
	// Name of the Marketing Mix Modeling (MMM) report
	ReportName string `json:"report_name"`
	// Metric report start date (UTC). Format: YYYY-MM-DD
	StartDate string `json:"start_date"`
	// Metric report end date (UTC). Format: YYYY-MM-DD
	EndDate string `json:"end_date"`
	// DAY - metrics are broken down daily.<br> WEEK - metrics are broken down weekly.
	Granularity string `json:"granularity"`
	// Level of the report
	Level string `json:"level"`
	// List of targeting types
	TargetingTypes []MMMReportingTargetingType `json:"targeting_types"`
	// Metric and entity columns
	Columns []MMMReportingColumn `json:"columns"`
	// A List of countries for filtering
	Countries []TargetingAdvertiserCountry `json:"countries,omitempty"`
}

type _CreateMMMReportRequest CreateMMMReportRequest

// NewCreateMMMReportRequest instantiates a new CreateMMMReportRequest object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewCreateMMMReportRequest(reportName string, startDate string, endDate string, granularity string, level string, targetingTypes []MMMReportingTargetingType, columns []MMMReportingColumn) *CreateMMMReportRequest {
	this := CreateMMMReportRequest{}
	return &this
}

// NewCreateMMMReportRequestWithDefaults instantiates a new CreateMMMReportRequest object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewCreateMMMReportRequestWithDefaults() *CreateMMMReportRequest {
	this := CreateMMMReportRequest{}
	return &this
}

// GetReportName returns the ReportName field value
func (o *CreateMMMReportRequest) GetReportName() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.ReportName
}

// GetReportNameOk returns a tuple with the ReportName field value
// and a boolean to check if the value has been set.
func (o *CreateMMMReportRequest) GetReportNameOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.ReportName, true
}

// SetReportName sets field value
func (o *CreateMMMReportRequest) SetReportName(v string) {
	o.ReportName = v
}

// GetStartDate returns the StartDate field value
func (o *CreateMMMReportRequest) GetStartDate() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.StartDate
}

// GetStartDateOk returns a tuple with the StartDate field value
// and a boolean to check if the value has been set.
func (o *CreateMMMReportRequest) GetStartDateOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.StartDate, true
}

// SetStartDate sets field value
func (o *CreateMMMReportRequest) SetStartDate(v string) {
	o.StartDate = v
}

// GetEndDate returns the EndDate field value
func (o *CreateMMMReportRequest) GetEndDate() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.EndDate
}

// GetEndDateOk returns a tuple with the EndDate field value
// and a boolean to check if the value has been set.
func (o *CreateMMMReportRequest) GetEndDateOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.EndDate, true
}

// SetEndDate sets field value
func (o *CreateMMMReportRequest) SetEndDate(v string) {
	o.EndDate = v
}

// GetGranularity returns the Granularity field value
func (o *CreateMMMReportRequest) GetGranularity() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Granularity
}

// GetGranularityOk returns a tuple with the Granularity field value
// and a boolean to check if the value has been set.
func (o *CreateMMMReportRequest) GetGranularityOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Granularity, true
}

// SetGranularity sets field value
func (o *CreateMMMReportRequest) SetGranularity(v string) {
	o.Granularity = v
}

// GetLevel returns the Level field value
func (o *CreateMMMReportRequest) GetLevel() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Level
}

// GetLevelOk returns a tuple with the Level field value
// and a boolean to check if the value has been set.
func (o *CreateMMMReportRequest) GetLevelOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Level, true
}

// SetLevel sets field value
func (o *CreateMMMReportRequest) SetLevel(v string) {
	o.Level = v
}

// GetTargetingTypes returns the TargetingTypes field value
func (o *CreateMMMReportRequest) GetTargetingTypes() []MMMReportingTargetingType {
	if o == nil {
		var ret []MMMReportingTargetingType
		return ret
	}

	return o.TargetingTypes
}

// GetTargetingTypesOk returns a tuple with the TargetingTypes field value
// and a boolean to check if the value has been set.
func (o *CreateMMMReportRequest) GetTargetingTypesOk() ([]MMMReportingTargetingType, bool) {
	if o == nil {
		return nil, false
	}
	return o.TargetingTypes, true
}

// SetTargetingTypes sets field value
func (o *CreateMMMReportRequest) SetTargetingTypes(v []MMMReportingTargetingType) {
	o.TargetingTypes = v
}

// GetColumns returns the Columns field value
func (o *CreateMMMReportRequest) GetColumns() []MMMReportingColumn {
	if o == nil {
		var ret []MMMReportingColumn
		return ret
	}

	return o.Columns
}

// GetColumnsOk returns a tuple with the Columns field value
// and a boolean to check if the value has been set.
func (o *CreateMMMReportRequest) GetColumnsOk() ([]MMMReportingColumn, bool) {
	if o == nil {
		return nil, false
	}
	return o.Columns, true
}

// SetColumns sets field value
func (o *CreateMMMReportRequest) SetColumns(v []MMMReportingColumn) {
	o.Columns = v
}

// GetCountries returns the Countries field value if set, zero value otherwise.
func (o *CreateMMMReportRequest) GetCountries() []TargetingAdvertiserCountry {
	if o == nil || IsNil(o.Countries) {
		var ret []TargetingAdvertiserCountry
		return ret
	}
	return o.Countries
}

// GetCountriesOk returns a tuple with the Countries field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *CreateMMMReportRequest) GetCountriesOk() ([]TargetingAdvertiserCountry, bool) {
	if o == nil || IsNil(o.Countries) {
		return nil, false
	}
	return o.Countries, true
}

// HasCountries returns a boolean if a field has been set.
func (o *CreateMMMReportRequest) HasCountries() bool {
	if o != nil && !IsNil(o.Countries) {
		return true
	}

	return false
}

// SetCountries gets a reference to the given []TargetingAdvertiserCountry and assigns it to the Countries field.
func (o *CreateMMMReportRequest) SetCountries(v []TargetingAdvertiserCountry) {
	o.Countries = v
}

func (o CreateMMMReportRequest) MarshalJSON() ([]byte, error) {
	toSerialize,err := o.ToMap()
	if err != nil {
		return []byte{}, err
	}
	return json.Marshal(toSerialize)
}

func (o CreateMMMReportRequest) ToMap() (map[string]interface{}, error) {
	toSerialize := map[string]interface{}{}
	toSerialize["report_name"] = o.ReportName
	toSerialize["start_date"] = o.StartDate
	toSerialize["end_date"] = o.EndDate
	toSerialize["granularity"] = o.Granularity
	toSerialize["level"] = o.Level
	toSerialize["targeting_types"] = o.TargetingTypes
	toSerialize["columns"] = o.Columns
	if !IsNil(o.Countries) {
		toSerialize["countries"] = o.Countries
	}
	return toSerialize, nil
}

func (o *CreateMMMReportRequest) UnmarshalJSON(data []byte) (err error) {
	// This validates that all required properties are included in the JSON object
	// by unmarshalling the object into a generic map with string keys and checking
	// that every required field exists as a key in the generic map.
	requiredProperties := []string{
		"report_name",
		"start_date",
		"end_date",
		"granularity",
		"level",
		"targeting_types",
		"columns",
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

	varCreateMMMReportRequest := _CreateMMMReportRequest{}

	decoder := json.NewDecoder(bytes.NewReader(data))
	decoder.DisallowUnknownFields()
	err = decoder.Decode(&varCreateMMMReportRequest)

	if err != nil {
		return err
	}

	*o = CreateMMMReportRequest(varCreateMMMReportRequest)

	return err
}

type NullableCreateMMMReportRequest struct {
	value *CreateMMMReportRequest
	isSet bool
}

func (v NullableCreateMMMReportRequest) Get() *CreateMMMReportRequest {
	return v.value
}

func (v *NullableCreateMMMReportRequest) Set(val *CreateMMMReportRequest) {
	v.value = val
	v.isSet = true
}

func (v NullableCreateMMMReportRequest) IsSet() bool {
	return v.isSet
}

func (v *NullableCreateMMMReportRequest) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableCreateMMMReportRequest(val *CreateMMMReportRequest) *NullableCreateMMMReportRequest {
	return &NullableCreateMMMReportRequest{value: val, isSet: true}
}

func (v NullableCreateMMMReportRequest) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableCreateMMMReportRequest) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


