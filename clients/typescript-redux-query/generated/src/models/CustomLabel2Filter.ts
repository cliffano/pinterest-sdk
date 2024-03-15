// tslint:disable
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

import { exists, mapValues } from '../runtime';
import {
    CatalogsProductGroupMultipleStringCriteria,
    CatalogsProductGroupMultipleStringCriteriaFromJSON,
    CatalogsProductGroupMultipleStringCriteriaToJSON,
} from './';

/**
 * 
 * @export
 * @interface CustomLabel2Filter
 */
export interface CustomLabel2Filter  {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof CustomLabel2Filter
     */
    cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria;
}

export function CustomLabel2FilterFromJSON(json: any): CustomLabel2Filter {
    return {
        'cUSTOMLABEL2': json['CUSTOM_LABEL_2'],
    };
}

export function CustomLabel2FilterToJSON(value?: CustomLabel2Filter): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'CUSTOM_LABEL_2': value.cUSTOMLABEL2,
    };
}

