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

import type { ItemCreateBatchRecord } from './ItemCreateBatchRecord';
import {
    instanceOfItemCreateBatchRecord,
    ItemCreateBatchRecordFromJSON,
    ItemCreateBatchRecordFromJSONTyped,
    ItemCreateBatchRecordToJSON,
} from './ItemCreateBatchRecord';
import type { ItemDeleteDiscontinuedBatchRecord } from './ItemDeleteDiscontinuedBatchRecord';
import {
    instanceOfItemDeleteDiscontinuedBatchRecord,
    ItemDeleteDiscontinuedBatchRecordFromJSON,
    ItemDeleteDiscontinuedBatchRecordFromJSONTyped,
    ItemDeleteDiscontinuedBatchRecordToJSON,
} from './ItemDeleteDiscontinuedBatchRecord';
import type { ItemUpdateBatchRecord } from './ItemUpdateBatchRecord';
import {
    instanceOfItemUpdateBatchRecord,
    ItemUpdateBatchRecordFromJSON,
    ItemUpdateBatchRecordFromJSONTyped,
    ItemUpdateBatchRecordToJSON,
} from './ItemUpdateBatchRecord';

/**
 * @type ItemBatchRecord
 * Object describing an item batch record
 * @export
 */
export type ItemBatchRecord = ItemCreateBatchRecord | ItemDeleteDiscontinuedBatchRecord | ItemUpdateBatchRecord;

export function ItemBatchRecordFromJSON(json: any): ItemBatchRecord {
    return ItemBatchRecordFromJSONTyped(json, false);
}

export function ItemBatchRecordFromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemBatchRecord {
    if (json == null) {
        return json;
    }
    return { ...ItemCreateBatchRecordFromJSONTyped(json, true), ...ItemDeleteDiscontinuedBatchRecordFromJSONTyped(json, true), ...ItemUpdateBatchRecordFromJSONTyped(json, true) };
}

export function ItemBatchRecordToJSON(value?: ItemBatchRecord | null): any {
    if (value == null) {
        return value;
    }

    if (instanceOfItemCreateBatchRecord(value)) {
        return ItemCreateBatchRecordToJSON(value as ItemCreateBatchRecord);
    }
    if (instanceOfItemDeleteDiscontinuedBatchRecord(value)) {
        return ItemDeleteDiscontinuedBatchRecordToJSON(value as ItemDeleteDiscontinuedBatchRecord);
    }
    if (instanceOfItemUpdateBatchRecord(value)) {
        return ItemUpdateBatchRecordToJSON(value as ItemUpdateBatchRecord);
    }

    return {};
}

