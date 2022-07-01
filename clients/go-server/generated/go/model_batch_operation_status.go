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
// BatchOperationStatus : The status of the operation performed by the batch
type BatchOperationStatus string

// List of BatchOperationStatus
const (
	PROCESSING BatchOperationStatus = "PROCESSING"
	COMPLETED BatchOperationStatus = "COMPLETED"
)

// AssertBatchOperationStatusRequired checks if the required fields are not zero-ed
func AssertBatchOperationStatusRequired(obj BatchOperationStatus) error {
	return nil
}

// AssertRecurseBatchOperationStatusRequired recursively checks if required fields are not zero-ed in a nested slice.
// Accepts only nested slice of BatchOperationStatus (e.g. [][]BatchOperationStatus), otherwise ErrTypeAssertionError is thrown.
func AssertRecurseBatchOperationStatusRequired(objSlice interface{}) error {
	return AssertRecurseInterfaceRequired(objSlice, func(obj interface{}) error {
		aBatchOperationStatus, ok := obj.(BatchOperationStatus)
		if !ok {
			return ErrTypeAssertionError
		}
		return AssertBatchOperationStatusRequired(aBatchOperationStatus)
	})
}
