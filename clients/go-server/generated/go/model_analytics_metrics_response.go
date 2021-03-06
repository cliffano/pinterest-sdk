/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * API version: 5.3.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type AnalyticsMetricsResponse struct {

	// Array with the requested daily metric records
	DailyMetrics []AnalyticsMetricsResponseDailyMetrics `json:"daily_metrics,omitempty"`

	// The metric name and value over the requested period for each requested metric
	SummaryMetrics map[string]float32 `json:"summary_metrics,omitempty"`
}

// AssertAnalyticsMetricsResponseRequired checks if the required fields are not zero-ed
func AssertAnalyticsMetricsResponseRequired(obj AnalyticsMetricsResponse) error {
	for _, el := range obj.DailyMetrics {
		if err := AssertAnalyticsMetricsResponseDailyMetricsRequired(el); err != nil {
			return err
		}
	}
	return nil
}

// AssertRecurseAnalyticsMetricsResponseRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of AnalyticsMetricsResponse (e.g. [][]AnalyticsMetricsResponse), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseAnalyticsMetricsResponseRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aAnalyticsMetricsResponse, ok := obj.(AnalyticsMetricsResponse)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertAnalyticsMetricsResponseRequired(aAnalyticsMetricsResponse)
	})
}
