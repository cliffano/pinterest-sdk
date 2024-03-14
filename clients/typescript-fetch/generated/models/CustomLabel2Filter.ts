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
import type { CatalogsProductGroupMultipleStringCriteria } from './CatalogsProductGroupMultipleStringCriteria';
import {
    CatalogsProductGroupMultipleStringCriteriaFromJSON,
    CatalogsProductGroupMultipleStringCriteriaFromJSONTyped,
    CatalogsProductGroupMultipleStringCriteriaToJSON,
} from './CatalogsProductGroupMultipleStringCriteria';

/**
 * 
 * @export
 * @interface CustomLabel2Filter
 */
export interface CustomLabel2Filter {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CustomLabel2Filter
     */
    cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria;
}

/**
 * Check if a given object implements the CustomLabel2Filter interface.
 */
export function instanceOfCustomLabel2Filter(value: object): boolean {
    if (!('cUSTOMLABEL2' in value)) return false;
    return true;
}

export function CustomLabel2FilterFromJSON(json: any): CustomLabel2Filter {
    return CustomLabel2FilterFromJSONTyped(json, false);
}

export function CustomLabel2FilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): CustomLabel2Filter {
    if (json == null) {
        return json;
    }
    return {
        
        'cUSTOMLABEL2': json['CUSTOM_LABEL_2'],
    };
}

export function CustomLabel2FilterToJSON(value?: CustomLabel2Filter | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'CUSTOM_LABEL_2': value['cUSTOMLABEL2'],
    };
}
