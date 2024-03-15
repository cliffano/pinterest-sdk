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
import type { CatalogsProductGroupPricingCurrencyCriteria } from './CatalogsProductGroupPricingCurrencyCriteria';
import {
    CatalogsProductGroupPricingCurrencyCriteriaFromJSON,
    CatalogsProductGroupPricingCurrencyCriteriaFromJSONTyped,
    CatalogsProductGroupPricingCurrencyCriteriaToJSON,
} from './CatalogsProductGroupPricingCurrencyCriteria';

/**
 * 
 * @export
 * @interface PriceFilter
 */
export interface PriceFilter {
    /**
     * 
     * @type {CatalogsProductGroupPricingCurrencyCriteria}
     * @memberof PriceFilter
     */
    pRICE: CatalogsProductGroupPricingCurrencyCriteria;
}

/**
 * Check if a given object implements the PriceFilter interface.
 */
export function instanceOfPriceFilter(value: object): boolean {
    if (!('pRICE' in value)) return false;
    return true;
}

export function PriceFilterFromJSON(json: any): PriceFilter {
    return PriceFilterFromJSONTyped(json, false);
}

export function PriceFilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): PriceFilter {
    if (json == null) {
        return json;
    }
    return {
        
        'pRICE': CatalogsProductGroupPricingCurrencyCriteriaFromJSON(json['PRICE']),
    };
}

export function PriceFilterToJSON(value?: PriceFilter | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'PRICE': CatalogsProductGroupPricingCurrencyCriteriaToJSON(value['pRICE']),
    };
}

