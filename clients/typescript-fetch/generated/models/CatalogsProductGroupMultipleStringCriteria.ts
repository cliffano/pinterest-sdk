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
/**
 * 
 * @export
 * @interface CatalogsProductGroupMultipleStringCriteria
 */
export interface CatalogsProductGroupMultipleStringCriteria {
    /**
     * 
     * @type {Array<string>}
     * @memberof CatalogsProductGroupMultipleStringCriteria
     */
    values: Array<string>;
    /**
     * 
     * @type {boolean}
     * @memberof CatalogsProductGroupMultipleStringCriteria
     */
    negated?: boolean;
}

/**
 * Check if a given object implements the CatalogsProductGroupMultipleStringCriteria interface.
 */
export function instanceOfCatalogsProductGroupMultipleStringCriteria(value: object): boolean {
    if (!('values' in value)) return false;
    return true;
}

export function CatalogsProductGroupMultipleStringCriteriaFromJSON(json: any): CatalogsProductGroupMultipleStringCriteria {
    return CatalogsProductGroupMultipleStringCriteriaFromJSONTyped(json, false);
}

export function CatalogsProductGroupMultipleStringCriteriaFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupMultipleStringCriteria {
    if (json == null) {
        return json;
    }
    return {
        
        'values': json['values'],
        'negated': json['negated'] == null ? undefined : json['negated'],
    };
}

export function CatalogsProductGroupMultipleStringCriteriaToJSON(value?: CatalogsProductGroupMultipleStringCriteria | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'values': value['values'],
        'negated': value['negated'],
    };
}

