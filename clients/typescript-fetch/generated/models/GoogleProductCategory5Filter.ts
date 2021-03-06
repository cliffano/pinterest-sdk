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
    CatalogsProductGroupMultipleStringListCriteria,
    CatalogsProductGroupMultipleStringListCriteriaFromJSON,
    CatalogsProductGroupMultipleStringListCriteriaFromJSONTyped,
    CatalogsProductGroupMultipleStringListCriteriaToJSON,
} from './CatalogsProductGroupMultipleStringListCriteria';

/**
 * 
 * @export
 * @interface GoogleProductCategory5Filter
 */
export interface GoogleProductCategory5Filter {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof GoogleProductCategory5Filter
     */
    gOOGLEPRODUCTCATEGORY5: CatalogsProductGroupMultipleStringListCriteria;
}

export function GoogleProductCategory5FilterFromJSON(json: any): GoogleProductCategory5Filter {
    return GoogleProductCategory5FilterFromJSONTyped(json, false);
}

export function GoogleProductCategory5FilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): GoogleProductCategory5Filter {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'gOOGLEPRODUCTCATEGORY5': json['GOOGLE_PRODUCT_CATEGORY_5'],
    };
}

export function GoogleProductCategory5FilterToJSON(value?: GoogleProductCategory5Filter | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'GOOGLE_PRODUCT_CATEGORY_5': value.gOOGLEPRODUCTCATEGORY5,
    };
}

