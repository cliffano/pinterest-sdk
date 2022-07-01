/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
import {
    CatalogsProductGroupFilterKeys,
    CatalogsProductGroupFilterKeysFromJSON,
    CatalogsProductGroupFilterKeysFromJSONTyped,
    CatalogsProductGroupFilterKeysToJSON,
} from './CatalogsProductGroupFilterKeys';

/**
 * 
 * @export
 * @interface CatalogsProductGroupFiltersAllOf
 */
export interface CatalogsProductGroupFiltersAllOf {
    /**
     * 
     * @type {Array<CatalogsProductGroupFilterKeys>}
     * @memberof CatalogsProductGroupFiltersAllOf
     */
    allOf?: Array<CatalogsProductGroupFilterKeys>;
}

export function CatalogsProductGroupFiltersAllOfFromJSON(json: any): CatalogsProductGroupFiltersAllOf {
    return CatalogsProductGroupFiltersAllOfFromJSONTyped(json, false);
}

export function CatalogsProductGroupFiltersAllOfFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupFiltersAllOf {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'allOf': !exists(json, 'all_of') ? undefined : ((json['all_of'] as Array<any>).map(CatalogsProductGroupFilterKeysFromJSON)),
    };
}

export function CatalogsProductGroupFiltersAllOfToJSON(value?: CatalogsProductGroupFiltersAllOf | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'all_of': value.allOf === undefined ? undefined : ((value.allOf as Array<any>).map(CatalogsProductGroupFilterKeysToJSON)),
    };
}

