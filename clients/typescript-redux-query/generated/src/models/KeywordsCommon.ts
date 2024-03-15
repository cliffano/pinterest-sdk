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
    MatchTypeResponse,
    MatchTypeResponseFromJSON,
    MatchTypeResponseToJSON,
} from './';

/**
 * 
 * @export
 * @interface KeywordsCommon
 */
export interface KeywordsCommon  {
    /**
     * Keyword custom bid in microcurrency - null if inherited from parent ad group.
     * @type {number}
     * @memberof KeywordsCommon
     */
    bid?: number;
    /**
     * 
     * @type {MatchTypeResponse}
     * @memberof KeywordsCommon
     */
    matchType: MatchTypeResponse;
    /**
     * Keyword value (120 chars max).
     * @type {string}
     * @memberof KeywordsCommon
     */
    value: string;
}

export function KeywordsCommonFromJSON(json: any): KeywordsCommon {
    return {
        'bid': !exists(json, 'bid') ? undefined : json['bid'],
        'matchType': MatchTypeResponseFromJSON(json['match_type']),
        'value': json['value'],
    };
}

export function KeywordsCommonToJSON(value?: KeywordsCommon): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'bid': value.bid,
        'match_type': MatchTypeResponseToJSON(value.matchType),
        'value': value.value,
    };
}


