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
    CatalogsProductGroupFilterKeys,
    CatalogsProductGroupFiltersAllOf,
    CatalogsProductGroupFiltersAnyOf,
} from './';

/**
 * Object holding a group of filters for a catalog product group
 * @export
 * @interface CatalogsProductGroupFilters
 */
export interface CatalogsProductGroupFilters {
    /**
     * @type {Array<CatalogsProductGroupFilterKeys>}
     * @memberof CatalogsProductGroupFilters
     */
    any_of?: Array<CatalogsProductGroupFilterKeys>;
    /**
     * @type {Array<CatalogsProductGroupFilterKeys>}
     * @memberof CatalogsProductGroupFilters
     */
    all_of?: Array<CatalogsProductGroupFilterKeys>;
}
