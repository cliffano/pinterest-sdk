/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
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
 * @interface AudienceInsightCategoryCommon
 */
export interface AudienceInsightCategoryCommon {
    /**
     * 
     * @type {string}
     * @memberof AudienceInsightCategoryCommon
     */
    key?: string;
    /**
     * 
     * @type {string}
     * @memberof AudienceInsightCategoryCommon
     */
    name?: string;
    /**
     * 
     * @type {number}
     * @memberof AudienceInsightCategoryCommon
     */
    ratio?: number;
    /**
     * 
     * @type {number}
     * @memberof AudienceInsightCategoryCommon
     */
    index?: number;
    /**
     * 
     * @type {string}
     * @memberof AudienceInsightCategoryCommon
     */
    id?: string;
}

/**
 * Check if a given object implements the AudienceInsightCategoryCommon interface.
 */
export function instanceOfAudienceInsightCategoryCommon(value: object): boolean {
    return true;
}

export function AudienceInsightCategoryCommonFromJSON(json: any): AudienceInsightCategoryCommon {
    return AudienceInsightCategoryCommonFromJSONTyped(json, false);
}

export function AudienceInsightCategoryCommonFromJSONTyped(json: any, ignoreDiscriminator: boolean): AudienceInsightCategoryCommon {
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

export function AudienceInsightCategoryCommonToJSON(value?: AudienceInsightCategoryCommon | null): any {
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

