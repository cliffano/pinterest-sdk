/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi


import (
	"fmt"
)



type BulkUpsertStatus string

// List of BulkUpsertStatus
const (
	RUNNING BulkUpsertStatus = "RUNNING"
	SUCCEEDED BulkUpsertStatus = "SUCCEEDED"
	FAILED BulkUpsertStatus = "FAILED"
)

// AllowedBulkUpsertStatusEnumValues is all the allowed values of BulkUpsertStatus enum
var AllowedBulkUpsertStatusEnumValues = []BulkUpsertStatus{
	"RUNNING",
	"SUCCEEDED",
	"FAILED",
}

// validBulkUpsertStatusEnumValue provides a map of BulkUpsertStatuss for fast verification of use input
var validBulkUpsertStatusEnumValues = map[BulkUpsertStatus]struct{}{
	"RUNNING": {},
	"SUCCEEDED": {},
	"FAILED": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v BulkUpsertStatus) IsValid() bool {
	_, ok := validBulkUpsertStatusEnumValues[v]
	return ok
}

// NewBulkUpsertStatusFromValue returns a pointer to a valid BulkUpsertStatus
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewBulkUpsertStatusFromValue(v string) (BulkUpsertStatus, error) {
	ev := BulkUpsertStatus(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for BulkUpsertStatus: valid values are %v", v, AllowedBulkUpsertStatusEnumValues)
	}
}



// AssertBulkUpsertStatusRequired checks if the required fields are not zero-ed
func AssertBulkUpsertStatusRequired(obj BulkUpsertStatus) error {
	return nil
}

// AssertBulkUpsertStatusConstraints checks if the values respects the defined constraints
func AssertBulkUpsertStatusConstraints(obj BulkUpsertStatus) error {
	return nil
}