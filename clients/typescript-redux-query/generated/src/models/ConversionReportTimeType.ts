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
 * Conversion report time type
 * @export
 * @enum {string}
 */
export enum ConversionReportTimeType {
    AdAction = 'TIME_OF_AD_ACTION',
    Conversion = 'TIME_OF_CONVERSION'
}

export function ConversionReportTimeTypeFromJSON(json: any): ConversionReportTimeType {
    return json as ConversionReportTimeType;
}

export function ConversionReportTimeTypeToJSON(value?: ConversionReportTimeType): any {
    return value as any;
}

