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
import type { CatalogsProductGroupMultipleStringCriteria } from './CatalogsProductGroupMultipleStringCriteria';
import {
    CatalogsProductGroupMultipleStringCriteriaFromJSON,
    CatalogsProductGroupMultipleStringCriteriaFromJSONTyped,
    CatalogsProductGroupMultipleStringCriteriaToJSON,
} from './CatalogsProductGroupMultipleStringCriteria';

/**
 * 
 * @export
 * @interface ItemIdFilter
 */
export interface ItemIdFilter {
    /**
     * 
     * @type {CatalogsProductGroupMultipleStringCriteria}
     * @memberof ItemIdFilter
     */
    iTEMID: CatalogsProductGroupMultipleStringCriteria;
}

/**
 * Check if a given object implements the ItemIdFilter interface.
 */
export function instanceOfItemIdFilter(value: object): boolean {
    if (!('iTEMID' in value)) return false;
    return true;
}

export function ItemIdFilterFromJSON(json: any): ItemIdFilter {
    return ItemIdFilterFromJSONTyped(json, false);
}

export function ItemIdFilterFromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemIdFilter {
    if (json == null) {
        return json;
    }
    return {
        
        'iTEMID': json['ITEM_ID'],
    };
}

export function ItemIdFilterToJSON(value?: ItemIdFilter | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'ITEM_ID': value['iTEMID'],
    };
}

