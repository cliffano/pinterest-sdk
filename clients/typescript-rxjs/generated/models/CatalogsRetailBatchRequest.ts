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
    CatalogsRetailBatchRequestItemsInner,
    CatalogsType,
    Country,
    Language,
} from './';

/**
 * A request object that can have multiple operations on a single retail batch
 * @export
 * @interface CatalogsRetailBatchRequest
 */
export interface CatalogsRetailBatchRequest {
    /**
     * @type {CatalogsType}
     * @memberof CatalogsRetailBatchRequest
     */
    catalog_type: CatalogsType;
    /**
     * @type {Country}
     * @memberof CatalogsRetailBatchRequest
     */
    country: Country;
    /**
     * @type {Language}
     * @memberof CatalogsRetailBatchRequest
     */
    language: Language;
    /**
     * Array with catalogs item operations
     * @type {Array<CatalogsRetailBatchRequestItemsInner>}
     * @memberof CatalogsRetailBatchRequest
     */
    items: Array<CatalogsRetailBatchRequestItemsInner>;
}


