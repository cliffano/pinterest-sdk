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
import type { CatalogsItemValidationIssues } from './CatalogsItemValidationIssues';
import {
    CatalogsItemValidationIssuesFromJSON,
    CatalogsItemValidationIssuesFromJSONTyped,
    CatalogsItemValidationIssuesToJSON,
} from './CatalogsItemValidationIssues';

/**
 * 
 * @export
 * @interface ItemsIssuesList200Response
 */
export interface ItemsIssuesList200Response {
    /**
     * 
     * @type {Array<CatalogsItemValidationIssues>}
     * @memberof ItemsIssuesList200Response
     */
    items: Array<CatalogsItemValidationIssues>;
    /**
     * 
     * @type {string}
     * @memberof ItemsIssuesList200Response
     */
    bookmark?: string;
}

/**
 * Check if a given object implements the ItemsIssuesList200Response interface.
 */
export function instanceOfItemsIssuesList200Response(value: object): boolean {
    if (!('items' in value)) return false;
    return true;
}

export function ItemsIssuesList200ResponseFromJSON(json: any): ItemsIssuesList200Response {
    return ItemsIssuesList200ResponseFromJSONTyped(json, false);
}

export function ItemsIssuesList200ResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemsIssuesList200Response {
    if (json == null) {
        return json;
    }
    return {
        
        'items': ((json['items'] as Array<any>).map(CatalogsItemValidationIssuesFromJSON)),
        'bookmark': json['bookmark'] == null ? undefined : json['bookmark'],
    };
}

export function ItemsIssuesList200ResponseToJSON(value?: ItemsIssuesList200Response | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': ((value['items'] as Array<any>).map(CatalogsItemValidationIssuesToJSON)),
        'bookmark': value['bookmark'],
    };
}

