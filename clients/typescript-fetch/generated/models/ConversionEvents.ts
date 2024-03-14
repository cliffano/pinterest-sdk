/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
import type { ConversionEventsDataInner } from './ConversionEventsDataInner';
import {
    ConversionEventsDataInnerFromJSON,
    ConversionEventsDataInnerFromJSONTyped,
    ConversionEventsDataInnerToJSON,
} from './ConversionEventsDataInner';

/**
 * A list of events (one or more) encapsulated by a data object.
 * @export
 * @interface ConversionEvents
 */
export interface ConversionEvents {
    /**
     * 
     * @type {Array<ConversionEventsDataInner>}
     * @memberof ConversionEvents
     */
    data: Array<ConversionEventsDataInner>;
}

/**
 * Check if a given object implements the ConversionEvents interface.
 */
export function instanceOfConversionEvents(value: object): boolean {
    if (!('data' in value)) return false;
    return true;
}

export function ConversionEventsFromJSON(json: any): ConversionEvents {
    return ConversionEventsFromJSONTyped(json, false);
}

export function ConversionEventsFromJSONTyped(json: any, ignoreDiscriminator: boolean): ConversionEvents {
    if (json == null) {
        return json;
    }
    return {
        
        'data': ((json['data'] as Array<any>).map(ConversionEventsDataInnerFromJSON)),
    };
}

export function ConversionEventsToJSON(value?: ConversionEvents | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'data': ((value['data'] as Array<any>).map(ConversionEventsDataInnerToJSON)),
    };
}

