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
export const Gender = {
    Female: 'FEMALE',
    Male: 'MALE',
    Unisex: 'UNISEX'
} as const;
export type Gender = typeof Gender[keyof typeof Gender];


export function GenderFromJSON(json: any): Gender {
    return GenderFromJSONTyped(json, false);
}

export function GenderFromJSONTyped(json: any, ignoreDiscriminator: boolean): Gender {
    return json as Gender;
}

export function GenderToJSON(value?: Gender | null): any {
    return value as any;
}
