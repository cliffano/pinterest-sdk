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
	"fmt"
)

// ProductGroupSummaryStatus Summary status for product group
type ProductGroupSummaryStatus string

// List of ProductGroupSummaryStatus
const (
	RUNNING ProductGroupSummaryStatus = "RUNNING"
	PAUSED ProductGroupSummaryStatus = "PAUSED"
	EXCLUDED ProductGroupSummaryStatus = "EXCLUDED"
	ARCHIVED ProductGroupSummaryStatus = "ARCHIVED"
)

// All allowed values of ProductGroupSummaryStatus enum
var AllowedProductGroupSummaryStatusEnumValues = []ProductGroupSummaryStatus{
	"RUNNING",
	"PAUSED",
	"EXCLUDED",
	"ARCHIVED",
}

func (v *ProductGroupSummaryStatus) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := ProductGroupSummaryStatus(value)
	for _, existing := range AllowedProductGroupSummaryStatusEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid ProductGroupSummaryStatus", value)
}

// NewProductGroupSummaryStatusFromValue returns a pointer to a valid ProductGroupSummaryStatus
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewProductGroupSummaryStatusFromValue(v string) (*ProductGroupSummaryStatus, error) {
	ev := ProductGroupSummaryStatus(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for ProductGroupSummaryStatus: valid values are %v", v, AllowedProductGroupSummaryStatusEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v ProductGroupSummaryStatus) IsValid() bool {
	for _, existing := range AllowedProductGroupSummaryStatusEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to ProductGroupSummaryStatus value
func (v ProductGroupSummaryStatus) Ptr() *ProductGroupSummaryStatus {
	return &v
}

type NullableProductGroupSummaryStatus struct {
	value *ProductGroupSummaryStatus
	isSet bool
}

func (v NullableProductGroupSummaryStatus) Get() *ProductGroupSummaryStatus {
	return v.value
}

func (v *NullableProductGroupSummaryStatus) Set(val *ProductGroupSummaryStatus) {
	v.value = val
	v.isSet = true
}

func (v NullableProductGroupSummaryStatus) IsSet() bool {
	return v.isSet
}

func (v *NullableProductGroupSummaryStatus) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableProductGroupSummaryStatus(val *ProductGroupSummaryStatus) *NullableProductGroupSummaryStatus {
	return &NullableProductGroupSummaryStatus{value: val, isSet: true}
}

func (v NullableProductGroupSummaryStatus) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableProductGroupSummaryStatus) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

