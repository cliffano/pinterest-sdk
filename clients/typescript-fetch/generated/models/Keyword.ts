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
import type { MatchTypeResponse } from './MatchTypeResponse';
import {
    MatchTypeResponseFromJSON,
    MatchTypeResponseFromJSONTyped,
    MatchTypeResponseToJSON,
} from './MatchTypeResponse';

/**
 * 
 * @export
 * @interface Keyword
 */
export interface Keyword {
    /**
     * 
     * @type {boolean}
     * @memberof Keyword
     */
    archived?: boolean;
    /**
     * Keyword ID .
     * @type {string}
     * @memberof Keyword
     */
    id?: string;
    /**
     * Keyword parent entity ID (advertiser, campaign, ad group).
     * @type {string}
     * @memberof Keyword
     */
    parentId?: string;
    /**
     * Parent entity type
     * @type {string}
     * @memberof Keyword
     */
    parentType?: string;
    /**
     * Always keyword
     * @type {string}
     * @memberof Keyword
     */
    type?: string;
    /**
     * Keyword custom bid in microcurrency - null if inherited from parent ad group.
     * @type {number}
     * @memberof Keyword
     */
    bid?: number;
    /**
     * 
     * @type {MatchTypeResponse}
     * @memberof Keyword
     */
    matchType: MatchTypeResponse | null;
    /**
     * Keyword value (120 chars max).
     * @type {string}
     * @memberof Keyword
     */
    value: string;
}

/**
 * Check if a given object implements the Keyword interface.
 */
export function instanceOfKeyword(value: object): boolean {
    if (!('matchType' in value)) return false;
    if (!('value' in value)) return false;
    return true;
}

export function KeywordFromJSON(json: any): Keyword {
    return KeywordFromJSONTyped(json, false);
}

export function KeywordFromJSONTyped(json: any, ignoreDiscriminator: boolean): Keyword {
    if (json == null) {
        return json;
    }
    return {
        
        'archived': json['archived'] == null ? undefined : json['archived'],
        'id': json['id'] == null ? undefined : json['id'],
        'parentId': json['parent_id'] == null ? undefined : json['parent_id'],
        'parentType': json['parent_type'] == null ? undefined : json['parent_type'],
        'type': json['type'] == null ? undefined : json['type'],
        'bid': json['bid'] == null ? undefined : json['bid'],
        'matchType': MatchTypeResponseFromJSON(json['match_type']),
        'value': json['value'],
    };
}

export function KeywordToJSON(value?: Keyword | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'archived': value['archived'],
        'id': value['id'],
        'parent_id': value['parentId'],
        'parent_type': value['parentType'],
        'type': value['type'],
        'bid': value['bid'],
        'match_type': MatchTypeResponseToJSON(value['matchType']),
        'value': value['value'],
    };
}

