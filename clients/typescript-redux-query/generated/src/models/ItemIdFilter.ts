// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
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
 * @interface ItemIdFilter
 */
export interface ItemIdFilter  {
    /**
     * 
     * @type {CatalogsProductGroupCurrencyCriteria}
     * @memberof ItemIdFilter
     */
    iTEMID: CatalogsProductGroupCurrencyCriteria;
}

export function ItemIdFilterFromJSON(json: any): ItemIdFilter {
    return {
        'iTEMID': json['ITEM_ID'],
    };
}

export function ItemIdFilterToJSON(value?: ItemIdFilter): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'ITEM_ID': value.iTEMID,
    };
}

