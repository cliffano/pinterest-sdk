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
import {
    BatchOperationStatus,
    BatchOperationStatusFromJSON,
    BatchOperationStatusToJSON,
    CatalogsType,
    CatalogsTypeFromJSON,
    CatalogsTypeToJSON,
    HotelProcessingRecord,
    HotelProcessingRecordFromJSON,
    HotelProcessingRecordToJSON,
} from './';

/**
 * Object describing the catalogs hotel items batch
 * @export
 * @interface CatalogsHotelItemsBatch
 */
export interface CatalogsHotelItemsBatch  {
    /**
     * Id of the catalogs items batch
     * @type {string}
     * @memberof CatalogsHotelItemsBatch
     */
    batchId?: string;
    /**
     * Time of the batch creation: YYYY-MM-DD\'T\'hh:mm:ssTZD
     * @type {Date}
     * @memberof CatalogsHotelItemsBatch
     */
    readonly createdTime?: Date;
    /**
     * Time of the batch completion: YYYY-MM-DD\'T\'hh:mm:ssTZD
     * @type {Date}
     * @memberof CatalogsHotelItemsBatch
     */
    readonly completedTime?: Date;
    /**
     * 
     * @type {BatchOperationStatus}
     * @memberof CatalogsHotelItemsBatch
     */
    status?: BatchOperationStatus;
    /**
     * 
     * @type {CatalogsType}
     * @memberof CatalogsHotelItemsBatch
     */
    catalogType: CatalogsType;
    /**
     * Array with the catalogs items processing records part of the catalogs items batch
     * @type {Array<HotelProcessingRecord>}
     * @memberof CatalogsHotelItemsBatch
     */
    items?: Array<HotelProcessingRecord>;
}

export function CatalogsHotelItemsBatchFromJSON(json: any): CatalogsHotelItemsBatch {
    return {
        'batchId': !exists(json, 'batch_id') ? undefined : json['batch_id'],
        'createdTime': !exists(json, 'created_time') ? undefined : new Date(json['created_time']),
        'completedTime': !exists(json, 'completed_time') ? undefined : new Date(json['completed_time']),
        'status': !exists(json, 'status') ? undefined : BatchOperationStatusFromJSON(json['status']),
        'catalogType': CatalogsTypeFromJSON(json['catalog_type']),
        'items': !exists(json, 'items') ? undefined : (json['items'] as Array<any>).map(HotelProcessingRecordFromJSON),
    };
}

export function CatalogsHotelItemsBatchToJSON(value?: CatalogsHotelItemsBatch): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'batch_id': value.batchId,
        'status': BatchOperationStatusToJSON(value.status),
        'catalog_type': CatalogsTypeToJSON(value.catalogType),
        'items': value.items === undefined ? undefined : (value.items as Array<any>).map(HotelProcessingRecordToJSON),
    };
}


