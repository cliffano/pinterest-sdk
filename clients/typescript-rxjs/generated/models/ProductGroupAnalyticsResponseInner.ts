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
 * @interface ProductGroupAnalyticsResponseInner
 */
export interface ProductGroupAnalyticsResponseInner {
    [key: string]: any | any;
    /**
     * The ID of the product group that this metrics belongs to.
     * @type {string}
     * @memberof ProductGroupAnalyticsResponseInner
     */
    PRODUCT_GROUP_ID: string;
    /**
     * Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
     * @type {string}
     * @memberof ProductGroupAnalyticsResponseInner
     */
    DATE?: string;
}
