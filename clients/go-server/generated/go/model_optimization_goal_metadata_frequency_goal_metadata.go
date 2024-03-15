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




type OptimizationGoalMetadataFrequencyGoalMetadata struct {

	Frequency int32 `json:"frequency,omitempty"`

	// User entity counts time range
	Timerange string `json:"timerange,omitempty"`
}

// AssertOptimizationGoalMetadataFrequencyGoalMetadataRequired checks if the required fields are not zero-ed
func AssertOptimizationGoalMetadataFrequencyGoalMetadataRequired(obj OptimizationGoalMetadataFrequencyGoalMetadata) error {
	return nil
}

// AssertOptimizationGoalMetadataFrequencyGoalMetadataConstraints checks if the values respects the defined constraints
func AssertOptimizationGoalMetadataFrequencyGoalMetadataConstraints(obj OptimizationGoalMetadataFrequencyGoalMetadata) error {
	return nil
}