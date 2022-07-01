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
 * Campaign objective type.
 * @export
 * @enum {string}
 */
export enum ObjectiveType {
    Awareness = 'AWARENESS',
    Consideration = 'CONSIDERATION',
    VideoView = 'VIDEO_VIEW',
    WebConversion = 'WEB_CONVERSION',
    CatalogSales = 'CATALOG_SALES',
    WebSessions = 'WEB_SESSIONS',
    AwarenessReserved = 'AWARENESS_RESERVED',
    Engagement = 'ENGAGEMENT'
}

export function ObjectiveTypeFromJSON(json: any): ObjectiveType {
    return ObjectiveTypeFromJSONTyped(json, false);
}

export function ObjectiveTypeFromJSONTyped(json: any, ignoreDiscriminator: boolean): ObjectiveType {
    return json as ObjectiveType;
}

export function ObjectiveTypeToJSON(value?: ObjectiveType | null): any {
    return value as any;
}

