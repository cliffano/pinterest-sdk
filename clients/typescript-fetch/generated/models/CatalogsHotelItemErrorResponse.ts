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
import type { CatalogsType } from './CatalogsType';
import {
    CatalogsTypeFromJSON,
    CatalogsTypeFromJSONTyped,
    CatalogsTypeToJSON,
} from './CatalogsType';
import type { ItemValidationEvent } from './ItemValidationEvent';
import {
    ItemValidationEventFromJSON,
    ItemValidationEventFromJSONTyped,
    ItemValidationEventToJSON,
} from './ItemValidationEvent';

/**
 * Object describing a hotel item error
 * @export
 * @interface CatalogsHotelItemErrorResponse
 */
export interface CatalogsHotelItemErrorResponse {
    /**
     * 
     * @type {CatalogsType}
     * @memberof CatalogsHotelItemErrorResponse
     */
    catalogType: CatalogsType;
    /**
     * The catalog hotel id in the merchant namespace
     * @type {string}
     * @memberof CatalogsHotelItemErrorResponse
     */
    hotelId?: string;
    /**
     * Array with the errors for the item id requested
     * @type {Array<ItemValidationEvent>}
     * @memberof CatalogsHotelItemErrorResponse
     */
    errors?: Array<ItemValidationEvent>;
}

/**
 * Check if a given object implements the CatalogsHotelItemErrorResponse interface.
 */
export function instanceOfCatalogsHotelItemErrorResponse(value: object): boolean {
    if (!('catalogType' in value)) return false;
    return true;
}

export function CatalogsHotelItemErrorResponseFromJSON(json: any): CatalogsHotelItemErrorResponse {
    return CatalogsHotelItemErrorResponseFromJSONTyped(json, false);
}

export function CatalogsHotelItemErrorResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsHotelItemErrorResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'catalogType': CatalogsTypeFromJSON(json['catalog_type']),
        'hotelId': json['hotel_id'] == null ? undefined : json['hotel_id'],
        'errors': json['errors'] == null ? undefined : ((json['errors'] as Array<any>).map(ItemValidationEventFromJSON)),
    };
}

export function CatalogsHotelItemErrorResponseToJSON(value?: CatalogsHotelItemErrorResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'catalog_type': CatalogsTypeToJSON(value['catalogType']),
        'hotel_id': value['hotelId'],
        'errors': value['errors'] == null ? undefined : ((value['errors'] as Array<any>).map(ItemValidationEventToJSON)),
    };
}

