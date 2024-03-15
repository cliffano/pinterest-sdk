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




type AdGroupsAnalyticsResponseInner struct {

	// The ID of the ad group that this metrics belongs to.
	AD_GROUP_ID string `json:"AD_GROUP_ID"`

	// Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
	DATE string `json:"DATE,omitempty"`
}

// AssertAdGroupsAnalyticsResponseInnerRequired checks if the required fields are not zero-ed
func AssertAdGroupsAnalyticsResponseInnerRequired(obj AdGroupsAnalyticsResponseInner) error {
	elements := map[string]interface{}{
		"AD_GROUP_ID": obj.AD_GROUP_ID,
	}
	for name, el := range elements {
		if isZero := IsZeroValue(el); isZero {
			return &RequiredError{Field: name}
		}
	}

	return nil
}

// AssertAdGroupsAnalyticsResponseInnerConstraints checks if the values respects the defined constraints
func AssertAdGroupsAnalyticsResponseInnerConstraints(obj AdGroupsAnalyticsResponseInner) error {
	return nil
}