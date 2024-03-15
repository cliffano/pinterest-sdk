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
 * Object describing an item batch record to delete items
 * @export
 * @interface ItemDeleteBatchRecord
 */
export interface ItemDeleteBatchRecord {
    /**
     * The catalog item id in the merchant namespace
     * @type {string}
     * @memberof ItemDeleteBatchRecord
     */
    itemId?: string;
}

/**
 * Check if a given object implements the ItemDeleteBatchRecord interface.
 */
export function instanceOfItemDeleteBatchRecord(value: object): boolean {
    return true;
}

export function ItemDeleteBatchRecordFromJSON(json: any): ItemDeleteBatchRecord {
    return ItemDeleteBatchRecordFromJSONTyped(json, false);
}

export function ItemDeleteBatchRecordFromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemDeleteBatchRecord {
    if (json == null) {
        return json;
    }
    return {
        
        'itemId': json['item_id'] == null ? undefined : json['item_id'],
    };
}

export function ItemDeleteBatchRecordToJSON(value?: ItemDeleteBatchRecord | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'item_id': value['itemId'],
    };
}

