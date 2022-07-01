/* tslint:disable */
/* eslint-disable */
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
 * The status of the item processing record
 * @export
 * @enum {string}
 */
export enum ItemProcessingStatus {
    Success = 'SUCCESS',
    Failure = 'FAILURE',
    Processing = 'PROCESSING'
}

export function ItemProcessingStatusFromJSON(json: any): ItemProcessingStatus {
    return ItemProcessingStatusFromJSONTyped(json, false);
}

export function ItemProcessingStatusFromJSONTyped(json: any, ignoreDiscriminator: boolean): ItemProcessingStatus {
    return json as ItemProcessingStatus;
}

export function ItemProcessingStatusToJSON(value?: ItemProcessingStatus | null): any {
    return value as any;
}

