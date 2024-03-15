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
    CatalogsProductGroupFiltersRequest,
} from './';

/**
 * Request object for updating a product group.
 * @export
 * @interface CatalogsProductGroupUpdateRequest
 */
export interface CatalogsProductGroupUpdateRequest {
    /**
     * @type {string}
     * @memberof CatalogsProductGroupUpdateRequest
     */
    name?: string;
    /**
     * @type {string}
     * @memberof CatalogsProductGroupUpdateRequest
     */
    description?: string | null;
    /**
     * boolean indicator of whether the product group is being featured or not
     * @type {boolean}
     * @memberof CatalogsProductGroupUpdateRequest
     */
    is_featured?: boolean;
    /**
     * @type {CatalogsProductGroupFiltersRequest}
     * @memberof CatalogsProductGroupUpdateRequest
     */
    filters?: CatalogsProductGroupFiltersRequest;
}
