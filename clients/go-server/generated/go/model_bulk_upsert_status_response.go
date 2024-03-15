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




// BulkUpsertStatusResponse - ID of the bulk request.
type BulkUpsertStatusResponse struct {

	Status BulkUpsertStatus `json:"status,omitempty"`

	ResultUrl string `json:"result_url,omitempty"`
}

// AssertBulkUpsertStatusResponseRequired checks if the required fields are not zero-ed
func AssertBulkUpsertStatusResponseRequired(obj BulkUpsertStatusResponse) error {
	return nil
}

// AssertBulkUpsertStatusResponseConstraints checks if the values respects the defined constraints
func AssertBulkUpsertStatusResponseConstraints(obj BulkUpsertStatusResponse) error {
	return nil
}
