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


// DataStatus : Metrics availablity, e.g., \"READY\".
type DataStatus string

// List of DataStatus
const (
	PROCESSING DataStatus = "PROCESSING"
	READY DataStatus = "READY"
	ESTIMATE DataStatus = "ESTIMATE"
	BEFORE_BUSINESS_CREATED DataStatus = "BEFORE_BUSINESS_CREATED"
	BEFORE_DATA_RETENTION_PERIOD DataStatus = "BEFORE_DATA_RETENTION_PERIOD"
	BEFORE_PIN_DATA_RETENTION_PERIOD DataStatus = "BEFORE_PIN_DATA_RETENTION_PERIOD"
	BEFORE_METRIC_START_DATE DataStatus = "BEFORE_METRIC_START_DATE"
	BEFORE_CORE_METRIC_START_DATE DataStatus = "BEFORE_CORE_METRIC_START_DATE"
	BEFORE_PIN_FORMAT_METRIC_START_DATE DataStatus = "BEFORE_PIN_FORMAT_METRIC_START_DATE"
	BEFORE_AUDIENCE_METRIC_START_DATE DataStatus = "BEFORE_AUDIENCE_METRIC_START_DATE"
	BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE DataStatus = "BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE"
	BEFORE_VIDEO_METRIC_START_DATE DataStatus = "BEFORE_VIDEO_METRIC_START_DATE"
	BEFORE_CONVERSION_METRIC_START_DATE DataStatus = "BEFORE_CONVERSION_METRIC_START_DATE"
	PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD DataStatus = "PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD"
	IN_BAD_TAG_DATE DataStatus = "IN_BAD_TAG_DATE"
	BEFORE_PUBLISHED_METRIC_START_DATE DataStatus = "BEFORE_PUBLISHED_METRIC_START_DATE"
	BEFORE_ASSIST_METRIC_START_DATE DataStatus = "BEFORE_ASSIST_METRIC_START_DATE"
	BEFORE_PIN_CREATED DataStatus = "BEFORE_PIN_CREATED"
	BEFORE_ACCOUNT_CLAIMED DataStatus = "BEFORE_ACCOUNT_CLAIMED"
	BEFORE_DEMOGRAPHIC_FILTERS_START_DATE DataStatus = "BEFORE_DEMOGRAPHIC_FILTERS_START_DATE"
	AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD DataStatus = "AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD"
	AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD DataStatus = "AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD"
	BEFORE_PRODUCT_GROUP_FILTER_START_DATE DataStatus = "BEFORE_PRODUCT_GROUP_FILTER_START_DATE"
)

// AllowedDataStatusEnumValues is all the allowed values of DataStatus enum
var AllowedDataStatusEnumValues = []DataStatus{
	"PROCESSING",
	"READY",
	"ESTIMATE",
	"BEFORE_BUSINESS_CREATED",
	"BEFORE_DATA_RETENTION_PERIOD",
	"BEFORE_PIN_DATA_RETENTION_PERIOD",
	"BEFORE_METRIC_START_DATE",
	"BEFORE_CORE_METRIC_START_DATE",
	"BEFORE_PIN_FORMAT_METRIC_START_DATE",
	"BEFORE_AUDIENCE_METRIC_START_DATE",
	"BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE",
	"BEFORE_VIDEO_METRIC_START_DATE",
	"BEFORE_CONVERSION_METRIC_START_DATE",
	"PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD",
	"IN_BAD_TAG_DATE",
	"BEFORE_PUBLISHED_METRIC_START_DATE",
	"BEFORE_ASSIST_METRIC_START_DATE",
	"BEFORE_PIN_CREATED",
	"BEFORE_ACCOUNT_CLAIMED",
	"BEFORE_DEMOGRAPHIC_FILTERS_START_DATE",
	"AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD",
	"AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD",
	"BEFORE_PRODUCT_GROUP_FILTER_START_DATE",
}

// validDataStatusEnumValue provides a map of DataStatuss for fast verification of use input
var validDataStatusEnumValues = map[DataStatus]struct{}{
	"PROCESSING": {},
	"READY": {},
	"ESTIMATE": {},
	"BEFORE_BUSINESS_CREATED": {},
	"BEFORE_DATA_RETENTION_PERIOD": {},
	"BEFORE_PIN_DATA_RETENTION_PERIOD": {},
	"BEFORE_METRIC_START_DATE": {},
	"BEFORE_CORE_METRIC_START_DATE": {},
	"BEFORE_PIN_FORMAT_METRIC_START_DATE": {},
	"BEFORE_AUDIENCE_METRIC_START_DATE": {},
	"BEFORE_AUDIENCE_MONTHLY_METRIC_START_DATE": {},
	"BEFORE_VIDEO_METRIC_START_DATE": {},
	"BEFORE_CONVERSION_METRIC_START_DATE": {},
	"PURCHASERS_METRIC_SMALLER_THAN_THRESHOLD": {},
	"IN_BAD_TAG_DATE": {},
	"BEFORE_PUBLISHED_METRIC_START_DATE": {},
	"BEFORE_ASSIST_METRIC_START_DATE": {},
	"BEFORE_PIN_CREATED": {},
	"BEFORE_ACCOUNT_CLAIMED": {},
	"BEFORE_DEMOGRAPHIC_FILTERS_START_DATE": {},
	"AUDIENCE_SEGMENT_SMALLER_THAN_THRESHOLD": {},
	"AUDIENCE_TOTAL_SMALLER_THAN_THRESHOLD": {},
	"BEFORE_PRODUCT_GROUP_FILTER_START_DATE": {},
}

// IsValid return true if the value is valid for the enum, false otherwise
func (v DataStatus) IsValid() bool {
	_, ok := validDataStatusEnumValues[v]
	return ok
}

// NewDataStatusFromValue returns a pointer to a valid DataStatus
// for the value passed as argument, or an error if the value passed is not allowed by the enum
func NewDataStatusFromValue(v string) (DataStatus, error) {
	ev := DataStatus(v)
	if ev.IsValid() {
		return ev, nil
	} else {
		return "", fmt.Errorf("invalid value '%v' for DataStatus: valid values are %v", v, AllowedDataStatusEnumValues)
	}
}



// AssertDataStatusRequired checks if the required fields are not zero-ed
func AssertDataStatusRequired(obj DataStatus) error {
	return nil
}

// AssertDataStatusConstraints checks if the values respects the defined constraints
func AssertDataStatusConstraints(obj DataStatus) error {
	return nil
}
