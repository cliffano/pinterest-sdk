// tslint:disable
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

import {
    CatalogsProductGroupFilters,
} from './';

/**
 * Request object for updating a product group.
 * @export
 * @interface CatalogsProductGroupUpdateRequest
 */
export interface CatalogsProductGroupUpdateRequest {
    /**
     * Catalog Feed id pertaining to the catalog product group.
     * @type {string}
     * @memberof CatalogsProductGroupUpdateRequest
     */
    feed_id: string;
    /**
     * @type {string}
     * @memberof CatalogsProductGroupUpdateRequest
     */
    name: string;
    /**
     * @type {string}
     * @memberof CatalogsProductGroupUpdateRequest
     */
    description?: string | null;
    /**
     * @type {CatalogsProductGroupFilters}
     * @memberof CatalogsProductGroupUpdateRequest
     */
    filters: CatalogsProductGroupFilters;
}
