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
/**
 * 
 * @export
 * @interface AudienceSubcategory
 */
export interface AudienceSubcategory {
    /**
     * Interest unique key (same as ID).
     * @type {string}
     * @memberof AudienceSubcategory
     */
    key?: string;
    /**
     * Subinterest name.
     * @type {string}
     * @memberof AudienceSubcategory
     */
    name?: string;
    /**
     * Subinterest's percent of category's total audience.
     * @type {number}
     * @memberof AudienceSubcategory
     */
    ratio?: number;
    /**
     * Subinterest affinity index.
     * @type {number}
     * @memberof AudienceSubcategory
     */
    index?: number;
    /**
     * Subinterest ID.
     * @type {string}
     * @memberof AudienceSubcategory
     */
    id?: string;
}

/**
 * Check if a given object implements the AudienceSubcategory interface.
 */
export function instanceOfAudienceSubcategory(value: object): boolean {
    return true;
}

export function AudienceSubcategoryFromJSON(json: any): AudienceSubcategory {
    return AudienceSubcategoryFromJSONTyped(json, false);
}

export function AudienceSubcategoryFromJSONTyped(json: any, ignoreDiscriminator: boolean): AudienceSubcategory {
    if (json == null) {
        return json;
    }
    return {
        
        'key': json['key'] == null ? undefined : json['key'],
        'name': json['name'] == null ? undefined : json['name'],
        'ratio': json['ratio'] == null ? undefined : json['ratio'],
        'index': json['index'] == null ? undefined : json['index'],
        'id': json['id'] == null ? undefined : json['id'],
    };
}

export function AudienceSubcategoryToJSON(value?: AudienceSubcategory | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'key': value['key'],
        'name': value['name'],
        'ratio': value['ratio'],
        'index': value['index'],
        'id': value['id'],
    };
}
