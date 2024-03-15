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

import type {
    BatchOperationStatus,
    CatalogsType,
    ItemProcessingRecord,
} from './';

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
    batch_id?: string;
    /**
     * Time of the batch creation: YYYY-MM-DD\'T\'hh:mm:ssTZD
     * @type {string}
     * @memberof CatalogsRetailItemsBatch
     */
    readonly created_time?: string;
    /**
     * Time of the batch completion: YYYY-MM-DD\'T\'hh:mm:ssTZD
     * @type {string}
     * @memberof CatalogsRetailItemsBatch
     */
    readonly completed_time?: string | null;
    /**
     * @type {BatchOperationStatus}
     * @memberof CatalogsRetailItemsBatch
     */
    status?: BatchOperationStatus;
    /**
     * @type {CatalogsType}
     * @memberof CatalogsRetailItemsBatch
     */
    catalog_type: CatalogsType;
    /**
     * Array with the catalogs items processing records part of the catalogs items batch
     * @type {Array<ItemProcessingRecord>}
     * @memberof CatalogsRetailItemsBatch
     */
    items?: Array<ItemProcessingRecord>;
}


