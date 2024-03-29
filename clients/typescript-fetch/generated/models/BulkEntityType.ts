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
 * Refers ads entity type
 * @export
 */
export const BulkEntityType = {
    Campaign: 'CAMPAIGN',
    AdGroup: 'AD_GROUP',
    ProductGroup: 'PRODUCT_GROUP',
    Ad: 'AD',
    Keyword: 'KEYWORD'
} as const;
export type BulkEntityType = typeof BulkEntityType[keyof typeof BulkEntityType];


export function BulkEntityTypeFromJSON(json: any): BulkEntityType {
    return BulkEntityTypeFromJSONTyped(json, false);
}

export function BulkEntityTypeFromJSONTyped(json: any, ignoreDiscriminator: boolean): BulkEntityType {
    return json as BulkEntityType;
}

export function BulkEntityTypeToJSON(value?: BulkEntityType | null): any {
    return value as any;
}

