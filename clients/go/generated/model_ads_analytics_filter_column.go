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

// AdsAnalyticsFilterColumn Reporting columns for sync reporting data filter
type AdsAnalyticsFilterColumn string

// List of AdsAnalyticsFilterColumn
const (
	SPEND_IN_DOLLAR AdsAnalyticsFilterColumn = "SPEND_IN_DOLLAR"
	TOTAL_IMPRESSION AdsAnalyticsFilterColumn = "TOTAL_IMPRESSION"
)

// All allowed values of AdsAnalyticsFilterColumn enum
var AllowedAdsAnalyticsFilterColumnEnumValues = []AdsAnalyticsFilterColumn{
	"SPEND_IN_DOLLAR",
	"TOTAL_IMPRESSION",
}

func (v *AdsAnalyticsFilterColumn) UnmarshalJSON(src []byte) error {
	var value string
	err := json.Unmarshal(src, &value)
	if err != nil {
		return err
	}
	enumTypeValue := AdsAnalyticsFilterColumn(value)
	for _, existing := range AllowedAdsAnalyticsFilterColumnEnumValues {
		if existing == enumTypeValue {
			*v = enumTypeValue
			return nil
		}
	}

	return fmt.Errorf("%+v is not a valid AdsAnalyticsFilterColumn", value)
}

// NewAdsAnalyticsFilterColumnFromValue returns a pointer to a valid AdsAnalyticsFilterColumn
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewAdsAnalyticsFilterColumnFromValue(v string) (*AdsAnalyticsFilterColumn, error) {
	ev := AdsAnalyticsFilterColumn(v)
	if ev.IsValid() {
		return &ev, nil
	} else {
		return nil, fmt.Errorf("invalid value '%v' for AdsAnalyticsFilterColumn: valid values are %v", v, AllowedAdsAnalyticsFilterColumnEnumValues)
	}
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v AdsAnalyticsFilterColumn) IsValid() bool {
	for _, existing := range AllowedAdsAnalyticsFilterColumnEnumValues {
		if existing == v {
			return true
		}
	}
	return false
}

// Ptr returns reference to AdsAnalyticsFilterColumn value
func (v AdsAnalyticsFilterColumn) Ptr() *AdsAnalyticsFilterColumn {
	return &v
}

type NullableAdsAnalyticsFilterColumn struct {
	value *AdsAnalyticsFilterColumn
	isSet bool
}

func (v NullableAdsAnalyticsFilterColumn) Get() *AdsAnalyticsFilterColumn {
	return v.value
}

func (v *NullableAdsAnalyticsFilterColumn) Set(val *AdsAnalyticsFilterColumn) {
	v.value = val
	v.isSet = true
}

func (v NullableAdsAnalyticsFilterColumn) IsSet() bool {
	return v.isSet
}

func (v *NullableAdsAnalyticsFilterColumn) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableAdsAnalyticsFilterColumn(val *AdsAnalyticsFilterColumn) *NullableAdsAnalyticsFilterColumn {
	return &NullableAdsAnalyticsFilterColumn{value: val, isSet: true}
}

func (v NullableAdsAnalyticsFilterColumn) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableAdsAnalyticsFilterColumn) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}

