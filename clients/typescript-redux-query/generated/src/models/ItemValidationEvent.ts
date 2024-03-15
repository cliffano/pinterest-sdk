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
 * Object describing an item validation event
 * @export
 * @interface ItemValidationEvent
 */
export interface ItemValidationEvent  {
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

export function ItemValidationEventFromJSON(json: any): ItemValidationEvent {
    return {
        'attribute': !exists(json, 'attribute') ? undefined : json['attribute'],
        'code': !exists(json, 'code') ? undefined : json['code'],
        'message': !exists(json, 'message') ? undefined : json['message'],
    };
}

export function ItemValidationEventToJSON(value?: ItemValidationEvent): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'attribute': value.attribute,
        'code': value.code,
        'message': value.message,
    };
}


