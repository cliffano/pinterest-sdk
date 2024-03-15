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


/**
 * Summary status for product group
 * @export
 */
export const ProductGroupSummaryStatus = {
    Running: 'RUNNING',
    Paused: 'PAUSED',
    Excluded: 'EXCLUDED',
    Archived: 'ARCHIVED'
} as const;
export type ProductGroupSummaryStatus = typeof ProductGroupSummaryStatus[keyof typeof ProductGroupSummaryStatus];


export function ProductGroupSummaryStatusFromJSON(json: any): ProductGroupSummaryStatus {
    return ProductGroupSummaryStatusFromJSONTyped(json, false);
}

export function ProductGroupSummaryStatusFromJSONTyped(json: any, ignoreDiscriminator: boolean): ProductGroupSummaryStatus {
    return json as ProductGroupSummaryStatus;
}

export function ProductGroupSummaryStatusToJSON(value?: ProductGroupSummaryStatus | null): any {
    return value as any;
}

