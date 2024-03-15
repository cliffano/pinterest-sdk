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
 * 
 * @export
 * @enum {string}
 */
export enum PartnerType {
    Internal = 'INTERNAL',
    External = 'EXTERNAL'
}

export function PartnerTypeFromJSON(json: any): PartnerType {
    return json as PartnerType;
}

export function PartnerTypeToJSON(value?: PartnerType): any {
    return value as any;
}

