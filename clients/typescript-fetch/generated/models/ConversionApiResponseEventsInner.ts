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
/**
 * 
 * @export
 * @interface ConversionApiResponseEventsInner
 */
export interface ConversionApiResponseEventsInner {
    /**
     * Whether the event was processed successfully.
     * @type {string}
     * @memberof ConversionApiResponseEventsInner
     */
    status: ConversionApiResponseEventsInnerStatusEnum;
    /**
     * Error message containing more information about why the event failed to be processed.
     * @type {string}
     * @memberof ConversionApiResponseEventsInner
     */
    errorMessage?: string;
    /**
     * Warning messages about any fields in the event which are not standard. These are not critical to event processing.
     * @type {string}
     * @memberof ConversionApiResponseEventsInner
     */
    warningMessage?: string;
}


/**
 * @export
 */
export const ConversionApiResponseEventsInnerStatusEnum = {
    Failed: 'failed',
    Processed: 'processed'
} as const;
export type ConversionApiResponseEventsInnerStatusEnum = typeof ConversionApiResponseEventsInnerStatusEnum[keyof typeof ConversionApiResponseEventsInnerStatusEnum];


/**
 * Check if a given object implements the ConversionApiResponseEventsInner interface.
 */
export function instanceOfConversionApiResponseEventsInner(value: object): boolean {
    if (!('status' in value)) return false;
    return true;
}

export function ConversionApiResponseEventsInnerFromJSON(json: any): ConversionApiResponseEventsInner {
    return ConversionApiResponseEventsInnerFromJSONTyped(json, false);
}

export function ConversionApiResponseEventsInnerFromJSONTyped(json: any, ignoreDiscriminator: boolean): ConversionApiResponseEventsInner {
    if (json == null) {
        return json;
    }
    return {
        
        'status': json['status'],
        'errorMessage': json['error_message'] == null ? undefined : json['error_message'],
        'warningMessage': json['warning_message'] == null ? undefined : json['warning_message'],
    };
}

export function ConversionApiResponseEventsInnerToJSON(value?: ConversionApiResponseEventsInner | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'status': value['status'],
        'error_message': value['errorMessage'],
        'warning_message': value['warningMessage'],
    };
}

