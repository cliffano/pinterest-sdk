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
    CatalogsProductGroupCurrencyCriteria,
    CatalogsProductGroupCurrencyCriteriaFromJSON,
    CatalogsProductGroupCurrencyCriteriaToJSON,
} from './';

/**
 * 
 * @export
 * @interface CurrencyFilter
 */
export interface CurrencyFilter  {
    /**
     * 
     * @type {CatalogsProductGroupCurrencyCriteria}
     * @memberof CurrencyFilter
     */
    cURRENCY: CatalogsProductGroupCurrencyCriteria;
}

export function CurrencyFilterFromJSON(json: any): CurrencyFilter {
    return {
        'cURRENCY': json['CURRENCY'],
    };
}

export function CurrencyFilterToJSON(value?: CurrencyFilter): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'CURRENCY': value.cURRENCY,
    };
}


