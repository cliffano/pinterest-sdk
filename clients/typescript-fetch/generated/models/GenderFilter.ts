/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
import {
    CatalogsProductGroupMultipleStringCriteria,
    CatalogsProductGroupMultipleStringCriteriaFromJSON,
    CatalogsProductGroupMultipleStringCriteriaFromJSONTyped,
    CatalogsProductGroupMultipleStringCriteriaToJSON,
} from './CatalogsProductGroupMultipleStringCriteria';

/**
 * 
 * @export
 * @interface GenderFilter
 */
export interface GenderFilter {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof GenderFilter
     */
    gENDER: CatalogsProductGroupMultipleStringCriteria;
}

export function GenderFilterFromJSON(json: any): GenderFilter {
    return GenderFilterFromJSONTyped(json, false);
}

export function GenderFilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): GenderFilter {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'gENDER': json['GENDER'],
    };
}

export function GenderFilterToJSON(value?: GenderFilter | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'GENDER': value.gENDER,
    };
}

