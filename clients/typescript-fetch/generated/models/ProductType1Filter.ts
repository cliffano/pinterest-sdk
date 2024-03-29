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
import type { CatalogsProductGroupMultipleStringListCriteria } from './CatalogsProductGroupMultipleStringListCriteria';
import {
    CatalogsProductGroupMultipleStringListCriteriaFromJSON,
    CatalogsProductGroupMultipleStringListCriteriaFromJSONTyped,
    CatalogsProductGroupMultipleStringListCriteriaToJSON,
} from './CatalogsProductGroupMultipleStringListCriteria';

/**
 * 
 * @export
 * @interface ProductType1Filter
 */
export interface ProductType1Filter {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringListCriteria}
     * @memberof ProductType1Filter
     */
    pRODUCTTYPE1: CatalogsProductGroupMultipleStringListCriteria;
}

/**
 * Check if a given object implements the ProductType1Filter interface.
 */
export function instanceOfProductType1Filter(value: object): boolean {
    if (!('pRODUCTTYPE1' in value)) return false;
    return true;
}

export function ProductType1FilterFromJSON(json: any): ProductType1Filter {
    return ProductType1FilterFromJSONTyped(json, false);
}

export function ProductType1FilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): ProductType1Filter {
    if (json == null) {
        return json;
    }
    return {
        
        'pRODUCTTYPE1': json['PRODUCT_TYPE_1'],
    };
}

export function ProductType1FilterToJSON(value?: ProductType1Filter | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'PRODUCT_TYPE_1': value['pRODUCTTYPE1'],
    };
}

