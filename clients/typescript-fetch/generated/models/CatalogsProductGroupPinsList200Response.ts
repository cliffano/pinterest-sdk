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
import type { CatalogsProduct } from './CatalogsProduct';
import {
    CatalogsProductFromJSON,
    CatalogsProductFromJSONTyped,
    CatalogsProductToJSON,
} from './CatalogsProduct';

/**
 * 
 * @export
 * @interface CatalogsProductGroupPinsList200Response
 */
export interface CatalogsProductGroupPinsList200Response {
    /**
     * Pins
     * @type {Array<CatalogsProduct>}
     * @memberof CatalogsProductGroupPinsList200Response
     */
    items: Array<CatalogsProduct>;
    /**
     * 
     * @type {string}
     * @memberof CatalogsProductGroupPinsList200Response
     */
    bookmark?: string;
}

/**
 * Check if a given object implements the CatalogsProductGroupPinsList200Response interface.
 */
export function instanceOfCatalogsProductGroupPinsList200Response(value: object): boolean {
    if (!('items' in value)) return false;
    return true;
}

export function CatalogsProductGroupPinsList200ResponseFromJSON(json: any): CatalogsProductGroupPinsList200Response {
    return CatalogsProductGroupPinsList200ResponseFromJSONTyped(json, false);
}

export function CatalogsProductGroupPinsList200ResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupPinsList200Response {
    if (json == null) {
        return json;
    }
    return {
        
        'items': ((json['items'] as Array<any>).map(CatalogsProductFromJSON)),
        'bookmark': json['bookmark'] == null ? undefined : json['bookmark'],
    };
}

export function CatalogsProductGroupPinsList200ResponseToJSON(value?: CatalogsProductGroupPinsList200Response | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': ((value['items'] as Array<any>).map(CatalogsProductToJSON)),
        'bookmark': value['bookmark'],
    };
}
