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

// IntegrationLogsInvalidLogResponse - Schema describing the response when a log has invalid fields.
type IntegrationLogsInvalidLogResponse struct {

	RejectedLogs []IntegrationLogsInvalidLogResponseRejectedLogsInner `json:"rejected_logs,omitempty"`
}
