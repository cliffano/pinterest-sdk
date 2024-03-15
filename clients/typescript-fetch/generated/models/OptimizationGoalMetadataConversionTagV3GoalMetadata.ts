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
import type { OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows } from './OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows';
import {
    OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindowsFromJSON,
    OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindowsFromJSONTyped,
    OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindowsToJSON,
} from './OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows';

/**
 * 
 * @export
 * @interface OptimizationGoalMetadataConversionTagV3GoalMetadata
 */
export interface OptimizationGoalMetadataConversionTagV3GoalMetadata {
    /**
     * 
     * @type {OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows}
     * @memberof OptimizationGoalMetadataConversionTagV3GoalMetadata
     */
    attributionWindows?: OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows;
    /**
     * 
     * @type {string}
     * @memberof OptimizationGoalMetadataConversionTagV3GoalMetadata
     */
    conversionEvent?: OptimizationGoalMetadataConversionTagV3GoalMetadataConversionEventEnum;
    /**
     * 
     * @type {string}
     * @memberof OptimizationGoalMetadataConversionTagV3GoalMetadata
     */
    conversionTagId?: string;
    /**
     * 
     * @type {string}
     * @memberof OptimizationGoalMetadataConversionTagV3GoalMetadata
     */
    cpaGoalValueInMicroCurrency?: string;
    /**
     * Ad group is ROAS optimized
     * @type {boolean}
     * @memberof OptimizationGoalMetadataConversionTagV3GoalMetadata
     */
    isRoasOptimized?: boolean;
    /**
     * Conversion learning model type
     * @type {string}
     * @memberof OptimizationGoalMetadataConversionTagV3GoalMetadata
     */
    learningModeType?: OptimizationGoalMetadataConversionTagV3GoalMetadataLearningModeTypeEnum;
}


/**
 * @export
 */
export const OptimizationGoalMetadataConversionTagV3GoalMetadataConversionEventEnum = {
    PageVisit: 'PAGE_VISIT',
    Signup: 'SIGNUP',
    Checkout: 'CHECKOUT',
    Custom: 'CUSTOM',
    ViewCategory: 'VIEW_CATEGORY',
    Search: 'SEARCH',
    AddToCart: 'ADD_TO_CART',
    WatchVideo: 'WATCH_VIDEO',
    Lead: 'LEAD',
    AppInstall: 'APP_INSTALL'
} as const;
export type OptimizationGoalMetadataConversionTagV3GoalMetadataConversionEventEnum = typeof OptimizationGoalMetadataConversionTagV3GoalMetadataConversionEventEnum[keyof typeof OptimizationGoalMetadataConversionTagV3GoalMetadataConversionEventEnum];

/**
 * @export
 */
export const OptimizationGoalMetadataConversionTagV3GoalMetadataLearningModeTypeEnum = {
    NotActive: 'NOT_ACTIVE',
    Active: 'ACTIVE',
    Null: 'null'
} as const;
export type OptimizationGoalMetadataConversionTagV3GoalMetadataLearningModeTypeEnum = typeof OptimizationGoalMetadataConversionTagV3GoalMetadataLearningModeTypeEnum[keyof typeof OptimizationGoalMetadataConversionTagV3GoalMetadataLearningModeTypeEnum];


/**
 * Check if a given object implements the OptimizationGoalMetadataConversionTagV3GoalMetadata interface.
 */
export function instanceOfOptimizationGoalMetadataConversionTagV3GoalMetadata(value: object): boolean {
    return true;
}

export function OptimizationGoalMetadataConversionTagV3GoalMetadataFromJSON(json: any): OptimizationGoalMetadataConversionTagV3GoalMetadata {
    return OptimizationGoalMetadataConversionTagV3GoalMetadataFromJSONTyped(json, false);
}

export function OptimizationGoalMetadataConversionTagV3GoalMetadataFromJSONTyped(json: any, ignoreDiscriminator: boolean): OptimizationGoalMetadataConversionTagV3GoalMetadata {
    if (json == null) {
        return json;
    }
    return {
        
        'attributionWindows': json['attribution_windows'] == null ? undefined : OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindowsFromJSON(json['attribution_windows']),
        'conversionEvent': json['conversion_event'] == null ? undefined : json['conversion_event'],
        'conversionTagId': json['conversion_tag_id'] == null ? undefined : json['conversion_tag_id'],
        'cpaGoalValueInMicroCurrency': json['cpa_goal_value_in_micro_currency'] == null ? undefined : json['cpa_goal_value_in_micro_currency'],
        'isRoasOptimized': json['is_roas_optimized'] == null ? undefined : json['is_roas_optimized'],
        'learningModeType': json['learning_mode_type'] == null ? undefined : json['learning_mode_type'],
    };
}

export function OptimizationGoalMetadataConversionTagV3GoalMetadataToJSON(value?: OptimizationGoalMetadataConversionTagV3GoalMetadata | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'attribution_windows': OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindowsToJSON(value['attributionWindows']),
        'conversion_event': value['conversionEvent'],
        'conversion_tag_id': value['conversionTagId'],
        'cpa_goal_value_in_micro_currency': value['cpaGoalValueInMicroCurrency'],
        'is_roas_optimized': value['isRoasOptimized'],
        'learning_mode_type': value['learningModeType'],
    };
}

