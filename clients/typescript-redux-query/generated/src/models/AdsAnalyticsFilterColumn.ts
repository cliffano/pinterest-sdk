// tslint:disable
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/**
 * Reporting columns for sync reporting data filter
 * @export
 * @enum {string}
 */
export enum AdsAnalyticsFilterColumn {
    SpendInDollar = 'SPEND_IN_DOLLAR',
    TotalImpression = 'TOTAL_IMPRESSION'
}

export function AdsAnalyticsFilterColumnFromJSON(json: any): AdsAnalyticsFilterColumn {
    return json as AdsAnalyticsFilterColumn;
}

export function AdsAnalyticsFilterColumnToJSON(value?: AdsAnalyticsFilterColumn): any {
    return value as any;
}

