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
 * Object describing an item batch record to discontinue items
 * @export
 * @interface ItemDeleteDiscontinuedBatchRecord
 */
export interface ItemDeleteDiscontinuedBatchRecord {
    /**
     * The catalog item id in the merchant namespace
     * @type {string}
     * @memberof ItemDeleteDiscontinuedBatchRecord
     */
    itemId?: string;
}

/**
 * Check if a given object implements the ItemDeleteDiscontinuedBatchRecord interface.
 */
export function instanceOfItemDeleteDiscontinuedBatchRecord(value: object): boolean {
    return true;
}

export function ItemDeleteDiscontinuedBatchRecordFromJSON(json: any): ItemDeleteDiscontinuedBatchRecord {
    return ItemDeleteDiscontinuedBatchRecordFromJSONTyped(json, false);
}

export function ItemDeleteDiscontinuedBatchRecordFromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemDeleteDiscontinuedBatchRecord {
    if (json == null) {
        return json;
    }
    return {
        
        'itemId': json['item_id'] == null ? undefined : json['item_id'],
    };
}

export function ItemDeleteDiscontinuedBatchRecordToJSON(value?: ItemDeleteDiscontinuedBatchRecord | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'item_id': value['itemId'],
    };
}

