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
 * Object describing an item validation event
 * @export
 * @interface ItemValidationEvent
 */
export interface ItemValidationEvent {
    /**
     * The attribute that the item validation event references
     * @type {string}
     * @memberof ItemValidationEvent
     */
    attribute?: string;
    /**
     * The event code that the item validation event references
     * @type {number}
     * @memberof ItemValidationEvent
     */
    code?: number;
    /**
     * Title message describing the item validation event
     * @type {string}
     * @memberof ItemValidationEvent
     */
    message?: string;
}

/**
 * Check if a given object implements the ItemValidationEvent interface.
 */
export function instanceOfItemValidationEvent(value: object): boolean {
    return true;
}

export function ItemValidationEventFromJSON(json: any): ItemValidationEvent {
    return ItemValidationEventFromJSONTyped(json, false);
}

export function ItemValidationEventFromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemValidationEvent {
    if (json == null) {
        return json;
    }
    return {
        
        'attribute': json['attribute'] == null ? undefined : json['attribute'],
        'code': json['code'] == null ? undefined : json['code'],
        'message': json['message'] == null ? undefined : json['message'],
    };
}

export function ItemValidationEventToJSON(value?: ItemValidationEvent | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'attribute': value['attribute'],
        'code': value['code'],
        'message': value['message'],
    };
}

