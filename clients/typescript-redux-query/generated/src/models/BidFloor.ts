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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface BidFloor
 */
export interface BidFloor  {
    /**
     * A list of bid floors in micro currency. For example, [100000, 200000]
     * @type {Array<number>}
     * @memberof BidFloor
     */
    bidFloors?: Array<number>;
    /**
     * Always the string \'bidfloor\'
     * @type {string}
     * @memberof BidFloor
     */
    type?: string;
}

export function BidFloorFromJSON(json: any): BidFloor {
    return {
        'bidFloors': !exists(json, 'bid_floors') ? undefined : json['bid_floors'],
        'type': !exists(json, 'type') ? undefined : json['type'],
    };
}

export function BidFloorToJSON(value?: BidFloor): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'bid_floors': value.bidFloors,
        'type': value.type,
    };
}


