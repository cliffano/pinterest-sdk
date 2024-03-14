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
import type { ItemValidationEvent } from './ItemValidationEvent';
import {
    ItemValidationEventFromJSON,
    ItemValidationEventFromJSONTyped,
    ItemValidationEventToJSON,
} from './ItemValidationEvent';

/**
 * 
 * @export
 * @interface ItemResponseAnyOf1
 */
export interface ItemResponseAnyOf1 {
    /**
     * The catalog item id in the merchant namespace
     * @type {string}
     * @memberof ItemResponseAnyOf1
     */
    itemId?: string;
    /**
     * Array with the errors for the item id requested
     * @type {Array<ItemValidationEvent>}
     * @memberof ItemResponseAnyOf1
     */
    errors?: Array<ItemValidationEvent>;
}

/**
 * Check if a given object implements the ItemResponseAnyOf1 interface.
 */
export function instanceOfItemResponseAnyOf1(value: object): boolean {
    return true;
}

export function ItemResponseAnyOf1FromJSON(json: any): ItemResponseAnyOf1 {
    return ItemResponseAnyOf1FromJSONTyped(json, false);
}

export function ItemResponseAnyOf1FromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemResponseAnyOf1 {
    if (json == null) {
        return json;
    }
    return {
        
        'itemId': json['item_id'] == null ? undefined : json['item_id'],
        'errors': json['errors'] == null ? undefined : ((json['errors'] as Array<any>).map(ItemValidationEventFromJSON)),
    };
}

export function ItemResponseAnyOf1ToJSON(value?: ItemResponseAnyOf1 | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'item_id': value['itemId'],
        'errors': value['errors'] == null ? undefined : ((value['errors'] as Array<any>).map(ItemValidationEventToJSON)),
    };
}
