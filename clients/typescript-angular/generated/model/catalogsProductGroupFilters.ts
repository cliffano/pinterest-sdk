/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
import { CatalogsProductGroupFilterKeys } from './catalogsProductGroupFilterKeys';
import { CatalogsProductGroupFiltersAnyOf } from './catalogsProductGroupFiltersAnyOf';
import { CatalogsProductGroupFiltersAllOf } from './catalogsProductGroupFiltersAllOf';


/**
 * Object holding a group of filters for a catalog product group
 */
export interface CatalogsProductGroupFilters { 
    any_of?: Array<CatalogsProductGroupFilterKeys>;
    all_of?: Array<CatalogsProductGroupFilterKeys>;
}

