/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/**
 * Summary status for ad group
 * @export
 * @enum {string}
 */
export enum AdGroupSummaryStatus {
    Running = 'RUNNING',
    Paused = 'PAUSED',
    NotStarted = 'NOT_STARTED',
    Completed = 'COMPLETED',
    AdvertiserDisabled = 'ADVERTISER_DISABLED',
    Archived = 'ARCHIVED'
}

export function AdGroupSummaryStatusFromJSON(json: any): AdGroupSummaryStatus {
    return AdGroupSummaryStatusFromJSONTyped(json, false);
}

export function AdGroupSummaryStatusFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdGroupSummaryStatus {
    return json as AdGroupSummaryStatus;
}

export function AdGroupSummaryStatusToJSON(value?: AdGroupSummaryStatus | null): any {
    return value as any;
}

