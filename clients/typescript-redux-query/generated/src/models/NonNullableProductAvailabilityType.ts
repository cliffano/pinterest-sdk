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
 * Product availability.
 * @export
 * @enum {string}
 */
export enum NonNullableProductAvailabilityType {
    InStock = 'IN_STOCK',
    OutOfStock = 'OUT_OF_STOCK',
    Preorder = 'PREORDER'
}

export function NonNullableProductAvailabilityTypeFromJSON(json: any): NonNullableProductAvailabilityType {
    return json as NonNullableProductAvailabilityType;
}

export function NonNullableProductAvailabilityTypeToJSON(value?: NonNullableProductAvailabilityType): any {
    return value as any;
}

