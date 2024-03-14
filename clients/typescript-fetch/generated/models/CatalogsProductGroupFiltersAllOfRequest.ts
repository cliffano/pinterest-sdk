/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
import type { CatalogsProductGroupFilterKeys } from './CatalogsProductGroupFilterKeys';
import {
    CatalogsProductGroupFilterKeysFromJSON,
    CatalogsProductGroupFilterKeysFromJSONTyped,
    CatalogsProductGroupFilterKeysToJSON,
} from './CatalogsProductGroupFilterKeys';
import type { CatalogsProductGroupFiltersAllOfRequestAnyOf } from './CatalogsProductGroupFiltersAllOfRequestAnyOf';
import {
    CatalogsProductGroupFiltersAllOfRequestAnyOfFromJSON,
    CatalogsProductGroupFiltersAllOfRequestAnyOfFromJSONTyped,
    CatalogsProductGroupFiltersAllOfRequestAnyOfToJSON,
} from './CatalogsProductGroupFiltersAllOfRequestAnyOf';
import type { CatalogsProductGroupFiltersAllOfRequestAnyOf1 } from './CatalogsProductGroupFiltersAllOfRequestAnyOf1';
import {
    CatalogsProductGroupFiltersAllOfRequestAnyOf1FromJSON,
    CatalogsProductGroupFiltersAllOfRequestAnyOf1FromJSONTyped,
    CatalogsProductGroupFiltersAllOfRequestAnyOf1ToJSON,
} from './CatalogsProductGroupFiltersAllOfRequestAnyOf1';

/**
 * Object holding a group of filters for request on catalog product group. This is a distinct schema It is not possible to create or update a Product Group with empty filters. But some automatically generated Product Groups might have empty filters.
 * @export
 * @interface CatalogsProductGroupFiltersAllOfRequest
 */
export interface CatalogsProductGroupFiltersAllOfRequest {
    /**
     * 
     * @type {Array<CatalogsProductGroupFilterKeys>}
     * @memberof CatalogsProductGroupFiltersAllOfRequest
     */
    anyOf: Array<CatalogsProductGroupFilterKeys>;
    /**
     * 
     * @type {Array<CatalogsProductGroupFilterKeys>}
     * @memberof CatalogsProductGroupFiltersAllOfRequest
     */
    allOf: Array<CatalogsProductGroupFilterKeys>;
}

/**
 * Check if a given object implements the CatalogsProductGroupFiltersAllOfRequest interface.
 */
export function instanceOfCatalogsProductGroupFiltersAllOfRequest(value: object): boolean {
    if (!('anyOf' in value)) return false;
    if (!('allOf' in value)) return false;
    return true;
}

export function CatalogsProductGroupFiltersAllOfRequestFromJSON(json: any): CatalogsProductGroupFiltersAllOfRequest {
    return CatalogsProductGroupFiltersAllOfRequestFromJSONTyped(json, false);
}

export function CatalogsProductGroupFiltersAllOfRequestFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupFiltersAllOfRequest {
    if (json == null) {
        return json;
    }
    return {
        
        'anyOf': ((json['any_of'] as Array<any>).map(CatalogsProductGroupFilterKeysFromJSON)),
        'allOf': ((json['all_of'] as Array<any>).map(CatalogsProductGroupFilterKeysFromJSON)),
    };
}

export function CatalogsProductGroupFiltersAllOfRequestToJSON(value?: CatalogsProductGroupFiltersAllOfRequest | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'any_of': ((value['anyOf'] as Array<any>).map(CatalogsProductGroupFilterKeysToJSON)),
        'all_of': ((value['allOf'] as Array<any>).map(CatalogsProductGroupFilterKeysToJSON)),
    };
}
