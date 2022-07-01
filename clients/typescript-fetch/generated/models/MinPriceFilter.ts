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
 * @interface MinPriceFilter
 */
export interface MinPriceFilter {
    /**
     * 
     * @type {CatalogsProductGroupPricingCriteria}
     * @memberof MinPriceFilter
     */
    mINPRICE: CatalogsProductGroupPricingCriteria;
}

export function MinPriceFilterFromJSON(json: any): MinPriceFilter {
    return MinPriceFilterFromJSONTyped(json, false);
}

export function MinPriceFilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): MinPriceFilter {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'mINPRICE': json['MIN_PRICE'],
    };
}

export function MinPriceFilterToJSON(value?: MinPriceFilter | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'MIN_PRICE': value.mINPRICE,
    };
}

