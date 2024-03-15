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
    CatalogsProductGroupMultipleStringListCriteria,
    CatalogsProductGroupMultipleStringListCriteriaFromJSON,
    CatalogsProductGroupMultipleStringListCriteriaToJSON,
} from './';

/**
 * 
 * @export
 * @interface GoogleProductCategory2Filter
 */
export interface GoogleProductCategory2Filter  {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof GoogleProductCategory2Filter
     */
    gOOGLEPRODUCTCATEGORY2: CatalogsProductGroupMultipleStringListCriteria;
}

export function GoogleProductCategory2FilterFromJSON(json: any): GoogleProductCategory2Filter {
    return {
        'gOOGLEPRODUCTCATEGORY2': json['GOOGLE_PRODUCT_CATEGORY_2'],
    };
}

export function GoogleProductCategory2FilterToJSON(value?: GoogleProductCategory2Filter): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'GOOGLE_PRODUCT_CATEGORY_2': value.gOOGLEPRODUCTCATEGORY2,
    };
}


