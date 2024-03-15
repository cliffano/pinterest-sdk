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

type AnalyticsMetricsResponse struct {

	// The metric name and value over the requested period for each requested metric
	SummaryMetrics map[string]float32 `json:"summary_metrics,omitempty"`

	// Array with the requested daily metric records
	DailyMetrics []AnalyticsDailyMetrics `json:"daily_metrics,omitempty"`
}
