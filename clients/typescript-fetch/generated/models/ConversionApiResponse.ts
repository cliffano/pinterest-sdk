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
import type { ConversionApiResponseEventsInner } from './ConversionApiResponseEventsInner';
import {
    ConversionApiResponseEventsInnerFromJSON,
    ConversionApiResponseEventsInnerFromJSONTyped,
    ConversionApiResponseEventsInnerToJSON,
} from './ConversionApiResponseEventsInner';

/**
 * Schema describing the object in the response, which contains information about the events that were received and processed.
 * @export
 * @interface ConversionApiResponse
 */
export interface ConversionApiResponse {
    /**
     * Total number of events received in the request.
     * @type {number}
     * @memberof ConversionApiResponse
     */
    numEventsReceived: number;
    /**
     * Number of events that were successfully processed from the events.
     * @type {number}
     * @memberof ConversionApiResponse
     */
    numEventsProcessed: number;
    /**
     * Specific messages for each event received. The order will match the order in which the events were received in the request.
     * @type {Array<ConversionApiResponseEventsInner>}
     * @memberof ConversionApiResponse
     */
    events: Array<ConversionApiResponseEventsInner>;
}

/**
 * Check if a given object implements the ConversionApiResponse interface.
 */
export function instanceOfConversionApiResponse(value: object): boolean {
    if (!('numEventsReceived' in value)) return false;
    if (!('numEventsProcessed' in value)) return false;
    if (!('events' in value)) return false;
    return true;
}

export function ConversionApiResponseFromJSON(json: any): ConversionApiResponse {
    return ConversionApiResponseFromJSONTyped(json, false);
}

export function ConversionApiResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): ConversionApiResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'numEventsReceived': json['num_events_received'],
        'numEventsProcessed': json['num_events_processed'],
        'events': ((json['events'] as Array<any>).map(ConversionApiResponseEventsInnerFromJSON)),
    };
}

export function ConversionApiResponseToJSON(value?: ConversionApiResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'num_events_received': value['numEventsReceived'],
        'num_events_processed': value['numEventsProcessed'],
        'events': ((value['events'] as Array<any>).map(ConversionApiResponseEventsInnerToJSON)),
    };
}

