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
    CatalogsProductGroupCurrencyCriteria,
    CatalogsProductGroupCurrencyCriteriaFromJSON,
    CatalogsProductGroupCurrencyCriteriaFromJSONTyped,
    CatalogsProductGroupCurrencyCriteriaToJSON,
} from './CatalogsProductGroupCurrencyCriteria';

/**
 * 
 * @export
 * @interface ItemIdFilter
 */
export interface ItemIdFilter {
    /**
     * 
     * @type {CatalogsProductGroupCurrencyCriteria}
     * @memberof ItemIdFilter
     */
    iTEMID: CatalogsProductGroupCurrencyCriteria;
}

export function ItemIdFilterFromJSON(json: any): ItemIdFilter {
    return ItemIdFilterFromJSONTyped(json, false);
}

export function ItemIdFilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemIdFilter {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'iTEMID': json['ITEM_ID'],
    };
}

export function ItemIdFilterToJSON(value?: ItemIdFilter | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'ITEM_ID': value.iTEMID,
    };
}

