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
import type { CatalogsHotelAttributes } from './CatalogsHotelAttributes';
import {
    CatalogsHotelAttributesFromJSON,
    CatalogsHotelAttributesFromJSONTyped,
    CatalogsHotelAttributesToJSON,
} from './CatalogsHotelAttributes';

/**
 * A hotel item to be upserted.
 * @export
 * @interface CatalogsUpsertHotelItem
 */
export interface CatalogsUpsertHotelItem {
    /**
     * The catalog hotel id in the merchant namespace
     * @type {string}
     * @memberof CatalogsUpsertHotelItem
     */
    hotelId: string;
    /**
     * 
     * @type {string}
     * @memberof CatalogsUpsertHotelItem
     */
    operation: CatalogsUpsertHotelItemOperationEnum;
    /**
     * 
     * @type {CatalogsHotelAttributes}
     * @memberof CatalogsUpsertHotelItem
     */
    attributes: CatalogsHotelAttributes;
}


/**
 * @export
 */
export const CatalogsUpsertHotelItemOperationEnum = {
    Upsert: 'UPSERT'
} as const;
export type CatalogsUpsertHotelItemOperationEnum = typeof CatalogsUpsertHotelItemOperationEnum[keyof typeof CatalogsUpsertHotelItemOperationEnum];


/**
 * Check if a given object implements the CatalogsUpsertHotelItem interface.
 */
export function instanceOfCatalogsUpsertHotelItem(value: object): boolean {
    if (!('hotelId' in value)) return false;
    if (!('operation' in value)) return false;
    if (!('attributes' in value)) return false;
    return true;
}

export function CatalogsUpsertHotelItemFromJSON(json: any): CatalogsUpsertHotelItem {
    return CatalogsUpsertHotelItemFromJSONTyped(json, false);
}

export function CatalogsUpsertHotelItemFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsUpsertHotelItem {
    if (json == null) {
        return json;
    }
    return {
        
        'hotelId': json['hotel_id'],
        'operation': json['operation'],
        'attributes': CatalogsHotelAttributesFromJSON(json['attributes']),
    };
}

export function CatalogsUpsertHotelItemToJSON(value?: CatalogsUpsertHotelItem | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'hotel_id': value['hotelId'],
        'operation': value['operation'],
        'attributes': CatalogsHotelAttributesToJSON(value['attributes']),
    };
}

