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
 * @interface ProductType3Filter
 */
export interface ProductType3Filter  {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof ProductType3Filter
     */
    pRODUCTTYPE3: CatalogsProductGroupMultipleStringListCriteria;
}

export function ProductType3FilterFromJSON(json: any): ProductType3Filter {
    return {
        'pRODUCTTYPE3': json['PRODUCT_TYPE_3'],
    };
}

export function ProductType3FilterToJSON(value?: ProductType3Filter): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'PRODUCT_TYPE_3': value.pRODUCTTYPE3,
    };
}


