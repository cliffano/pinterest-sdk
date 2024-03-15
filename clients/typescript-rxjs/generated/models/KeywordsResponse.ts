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
    Keyword,
    KeywordError,
} from './';

/**
 * @export
 * @interface KeywordsResponse
 */
export interface KeywordsResponse {
    /**
     * @type {Array<KeywordError>}
     * @memberof KeywordsResponse
     */
    errors?: Array<KeywordError>;
    /**
     * @type {Array<Keyword>}
     * @memberof KeywordsResponse
     */
    keywords?: Array<Keyword>;
}
