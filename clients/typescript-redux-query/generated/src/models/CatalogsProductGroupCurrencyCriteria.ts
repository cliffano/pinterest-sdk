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
    NonNullableCatalogsCurrency,
    NonNullableCatalogsCurrencyFromJSON,
    NonNullableCatalogsCurrencyToJSON,
} from './';

/**
 * A currency filter. This filter cannot be negated
 * @export
 * @interface CatalogsProductGroupCurrencyCriteria
 */
export interface CatalogsProductGroupCurrencyCriteria  {
    /**
     * 
     * @type {NonNullableCatalogsCurrency}
     * @memberof CatalogsProductGroupCurrencyCriteria
     */
    values: NonNullableCatalogsCurrency;
    /**
     * 
     * @type {boolean}
     * @memberof CatalogsProductGroupCurrencyCriteria
     */
    negated?: boolean;
}

export function CatalogsProductGroupCurrencyCriteriaFromJSON(json: any): CatalogsProductGroupCurrencyCriteria {
    return {
        'values': NonNullableCatalogsCurrencyFromJSON(json['values']),
        'negated': !exists(json, 'negated') ? undefined : json['negated'],
    };
}

export function CatalogsProductGroupCurrencyCriteriaToJSON(value?: CatalogsProductGroupCurrencyCriteria): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'values': NonNullableCatalogsCurrencyToJSON(value.values),
        'negated': value.negated,
    };
}



