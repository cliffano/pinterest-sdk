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
 * Bulk file output format
 * @export
 * @enum {string}
 */
export enum BulkOutputFormat {
    Csv = 'CSV',
    Json = 'JSON'
}

export function BulkOutputFormatFromJSON(json: any): BulkOutputFormat {
    return json as BulkOutputFormat;
}

export function BulkOutputFormatToJSON(value?: BulkOutputFormat): any {
    return value as any;
}

