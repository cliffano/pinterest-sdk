/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/**
 * The file format of a feed.
 * @export
 * @enum {string}
 */
export enum CatalogsFormat {
    Tsv = 'TSV',
    Csv = 'CSV',
    Xml = 'XML'
}

export function CatalogsFormatFromJSON(json: any): CatalogsFormat {
    return CatalogsFormatFromJSONTyped(json, false);
}

export function CatalogsFormatFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsFormat {
    return json as CatalogsFormat;
}

export function CatalogsFormatToJSON(value?: CatalogsFormat | null): any {
    return value as any;
}

