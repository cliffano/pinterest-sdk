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
import type { CatalogsProductGroupFilterKeys } from './CatalogsProductGroupFilterKeys';
import {
    CatalogsProductGroupFilterKeysFromJSON,
    CatalogsProductGroupFilterKeysFromJSONTyped,
    CatalogsProductGroupFilterKeysToJSON,
} from './CatalogsProductGroupFilterKeys';

/**
 * 
 * @export
 * @interface CatalogsProductGroupFiltersRequestAnyOf
 */
export interface CatalogsProductGroupFiltersRequestAnyOf {
    /**
     * 
     * @type {Array<CatalogsProductGroupFilterKeys>}
     * @memberof CatalogsProductGroupFiltersRequestAnyOf
     */
    anyOf: Array<CatalogsProductGroupFilterKeys>;
}

/**
 * Check if a given object implements the CatalogsProductGroupFiltersRequestAnyOf interface.
 */
export function instanceOfCatalogsProductGroupFiltersRequestAnyOf(value: object): boolean {
    if (!('anyOf' in value)) return false;
    return true;
}

export function CatalogsProductGroupFiltersRequestAnyOfFromJSON(json: any): CatalogsProductGroupFiltersRequestAnyOf {
    return CatalogsProductGroupFiltersRequestAnyOfFromJSONTyped(json, false);
}

export function CatalogsProductGroupFiltersRequestAnyOfFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupFiltersRequestAnyOf {
    if (json == null) {
        return json;
    }
    return {
        
        'anyOf': ((json['any_of'] as Array<any>).map(CatalogsProductGroupFilterKeysFromJSON)),
    };
}

export function CatalogsProductGroupFiltersRequestAnyOfToJSON(value?: CatalogsProductGroupFiltersRequestAnyOf | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'any_of': ((value['anyOf'] as Array<any>).map(CatalogsProductGroupFilterKeysToJSON)),
    };
}

