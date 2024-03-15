/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
import type { OptimizationGoalMetadataConversionTagV3GoalMetadata } from './OptimizationGoalMetadataConversionTagV3GoalMetadata';
import {
    OptimizationGoalMetadataConversionTagV3GoalMetadataFromJSON,
    OptimizationGoalMetadataConversionTagV3GoalMetadataFromJSONTyped,
    OptimizationGoalMetadataConversionTagV3GoalMetadataToJSON,
} from './OptimizationGoalMetadataConversionTagV3GoalMetadata';
import type { OptimizationGoalMetadataFrequencyGoalMetadata } from './OptimizationGoalMetadataFrequencyGoalMetadata';
import {
    OptimizationGoalMetadataFrequencyGoalMetadataFromJSON,
    OptimizationGoalMetadataFrequencyGoalMetadataFromJSONTyped,
    OptimizationGoalMetadataFrequencyGoalMetadataToJSON,
} from './OptimizationGoalMetadataFrequencyGoalMetadata';
import type { OptimizationGoalMetadataScrollupGoalMetadata } from './OptimizationGoalMetadataScrollupGoalMetadata';
import {
    OptimizationGoalMetadataScrollupGoalMetadataFromJSON,
    OptimizationGoalMetadataScrollupGoalMetadataFromJSONTyped,
    OptimizationGoalMetadataScrollupGoalMetadataToJSON,
} from './OptimizationGoalMetadataScrollupGoalMetadata';

/**
 * Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign's `objective_type` is set to `"WEB_CONVERSION"`.
 * @export
 * @interface AdGroupCommonOptimizationGoalMetadata
 */
export interface AdGroupCommonOptimizationGoalMetadata {
    /**
     * 
     * @type {OptimizationGoalMetadataConversionTagV3GoalMetadata}
     * @memberof AdGroupCommonOptimizationGoalMetadata
     */
    conversionTagV3GoalMetadata?: OptimizationGoalMetadataConversionTagV3GoalMetadata;
    /**
     * 
     * @type {OptimizationGoalMetadataFrequencyGoalMetadata}
     * @memberof AdGroupCommonOptimizationGoalMetadata
     */
    frequencyGoalMetadata?: OptimizationGoalMetadataFrequencyGoalMetadata;
    /**
     * 
     * @type {OptimizationGoalMetadataScrollupGoalMetadata}
     * @memberof AdGroupCommonOptimizationGoalMetadata
     */
    scrollupGoalMetadata?: OptimizationGoalMetadataScrollupGoalMetadata;
}

/**
 * Check if a given object implements the AdGroupCommonOptimizationGoalMetadata interface.
 */
export function instanceOfAdGroupCommonOptimizationGoalMetadata(value: object): boolean {
    return true;
}

export function AdGroupCommonOptimizationGoalMetadataFromJSON(json: any): AdGroupCommonOptimizationGoalMetadata {
    return AdGroupCommonOptimizationGoalMetadataFromJSONTyped(json, false);
}

export function AdGroupCommonOptimizationGoalMetadataFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdGroupCommonOptimizationGoalMetadata {
    if (json == null) {
        return json;
    }
    return {
        
        'conversionTagV3GoalMetadata': json['conversion_tag_v3_goal_metadata'] == null ? undefined : OptimizationGoalMetadataConversionTagV3GoalMetadataFromJSON(json['conversion_tag_v3_goal_metadata']),
        'frequencyGoalMetadata': json['frequency_goal_metadata'] == null ? undefined : OptimizationGoalMetadataFrequencyGoalMetadataFromJSON(json['frequency_goal_metadata']),
        'scrollupGoalMetadata': json['scrollup_goal_metadata'] == null ? undefined : OptimizationGoalMetadataScrollupGoalMetadataFromJSON(json['scrollup_goal_metadata']),
    };
}

export function AdGroupCommonOptimizationGoalMetadataToJSON(value?: AdGroupCommonOptimizationGoalMetadata | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'conversion_tag_v3_goal_metadata': OptimizationGoalMetadataConversionTagV3GoalMetadataToJSON(value['conversionTagV3GoalMetadata']),
        'frequency_goal_metadata': OptimizationGoalMetadataFrequencyGoalMetadataToJSON(value['frequencyGoalMetadata']),
        'scrollup_goal_metadata': OptimizationGoalMetadataScrollupGoalMetadataToJSON(value['scrollupGoalMetadata']),
    };
}
