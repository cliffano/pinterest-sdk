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
    CatalogsProductGroupPricingCriteria,
    CatalogsProductGroupPricingCriteriaFromJSON,
    CatalogsProductGroupPricingCriteriaFromJSONTyped,
    CatalogsProductGroupPricingCriteriaToJSON,
} from './CatalogsProductGroupPricingCriteria';

/**
 * 
 * @export
 * @interface MaxPriceFilter
 */
export interface MaxPriceFilter {
    /**
     * 
     * @type {CatalogsProductGroupPricingCriteria}
     * @memberof MaxPriceFilter
     */
    mAXPRICE: CatalogsProductGroupPricingCriteria;
}

export function MaxPriceFilterFromJSON(json: any): MaxPriceFilter {
    return MaxPriceFilterFromJSONTyped(json, false);
}

export function MaxPriceFilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): MaxPriceFilter {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'mAXPRICE': json['MAX_PRICE'],
    };
}

export function MaxPriceFilterToJSON(value?: MaxPriceFilter | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'MAX_PRICE': value.mAXPRICE,
    };
}

