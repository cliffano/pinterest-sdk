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
 * @interface AdGroupAudienceSizingRequestKeywordsInner
 */
export interface AdGroupAudienceSizingRequestKeywordsInner  {
    /**
     * 
     * @type {MatchTypeResponse}
     * @memberof AdGroupAudienceSizingRequestKeywordsInner
     */
    matchType: MatchTypeResponse;
    /**
     * Keyword value (120 chars max).
     * @type {string}
     * @memberof AdGroupAudienceSizingRequestKeywordsInner
     */
    value: string;
}

export function AdGroupAudienceSizingRequestKeywordsInnerFromJSON(json: any): AdGroupAudienceSizingRequestKeywordsInner {
    return {
        'matchType': MatchTypeResponseFromJSON(json['match_type']),
        'value': json['value'],
    };
}

export function AdGroupAudienceSizingRequestKeywordsInnerToJSON(value?: AdGroupAudienceSizingRequestKeywordsInner): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'match_type': MatchTypeResponseToJSON(value.matchType),
        'value': value.value,
    };
}



