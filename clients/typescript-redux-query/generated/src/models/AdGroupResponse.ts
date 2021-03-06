// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import {
    ActionType,
    ActionTypeFromJSON,
    ActionTypeToJSON,
    AdGroupResponseAllOf,
    AdGroupResponseAllOfFromJSON,
    AdGroupResponseAllOfToJSON,
    AdGroupResponseAllOf1,
    AdGroupResponseAllOf1FromJSON,
    AdGroupResponseAllOf1ToJSON,
    AdGroupSummaryStatus,
    AdGroupSummaryStatusFromJSON,
    AdGroupSummaryStatusToJSON,
    EntityStatus,
    EntityStatusFromJSON,
    EntityStatusToJSON,
    PacingDeliveryType,
    PacingDeliveryTypeFromJSON,
    PacingDeliveryTypeToJSON,
    PlacementGroupType,
    PlacementGroupTypeFromJSON,
    PlacementGroupTypeToJSON,
    TrackingUrls,
    TrackingUrlsFromJSON,
    TrackingUrlsToJSON,
} from './';

/**
 * @type AdGroupResponse
 * @export
 */
export interface AdGroupResponse extends AdGroupResponseAllOf, AdGroupResponseAllOf1 {
}

export function AdGroupResponseFromJSON(json: any): AdGroupResponse {
    return {
        ...AdGroupResponseAllOfFromJSON(json),
        ...AdGroupResponseAllOf1FromJSON(json),
    };
}

export function AdGroupResponseToJSON(value?: AdGroupResponse): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        ...AdGroupResponseAllOfToJSON(value),
        ...AdGroupResponseAllOf1ToJSON(value),
    };
}
