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



type CatalogsFeedProcessingStatus string

// List of CatalogsFeedProcessingStatus
const (
	COMPLETED CatalogsFeedProcessingStatus = "COMPLETED"
	COMPLETED_EARLY CatalogsFeedProcessingStatus = "COMPLETED_EARLY"
	DISAPPROVED CatalogsFeedProcessingStatus = "DISAPPROVED"
	FAILED CatalogsFeedProcessingStatus = "FAILED"
	PROCESSING CatalogsFeedProcessingStatus = "PROCESSING"
	QUEUED_FOR_PROCESSING CatalogsFeedProcessingStatus = "QUEUED_FOR_PROCESSING"
	UNDER_APPEAL CatalogsFeedProcessingStatus = "UNDER_APPEAL"
	UNDER_REVIEW CatalogsFeedProcessingStatus = "UNDER_REVIEW"
)

// AllowedCatalogsFeedProcessingStatusEnumValues is all the allowed values of CatalogsFeedProcessingStatus enum
var AllowedCatalogsFeedProcessingStatusEnumValues = []CatalogsFeedProcessingStatus{
	"COMPLETED",
	"COMPLETED_EARLY",
	"DISAPPROVED",
	"FAILED",
	"PROCESSING",
	"QUEUED_FOR_PROCESSING",
	"UNDER_APPEAL",
	"UNDER_REVIEW",
}

// validCatalogsFeedProcessingStatusEnumValue provides a map of CatalogsFeedProcessingStatuss for fast verification of use input
var validCatalogsFeedProcessingStatusEnumValues = map[CatalogsFeedProcessingStatus]struct{}{
	"COMPLETED": {},
	"COMPLETED_EARLY": {},
	"DISAPPROVED": {},
	"FAILED": {},
	"PROCESSING": {},
	"QUEUED_FOR_PROCESSING": {},
	"UNDER_APPEAL": {},
	"UNDER_REVIEW": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v CatalogsFeedProcessingStatus) IsValid() bool {
	_, ok := validCatalogsFeedProcessingStatusEnumValues[v]
	return ok
}

// NewCatalogsFeedProcessingStatusFromValue returns a pointer to a valid CatalogsFeedProcessingStatus
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewCatalogsFeedProcessingStatusFromValue(v string) (CatalogsFeedProcessingStatus, error) {
	ev := CatalogsFeedProcessingStatus(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for CatalogsFeedProcessingStatus: valid values are %v", v, AllowedCatalogsFeedProcessingStatusEnumValues)
	}
}



// AssertCatalogsFeedProcessingStatusRequired checks if the required fields are not zero-ed
func AssertCatalogsFeedProcessingStatusRequired(obj CatalogsFeedProcessingStatus) error {
	return nil
}

// AssertCatalogsFeedProcessingStatusConstraints checks if the values respects the defined constraints
func AssertCatalogsFeedProcessingStatusConstraints(obj CatalogsFeedProcessingStatus) error {
	return nil
}