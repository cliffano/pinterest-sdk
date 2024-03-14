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
 * Bulk file output format
 * @export
 */
export const BulkOutputFormat = {
    Csv: 'CSV',
    Json: 'JSON'
} as const;
export type BulkOutputFormat = typeof BulkOutputFormat[keyof typeof BulkOutputFormat];


export function BulkOutputFormatFromJSON(json: any): BulkOutputFormat {
    return BulkOutputFormatFromJSONTyped(json, false);
}

export function BulkOutputFormatFromJSONTyped(json: any, ignoreDiscriminator: boolean): BulkOutputFormat {
    return json as BulkOutputFormat;
}

export function BulkOutputFormatToJSON(value?: BulkOutputFormat | null): any {
    return value as any;
}

