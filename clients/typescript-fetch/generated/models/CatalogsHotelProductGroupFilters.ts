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
import type { CatalogsHotelProductGroupFilterKeys } from './CatalogsHotelProductGroupFilterKeys';
import {
    CatalogsHotelProductGroupFilterKeysFromJSON,
    CatalogsHotelProductGroupFilterKeysFromJSONTyped,
    CatalogsHotelProductGroupFilterKeysToJSON,
} from './CatalogsHotelProductGroupFilterKeys';
import type { CatalogsHotelProductGroupFiltersAllOf } from './CatalogsHotelProductGroupFiltersAllOf';
import {
    CatalogsHotelProductGroupFiltersAllOfFromJSON,
    CatalogsHotelProductGroupFiltersAllOfFromJSONTyped,
    CatalogsHotelProductGroupFiltersAllOfToJSON,
} from './CatalogsHotelProductGroupFiltersAllOf';
import type { CatalogsHotelProductGroupFiltersAnyOf } from './CatalogsHotelProductGroupFiltersAnyOf';
import {
    CatalogsHotelProductGroupFiltersAnyOfFromJSON,
    CatalogsHotelProductGroupFiltersAnyOfFromJSONTyped,
    CatalogsHotelProductGroupFiltersAnyOfToJSON,
} from './CatalogsHotelProductGroupFiltersAnyOf';

/**
 * Object holding a group of filters for a hotel product group
 * @export
 * @interface CatalogsHotelProductGroupFilters
 */
export interface CatalogsHotelProductGroupFilters {
    /**
     * 
     * @type {Array<CatalogsHotelProductGroupFilterKeys>}
     * @memberof CatalogsHotelProductGroupFilters
     */
    anyOf: Array<CatalogsHotelProductGroupFilterKeys>;
    /**
     * 
     * @type {Array<CatalogsHotelProductGroupFilterKeys>}
     * @memberof CatalogsHotelProductGroupFilters
     */
    allOf: Array<CatalogsHotelProductGroupFilterKeys>;
}

/**
 * Check if a given object implements the CatalogsHotelProductGroupFilters interface.
 */
export function instanceOfCatalogsHotelProductGroupFilters(value: object): boolean {
    if (!('anyOf' in value)) return false;
    if (!('allOf' in value)) return false;
    return true;
}

export function CatalogsHotelProductGroupFiltersFromJSON(json: any): CatalogsHotelProductGroupFilters {
    return CatalogsHotelProductGroupFiltersFromJSONTyped(json, false);
}

export function CatalogsHotelProductGroupFiltersFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsHotelProductGroupFilters {
    if (json == null) {
        return json;
    }
    return {
        
        'anyOf': ((json['any_of'] as Array<any>).map(CatalogsHotelProductGroupFilterKeysFromJSON)),
        'allOf': ((json['all_of'] as Array<any>).map(CatalogsHotelProductGroupFilterKeysFromJSON)),
    };
}

export function CatalogsHotelProductGroupFiltersToJSON(value?: CatalogsHotelProductGroupFilters | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'any_of': ((value['anyOf'] as Array<any>).map(CatalogsHotelProductGroupFilterKeysToJSON)),
        'all_of': ((value['allOf'] as Array<any>).map(CatalogsHotelProductGroupFilterKeysToJSON)),
    };
}

