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
 * Ad group billable event type.
 * @export
 * @enum {string}
 */
export enum ActionType {
    Clickthrough = 'CLICKTHROUGH',
    Impression = 'IMPRESSION',
    VideoV50Mrc = 'VIDEO_V_50_MRC',
    BillableEngagement = 'BILLABLE_ENGAGEMENT'
}

export function ActionTypeFromJSON(json: any): ActionType {
    return ActionTypeFromJSONTyped(json, false);
}

export function ActionTypeFromJSONTyped(json: any, ignoreDiscriminator: boolean): ActionType {
    return json as ActionType;
}

export function ActionTypeToJSON(value?: ActionType | null): any {
    return value as any;
}

