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

/**
 * @export
 * @interface AdAccountAnalyticsResponseInner
 */
export interface AdAccountAnalyticsResponseInner {
    [key: string]: any | any;
    /**
     * The ID of the advertiser that this metrics belongs to.
     * @type {string}
     * @memberof AdAccountAnalyticsResponseInner
     */
    AD_ACCOUNT_ID: string;
    /**
     * Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
     * @type {string}
     * @memberof AdAccountAnalyticsResponseInner
     */
    DATE?: string;
}
