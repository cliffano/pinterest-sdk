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
    CatalogsProductGroupPricingCriteria,
    CatalogsProductGroupPricingCriteriaFromJSON,
    CatalogsProductGroupPricingCriteriaToJSON,
} from './';

/**
 * 
 * @export
 * @interface MinPriceFilter
 */
export interface MinPriceFilter  {
    /**
     * 
     * @type {CatalogsProductGroupPricingCriteria}
     * @memberof MinPriceFilter
     */
    mINPRICE: CatalogsProductGroupPricingCriteria;
}

export function MinPriceFilterFromJSON(json: any): MinPriceFilter {
    return {
        'mINPRICE': json['MIN_PRICE'],
    };
}

export function MinPriceFilterToJSON(value?: MinPriceFilter): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'MIN_PRICE': value.mINPRICE,
    };
}


