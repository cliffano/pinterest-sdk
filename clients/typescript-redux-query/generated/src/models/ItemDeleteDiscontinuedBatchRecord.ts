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
 * Object describing an item batch record to discontinue items
 * @export
 * @interface ItemDeleteDiscontinuedBatchRecord
 */
export interface ItemDeleteDiscontinuedBatchRecord  {
    /**
     * The catalog item id in the merchant namespace
     * @type {string}
     * @memberof ItemDeleteDiscontinuedBatchRecord
     */
    itemId?: string;
}

export function ItemDeleteDiscontinuedBatchRecordFromJSON(json: any): ItemDeleteDiscontinuedBatchRecord {
    return {
        'itemId': !exists(json, 'item_id') ? undefined : json['item_id'],
    };
}

export function ItemDeleteDiscontinuedBatchRecordToJSON(value?: ItemDeleteDiscontinuedBatchRecord): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'item_id': value.itemId,
    };
}


