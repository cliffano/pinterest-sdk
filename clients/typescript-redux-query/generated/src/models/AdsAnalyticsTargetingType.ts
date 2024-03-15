// tslint:disable
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
 * Reporting targeting type
 * @export
 * @enum {string}
 */
export enum AdsAnalyticsTargetingType {
    Keyword = 'KEYWORD',
    Apptype = 'APPTYPE',
    Gender = 'GENDER',
    Location = 'LOCATION',
    Placement = 'PLACEMENT',
    Country = 'COUNTRY',
    TargetedInterest = 'TARGETED_INTEREST',
    PinnerInterest = 'PINNER_INTEREST',
    AudienceInclude = 'AUDIENCE_INCLUDE',
    Geo = 'GEO',
    AgeBucket = 'AGE_BUCKET',
    Region = 'REGION'
}

export function AdsAnalyticsTargetingTypeFromJSON(json: any): AdsAnalyticsTargetingType {
    return json as AdsAnalyticsTargetingType;
}

export function AdsAnalyticsTargetingTypeToJSON(value?: AdsAnalyticsTargetingType): any {
    return value as any;
}

