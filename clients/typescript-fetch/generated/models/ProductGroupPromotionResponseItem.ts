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
import type { Exception } from './Exception';
import {
    ExceptionFromJSON,
    ExceptionFromJSONTyped,
    ExceptionToJSON,
} from './Exception';
import type { ProductGroupPromotion } from './ProductGroupPromotion';
import {
    ProductGroupPromotionFromJSON,
    ProductGroupPromotionFromJSONTyped,
    ProductGroupPromotionToJSON,
} from './ProductGroupPromotion';

/**
 * 
 * @export
 * @interface ProductGroupPromotionResponseItem
 */
export interface ProductGroupPromotionResponseItem {
    /**
     * 
     * @type {ProductGroupPromotion}
     * @memberof ProductGroupPromotionResponseItem
     */
    data?: ProductGroupPromotion;
    /**
     * 
     * @type {Array<Exception>}
     * @memberof ProductGroupPromotionResponseItem
     */
    exceptions?: Array<Exception>;
}

/**
 * Check if a given object implements the ProductGroupPromotionResponseItem interface.
 */
export function instanceOfProductGroupPromotionResponseItem(value: object): boolean {
    return true;
}

export function ProductGroupPromotionResponseItemFromJSON(json: any): ProductGroupPromotionResponseItem {
    return ProductGroupPromotionResponseItemFromJSONTyped(json, false);
}

export function ProductGroupPromotionResponseItemFromJSONTyped(json: any, ignoreDiscriminator: boolean): ProductGroupPromotionResponseItem {
    if (json == null) {
        return json;
    }
    return {
        
        'data': json['data'] == null ? undefined : ProductGroupPromotionFromJSON(json['data']),
        'exceptions': json['exceptions'] == null ? undefined : ((json['exceptions'] as Array<any>).map(ExceptionFromJSON)),
    };
}

export function ProductGroupPromotionResponseItemToJSON(value?: ProductGroupPromotionResponseItem | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'data': ProductGroupPromotionToJSON(value['data']),
        'exceptions': value['exceptions'] == null ? undefined : ((value['exceptions'] as Array<any>).map(ExceptionToJSON)),
    };
}
