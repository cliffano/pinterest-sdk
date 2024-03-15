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
import type { Catalog } from './Catalog';
import {
    CatalogFromJSON,
    CatalogFromJSONTyped,
    CatalogToJSON,
} from './Catalog';

/**
 * 
 * @export
 * @interface CatalogsList200Response
 */
export interface CatalogsList200Response {
    /**
     * 
     * @type {Array<Catalog>}
     * @memberof CatalogsList200Response
     */
    items: Array<Catalog>;
    /**
     * 
     * @type {string}
     * @memberof CatalogsList200Response
     */
    bookmark?: string;
}

/**
 * Check if a given object implements the CatalogsList200Response interface.
 */
export function instanceOfCatalogsList200Response(value: object): boolean {
    if (!('items' in value)) return false;
    return true;
}

export function CatalogsList200ResponseFromJSON(json: any): CatalogsList200Response {
    return CatalogsList200ResponseFromJSONTyped(json, false);
}

export function CatalogsList200ResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsList200Response {
    if (json == null) {
        return json;
    }
    return {
        
        'items': ((json['items'] as Array<any>).map(CatalogFromJSON)),
        'bookmark': json['bookmark'] == null ? undefined : json['bookmark'],
    };
}

export function CatalogsList200ResponseToJSON(value?: CatalogsList200Response | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': ((value['items'] as Array<any>).map(CatalogToJSON)),
        'bookmark': value['bookmark'],
    };
}

