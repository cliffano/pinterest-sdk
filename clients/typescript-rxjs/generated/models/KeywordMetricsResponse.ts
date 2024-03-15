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
    KeywordMetrics,
} from './';

/**
 * @export
 * @interface KeywordMetricsResponse
 */
export interface KeywordMetricsResponse {
    /**
     * Keyword name, e.g., \"keyword\":\"fashion outfits\"
     * @type {string}
     * @memberof KeywordMetricsResponse
     */
    keyword?: string;
    /**
     * @type {KeywordMetrics}
     * @memberof KeywordMetricsResponse
     */
    metrics?: KeywordMetrics;
}
