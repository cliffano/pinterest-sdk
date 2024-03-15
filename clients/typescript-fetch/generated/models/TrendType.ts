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
export const TrendType = {
    Growing: 'growing',
    Monthly: 'monthly',
    Yearly: 'yearly',
    Seasonal: 'seasonal'
} as const;
export type TrendType = typeof TrendType[keyof typeof TrendType];


export function TrendTypeFromJSON(json: any): TrendType {
    return TrendTypeFromJSONTyped(json, false);
}

export function TrendTypeFromJSONTyped(json: any, ignoreDiscriminator: boolean): TrendType {
    return json as TrendType;
}

export function TrendTypeToJSON(value?: TrendType | null): any {
    return value as any;
}

