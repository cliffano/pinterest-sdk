/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
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
export const CatalogsProductGroupStatus = {
    Active: 'ACTIVE',
    Inactive: 'INACTIVE'
} as const;
export type CatalogsProductGroupStatus = typeof CatalogsProductGroupStatus[keyof typeof CatalogsProductGroupStatus];


export function CatalogsProductGroupStatusFromJSON(json: any): CatalogsProductGroupStatus {
    return CatalogsProductGroupStatusFromJSONTyped(json, false);
}

export function CatalogsProductGroupStatusFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupStatus {
    return json as CatalogsProductGroupStatus;
}

export function CatalogsProductGroupStatusToJSON(value?: CatalogsProductGroupStatus | null): any {
    return value as any;
}
