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
 * Status of the lead form
 * @export
 */
export const LeadFormStatus = {
    Draft: 'DRAFT',
    Active: 'ACTIVE'
} as const;
export type LeadFormStatus = typeof LeadFormStatus[keyof typeof LeadFormStatus];


export function LeadFormStatusFromJSON(json: any): LeadFormStatus {
    return LeadFormStatusFromJSONTyped(json, false);
}

export function LeadFormStatusFromJSONTyped(json: any, ignoreDiscriminator: boolean): LeadFormStatus {
    return json as LeadFormStatus;
}

export function LeadFormStatusToJSON(value?: LeadFormStatus | null): any {
    return value as any;
}

