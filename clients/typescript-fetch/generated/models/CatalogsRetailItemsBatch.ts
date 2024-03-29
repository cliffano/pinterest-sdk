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
import type { BatchOperationStatus } from './BatchOperationStatus';
import {
    BatchOperationStatusFromJSON,
    BatchOperationStatusFromJSONTyped,
    BatchOperationStatusToJSON,
} from './BatchOperationStatus';
import type { CatalogsType } from './CatalogsType';
import {
    CatalogsTypeFromJSON,
    CatalogsTypeFromJSONTyped,
    CatalogsTypeToJSON,
} from './CatalogsType';
import type { ItemProcessingRecord } from './ItemProcessingRecord';
import {
    ItemProcessingRecordFromJSON,
    ItemProcessingRecordFromJSONTyped,
    ItemProcessingRecordToJSON,
} from './ItemProcessingRecord';

/**
 * Object describing the catalogs retail items batch
 * @export
 * @interface CatalogsRetailItemsBatch
 */
export interface CatalogsRetailItemsBatch {
    /**
     * Id of the catalogs items batch
     * @type {string}
     * @memberof CatalogsRetailItemsBatch
     */
    batchId?: string;
    /**
     * Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD
     * @type {Date}
     * @memberof CatalogsRetailItemsBatch
     */
    readonly createdTime?: Date;
    /**
     * Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD
     * @type {Date}
     * @memberof CatalogsRetailItemsBatch
     */
    readonly completedTime?: Date;
    /**
     * 
     * @type {BatchOperationStatus}
     * @memberof CatalogsRetailItemsBatch
     */
    status?: BatchOperationStatus;
    /**
     * 
     * @type {CatalogsType}
     * @memberof CatalogsRetailItemsBatch
     */
    catalogType: CatalogsType;
    /**
     * Array with the catalogs items processing records part of the catalogs items batch
     * @type {Array<ItemProcessingRecord>}
     * @memberof CatalogsRetailItemsBatch
     */
    items?: Array<ItemProcessingRecord>;
}

/**
 * Check if a given object implements the CatalogsRetailItemsBatch interface.
 */
export function instanceOfCatalogsRetailItemsBatch(value: object): boolean {
    if (!('catalogType' in value)) return false;
    return true;
}

export function CatalogsRetailItemsBatchFromJSON(json: any): CatalogsRetailItemsBatch {
    return CatalogsRetailItemsBatchFromJSONTyped(json, false);
}

export function CatalogsRetailItemsBatchFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsRetailItemsBatch {
    if (json == null) {
        return json;
    }
    return {
        
        'batchId': json['batch_id'] == null ? undefined : json['batch_id'],
        'createdTime': json['created_time'] == null ? undefined : (new Date(json['created_time'])),
        'completedTime': json['completed_time'] == null ? undefined : (new Date(json['completed_time'])),
        'status': json['status'] == null ? undefined : BatchOperationStatusFromJSON(json['status']),
        'catalogType': CatalogsTypeFromJSON(json['catalog_type']),
        'items': json['items'] == null ? undefined : ((json['items'] as Array<any>).map(ItemProcessingRecordFromJSON)),
    };
}

export function CatalogsRetailItemsBatchToJSON(value?: CatalogsRetailItemsBatch | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'batch_id': value['batchId'],
        'status': BatchOperationStatusToJSON(value['status']),
        'catalog_type': CatalogsTypeToJSON(value['catalogType']),
        'items': value['items'] == null ? undefined : ((value['items'] as Array<any>).map(ItemProcessingRecordToJSON)),
    };
}

