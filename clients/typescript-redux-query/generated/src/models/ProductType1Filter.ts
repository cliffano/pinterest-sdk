// tslint:disable
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
    CatalogsProductGroupMultipleStringListCriteria,
    CatalogsProductGroupMultipleStringListCriteriaFromJSON,
    CatalogsProductGroupMultipleStringListCriteriaToJSON,
} from './';

/**
 * 
 * @export
 * @interface ProductType1Filter
 */
export interface ProductType1Filter  {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof ProductType1Filter
     */
    pRODUCTTYPE1: CatalogsProductGroupMultipleStringListCriteria;
}

export function ProductType1FilterFromJSON(json: any): ProductType1Filter {
    return {
        'pRODUCTTYPE1': json['PRODUCT_TYPE_1'],
    };
}

export function ProductType1FilterToJSON(value?: ProductType1Filter): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'PRODUCT_TYPE_1': value.pRODUCTTYPE1,
    };
}


