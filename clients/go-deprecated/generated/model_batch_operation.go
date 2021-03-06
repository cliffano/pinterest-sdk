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
// BatchOperation The operation performed by the batch
type BatchOperation string

// List of BatchOperation
const (
	UPDATE BatchOperation = "UPDATE"
	CREATE BatchOperation = "CREATE"
	UPSERT BatchOperation = "UPSERT"
)
