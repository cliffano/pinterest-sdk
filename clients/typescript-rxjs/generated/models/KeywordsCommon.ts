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

import type {
    MatchTypeResponse,
} from './';

/**
 * @export
 * @interface KeywordsCommon
 */
export interface KeywordsCommon {
    /**
     * Keyword custom bid in microcurrency - null if inherited from parent ad group.
     * @type {number}
     * @memberof KeywordsCommon
     */
    bid?: number | null;
    /**
     * @type {MatchTypeResponse}
     * @memberof KeywordsCommon
     */
    match_type: MatchTypeResponse | null;
    /**
     * Keyword value (120 chars max).
     * @type {string}
     * @memberof KeywordsCommon
     */
    value: string;
}


