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




// AdGroupCommonOptimizationGoalMetadata - Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign's `objective_type` is set to `\"WEB_CONVERSION\"`.
type AdGroupCommonOptimizationGoalMetadata struct {

	ConversionTagV3GoalMetadata OptimizationGoalMetadataConversionTagV3GoalMetadata `json:"conversion_tag_v3_goal_metadata,omitempty"`

	FrequencyGoalMetadata OptimizationGoalMetadataFrequencyGoalMetadata `json:"frequency_goal_metadata,omitempty"`

	ScrollupGoalMetadata OptimizationGoalMetadataScrollupGoalMetadata `json:"scrollup_goal_metadata,omitempty"`
}

// AssertAdGroupCommonOptimizationGoalMetadataRequired checks if the required fields are not zero-ed
func AssertAdGroupCommonOptimizationGoalMetadataRequired(obj AdGroupCommonOptimizationGoalMetadata) error {
	if err := AssertOptimizationGoalMetadataConversionTagV3GoalMetadataRequired(obj.ConversionTagV3GoalMetadata); err != nil {
		return err
	}
	if err := AssertOptimizationGoalMetadataFrequencyGoalMetadataRequired(obj.FrequencyGoalMetadata); err != nil {
		return err
	}
	if err := AssertOptimizationGoalMetadataScrollupGoalMetadataRequired(obj.ScrollupGoalMetadata); err != nil {
		return err
	}
	return nil
}

// AssertAdGroupCommonOptimizationGoalMetadataConstraints checks if the values respects the defined constraints
func AssertAdGroupCommonOptimizationGoalMetadataConstraints(obj AdGroupCommonOptimizationGoalMetadata) error {
	return nil
}
