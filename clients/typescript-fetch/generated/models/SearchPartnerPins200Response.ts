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
import type { SummaryPin } from './SummaryPin';
import {
    SummaryPinFromJSON,
    SummaryPinFromJSONTyped,
    SummaryPinToJSON,
} from './SummaryPin';

/**
 * 
 * @export
 * @interface SearchPartnerPins200Response
 */
export interface SearchPartnerPins200Response {
    /**
     * 
     * @type {Array<SummaryPin>}
     * @memberof SearchPartnerPins200Response
     */
    items: Array<SummaryPin>;
    /**
     * 
     * @type {string}
     * @memberof SearchPartnerPins200Response
     */
    bookmark?: string;
}

/**
 * Check if a given object implements the SearchPartnerPins200Response interface.
 */
export function instanceOfSearchPartnerPins200Response(value: object): boolean {
    if (!('items' in value)) return false;
    return true;
}

export function SearchPartnerPins200ResponseFromJSON(json: any): SearchPartnerPins200Response {
    return SearchPartnerPins200ResponseFromJSONTyped(json, false);
}

export function SearchPartnerPins200ResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): SearchPartnerPins200Response {
    if (json == null) {
        return json;
    }
    return {
        
        'items': ((json['items'] as Array<any>).map(SummaryPinFromJSON)),
        'bookmark': json['bookmark'] == null ? undefined : json['bookmark'],
    };
}

export function SearchPartnerPins200ResponseToJSON(value?: SearchPartnerPins200Response | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': ((value['items'] as Array<any>).map(SummaryPinToJSON)),
        'bookmark': value['bookmark'],
    };
}

