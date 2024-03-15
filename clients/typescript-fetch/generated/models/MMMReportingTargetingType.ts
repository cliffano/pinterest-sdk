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
 * Ad targeting types for MMM report
 * @export
 */
export const MMMReportingTargetingType = {
    Apptype: 'APPTYPE',
    Country: 'COUNTRY',
    CreativeType: 'CREATIVE_TYPE',
    Gender: 'GENDER',
    Location: 'LOCATION'
} as const;
export type MMMReportingTargetingType = typeof MMMReportingTargetingType[keyof typeof MMMReportingTargetingType];


export function MMMReportingTargetingTypeFromJSON(json: any): MMMReportingTargetingType {
    return MMMReportingTargetingTypeFromJSONTyped(json, false);
}

export function MMMReportingTargetingTypeFromJSONTyped(json: any, ignoreDiscriminator: boolean): MMMReportingTargetingType {
    return json as MMMReportingTargetingType;
}

export function MMMReportingTargetingTypeToJSON(value?: MMMReportingTargetingType | null): any {
    return value as any;
}

