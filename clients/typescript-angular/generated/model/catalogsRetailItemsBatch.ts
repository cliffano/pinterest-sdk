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
import { CatalogsType } from './catalogsType';
import { ItemProcessingRecord } from './itemProcessingRecord';
import { BatchOperationStatus } from './batchOperationStatus';


/**
 * Object describing the catalogs retail items batch
 */
export interface CatalogsRetailItemsBatch { 
    /**
     * Id of the catalogs items batch
     */
    batch_id?: string;
    /**
     * Time of the batch creation: YYYY-MM-DD\'T\'hh:mm:ssTZD
     */
    readonly created_time?: string;
    /**
     * Time of the batch completion: YYYY-MM-DD\'T\'hh:mm:ssTZD
     */
    readonly completed_time?: string | null;
    status?: BatchOperationStatus;
    catalog_type: CatalogsType;
    /**
     * Array with the catalogs items processing records part of the catalogs items batch
     */
    items?: Array<ItemProcessingRecord>;
}
export namespace CatalogsRetailItemsBatch {
}


