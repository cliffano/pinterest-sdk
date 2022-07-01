// tslint:disable
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
    CatalogsProductGroupMultipleStringListCriteriaToJSON,
} from './';

/**
 * 
 * @export
 * @interface ProductType0Filter
 */
export interface ProductType0Filter  {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof ProductType0Filter
     */
    pRODUCTTYPE0: CatalogsProductGroupMultipleStringListCriteria;
}

export function ProductType0FilterFromJSON(json: any): ProductType0Filter {
    return {
        'pRODUCTTYPE0': json['PRODUCT_TYPE_0'],
    };
}

export function ProductType0FilterToJSON(value?: ProductType0Filter): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'PRODUCT_TYPE_0': value.pRODUCTTYPE0,
    };
}


