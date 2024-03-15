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


// BulkReportingJobStatus : Possible status for a bulk reporting job
type BulkReportingJobStatus string

// List of BulkReportingJobStatus
const (
	DOES_NOT_EXIST BulkReportingJobStatus = "DOES_NOT_EXIST"
	FINISHED BulkReportingJobStatus = "FINISHED"
	IN_PROGRESS BulkReportingJobStatus = "IN_PROGRESS"
	EXPIRED BulkReportingJobStatus = "EXPIRED"
	FAILED BulkReportingJobStatus = "FAILED"
	CANCELLED BulkReportingJobStatus = "CANCELLED"
)

// AllowedBulkReportingJobStatusEnumValues is all the allowed values of BulkReportingJobStatus enum
var AllowedBulkReportingJobStatusEnumValues = []BulkReportingJobStatus{
	"DOES_NOT_EXIST",
	"FINISHED",
	"IN_PROGRESS",
	"EXPIRED",
	"FAILED",
	"CANCELLED",
}

// validBulkReportingJobStatusEnumValue provides a map of BulkReportingJobStatuss for fast verification of use input
var validBulkReportingJobStatusEnumValues = map[BulkReportingJobStatus]struct{}{
	"DOES_NOT_EXIST": {},
	"FINISHED": {},
	"IN_PROGRESS": {},
	"EXPIRED": {},
	"FAILED": {},
	"CANCELLED": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v BulkReportingJobStatus) IsValid() bool {
	_, ok := validBulkReportingJobStatusEnumValues[v]
	return ok
}

// NewBulkReportingJobStatusFromValue returns a pointer to a valid BulkReportingJobStatus
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewBulkReportingJobStatusFromValue(v string) (BulkReportingJobStatus, error) {
	ev := BulkReportingJobStatus(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for BulkReportingJobStatus: valid values are %v", v, AllowedBulkReportingJobStatusEnumValues)
	}
}



// AssertBulkReportingJobStatusRequired checks if the required fields are not zero-ed
func AssertBulkReportingJobStatusRequired(obj BulkReportingJobStatus) error {
	return nil
}

// AssertBulkReportingJobStatusConstraints checks if the values respects the defined constraints
func AssertBulkReportingJobStatusConstraints(obj BulkReportingJobStatus) error {
	return nil
}
