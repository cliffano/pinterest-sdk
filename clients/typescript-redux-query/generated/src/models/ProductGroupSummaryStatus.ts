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
 * Summary status for product group
 * @export
 * @enum {string}
 */
export enum ProductGroupSummaryStatus {
    Running = 'RUNNING',
    Paused = 'PAUSED',
    Excluded = 'EXCLUDED',
    Archived = 'ARCHIVED'
}

export function ProductGroupSummaryStatusFromJSON(json: any): ProductGroupSummaryStatus {
    return json as ProductGroupSummaryStatus;
}

export function ProductGroupSummaryStatusToJSON(value?: ProductGroupSummaryStatus): any {
    return value as any;
}

