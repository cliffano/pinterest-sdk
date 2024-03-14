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
 * @interface CustomLabel3Filter
 */
export interface CustomLabel3Filter {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CustomLabel3Filter
     */
    cUSTOMLABEL3: CatalogsProductGroupMultipleStringCriteria;
}

/**
 * Check if a given object implements the CustomLabel3Filter interface.
 */
export function instanceOfCustomLabel3Filter(value: object): boolean {
    if (!('cUSTOMLABEL3' in value)) return false;
    return true;
}

export function CustomLabel3FilterFromJSON(json: any): CustomLabel3Filter {
    return CustomLabel3FilterFromJSONTyped(json, false);
}

export function CustomLabel3FilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): CustomLabel3Filter {
    if (json == null) {
        return json;
    }
    return {
        
        'cUSTOMLABEL3': json['CUSTOM_LABEL_3'],
    };
}

export function CustomLabel3FilterToJSON(value?: CustomLabel3Filter | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'CUSTOM_LABEL_3': value['cUSTOMLABEL3'],
    };
}

