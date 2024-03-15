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
 * 
 * @export
 */
export const BulkUpsertStatus = {
    Running: 'RUNNING',
    Succeeded: 'SUCCEEDED',
    Failed: 'FAILED'
} as const;
export type BulkUpsertStatus = typeof BulkUpsertStatus[keyof typeof BulkUpsertStatus];


export function BulkUpsertStatusFromJSON(json: any): BulkUpsertStatus {
    return BulkUpsertStatusFromJSONTyped(json, false);
}

export function BulkUpsertStatusFromJSONTyped(json: any, ignoreDiscriminator: boolean): BulkUpsertStatus {
    return json as BulkUpsertStatus;
}

export function BulkUpsertStatusToJSON(value?: BulkUpsertStatus | null): any {
    return value as any;
}

