// tslint:disable
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

import {
    ActionType,
    ActionTypeFromJSON,
    ActionTypeToJSON,
    AdGroupCommonOptimizationGoalMetadata,
    AdGroupCommonOptimizationGoalMetadataFromJSON,
    AdGroupCommonOptimizationGoalMetadataToJSON,
    AdGroupCommonTrackingUrls,
    AdGroupCommonTrackingUrlsFromJSON,
    AdGroupCommonTrackingUrlsToJSON,
    BudgetType,
    BudgetTypeFromJSON,
    BudgetTypeToJSON,
    EntityStatus,
    EntityStatusFromJSON,
    EntityStatusToJSON,
    PacingDeliveryType,
    PacingDeliveryTypeFromJSON,
    PacingDeliveryTypeToJSON,
    PlacementGroupType,
    PlacementGroupTypeFromJSON,
    PlacementGroupTypeToJSON,
    TargetingSpec,
    TargetingSpecFromJSON,
    TargetingSpecToJSON,
} from './';

/**
 * @type AdGroupUpdateRequest
 * @export
 */
export interface AdGroupUpdateRequest extends AdGroupCommon {
}

export function AdGroupUpdateRequestFromJSON(json: any): AdGroupUpdateRequest {
    return {
        ...AdGroupCommonFromJSON(json),
    };
}

export function AdGroupUpdateRequestToJSON(value?: AdGroupUpdateRequest): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...AdGroupCommonToJSON(value),
    };
}
