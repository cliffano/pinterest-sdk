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
import type { CatalogsProductGroupMultipleStringListCriteria } from './CatalogsProductGroupMultipleStringListCriteria';
import {
    CatalogsProductGroupMultipleStringListCriteriaFromJSON,
    CatalogsProductGroupMultipleStringListCriteriaFromJSONTyped,
    CatalogsProductGroupMultipleStringListCriteriaToJSON,
} from './CatalogsProductGroupMultipleStringListCriteria';

/**
 * 
 * @export
 * @interface ProductType3Filter
 */
export interface ProductType3Filter {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof ProductType3Filter
     */
    pRODUCTTYPE3: CatalogsProductGroupMultipleStringListCriteria;
}

/**
 * Check if a given object implements the ProductType3Filter interface.
 */
export function instanceOfProductType3Filter(value: object): boolean {
    if (!('pRODUCTTYPE3' in value)) return false;
    return true;
}

export function ProductType3FilterFromJSON(json: any): ProductType3Filter {
    return ProductType3FilterFromJSONTyped(json, false);
}

export function ProductType3FilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): ProductType3Filter {
    if (json == null) {
        return json;
    }
    return {
        
        'pRODUCTTYPE3': json['PRODUCT_TYPE_3'],
    };
}

export function ProductType3FilterToJSON(value?: ProductType3Filter | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'PRODUCT_TYPE_3': value['pRODUCTTYPE3'],
    };
}

