/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { exists, mapValues } from '../runtime';
import {
    ItemProcessingStatus,
    ItemProcessingStatusFromJSON,
    ItemProcessingStatusFromJSONTyped,
    ItemProcessingStatusToJSON,
} from './ItemProcessingStatus';
import {
    ItemValidationEvent,
    ItemValidationEventFromJSON,
    ItemValidationEventFromJSONTyped,
    ItemValidationEventToJSON,
} from './ItemValidationEvent';

/**
 * Object describing an item processing record
 * @export
 * @interface ItemProcessingRecord
 */
export interface ItemProcessingRecord {
    /**
     * The catalog item id in the merchant namespace
     * @type {string}
     * @memberof ItemProcessingRecord
     */
    itemId?: string;
    /**
     * Array with the validation errors for the item processing record.
     * A non empty errors list causes the item processing to fail.
     * @type {Array<ItemValidationEvent>}
     * @memberof ItemProcessingRecord
     */
    errors?: Array<ItemValidationEvent>;
    /**
     * Array with the validation warnings for the item processing record
     * @type {Array<ItemValidationEvent>}
     * @memberof ItemProcessingRecord
     */
    warnings?: Array<ItemValidationEvent>;
    /**
     * 
     * @type {ItemProcessingStatus}
     * @memberof ItemProcessingRecord
     */
    status?: ItemProcessingStatus;
}

export function ItemProcessingRecordFromJSON(json: any): ItemProcessingRecord {
    return ItemProcessingRecordFromJSONTyped(json, false);
}

export function ItemProcessingRecordFromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemProcessingRecord {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'itemId': !exists(json, 'item_id') ? undefined : json['item_id'],
        'errors': !exists(json, 'errors') ? undefined : ((json['errors'] as Array<any>).map(ItemValidationEventFromJSON)),
        'warnings': !exists(json, 'warnings') ? undefined : ((json['warnings'] as Array<any>).map(ItemValidationEventFromJSON)),
        'status': !exists(json, 'status') ? undefined : ItemProcessingStatusFromJSON(json['status']),
    };
}

export function ItemProcessingRecordToJSON(value?: ItemProcessingRecord | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'item_id': value.itemId,
        'errors': value.errors === undefined ? undefined : ((value.errors as Array<any>).map(ItemValidationEventToJSON)),
        'warnings': value.warnings === undefined ? undefined : ((value.warnings as Array<any>).map(ItemValidationEventToJSON)),
        'status': ItemProcessingStatusToJSON(value.status),
    };
}

