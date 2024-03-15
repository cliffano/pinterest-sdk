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

import { mapValues } from '../runtime';
/**
 * A hotel item to be deleted
 * @export
 * @interface CatalogsDeleteHotelItem
 */
export interface CatalogsDeleteHotelItem {
    /**
     * The catalog hotel id in the merchant namespace
     * @type {string}
     * @memberof CatalogsDeleteHotelItem
     */
    hotelId: string;
    /**
     * 
     * @type {string}
     * @memberof CatalogsDeleteHotelItem
     */
    operation: CatalogsDeleteHotelItemOperationEnum;
}


/**
 * @export
 */
export const CatalogsDeleteHotelItemOperationEnum = {
    Delete: 'DELETE'
} as const;
export type CatalogsDeleteHotelItemOperationEnum = typeof CatalogsDeleteHotelItemOperationEnum[keyof typeof CatalogsDeleteHotelItemOperationEnum];


/**
 * Check if a given object implements the CatalogsDeleteHotelItem interface.
 */
export function instanceOfCatalogsDeleteHotelItem(value: object): boolean {
    if (!('hotelId' in value)) return false;
    if (!('operation' in value)) return false;
    return true;
}

export function CatalogsDeleteHotelItemFromJSON(json: any): CatalogsDeleteHotelItem {
    return CatalogsDeleteHotelItemFromJSONTyped(json, false);
}

export function CatalogsDeleteHotelItemFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsDeleteHotelItem {
    if (json == null) {
        return json;
    }
    return {
        
        'hotelId': json['hotel_id'],
        'operation': json['operation'],
    };
}

export function CatalogsDeleteHotelItemToJSON(value?: CatalogsDeleteHotelItem | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'hotel_id': value['hotelId'],
        'operation': value['operation'],
    };
}

