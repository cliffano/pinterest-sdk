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
    CatalogsProductGroupFilters,
} from './';

/**
 * Request object to list products for a given feed_id and product group filter.
 * @export
 * @interface CatalogsListProductsByFilterRequestOneOf
 */
export interface CatalogsListProductsByFilterRequestOneOf {
    /**
     * Catalog Feed id pertaining to the catalog product group filter.
     * @type {string}
     * @memberof CatalogsListProductsByFilterRequestOneOf
     */
    feed_id: string;
    /**
     * @type {CatalogsProductGroupFilters}
     * @memberof CatalogsListProductsByFilterRequestOneOf
     */
    filters: CatalogsProductGroupFilters;
}
