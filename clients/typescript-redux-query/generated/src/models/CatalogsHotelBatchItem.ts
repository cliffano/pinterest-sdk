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

import { exists, mapValues } from '../runtime';
import {
    CatalogsCreateHotelItem,
    CatalogsCreateHotelItemFromJSON,
    CatalogsCreateHotelItemToJSON,
    CatalogsDeleteHotelItem,
    CatalogsDeleteHotelItemFromJSON,
    CatalogsDeleteHotelItemToJSON,
    CatalogsUpdatableHotelAttributes,
    CatalogsUpdatableHotelAttributesFromJSON,
    CatalogsUpdatableHotelAttributesToJSON,
    CatalogsUpdateHotelItem,
    CatalogsUpdateHotelItemFromJSON,
    CatalogsUpdateHotelItemToJSON,
    CatalogsUpsertHotelItem,
    CatalogsUpsertHotelItemFromJSON,
    CatalogsUpsertHotelItemToJSON,
} from './';

/**
 * Hotel batch item
 * @export
 * @interface CatalogsHotelBatchItem
 */
export interface CatalogsHotelBatchItem  {
    /**
     * The catalog hotel id in the merchant namespace
     * @type {string}
     * @memberof CatalogsHotelBatchItem
     */
    hotelId: string;
    /**
     * 
     * @type {string}
     * @memberof CatalogsHotelBatchItem
     */
    operation: CatalogsHotelBatchItemOperationEnum;
    /**
     * 
     * @type {CatalogsUpdatableHotelAttributes}
     * @memberof CatalogsHotelBatchItem
     */
    attributes: CatalogsUpdatableHotelAttributes;
}

export function CatalogsHotelBatchItemFromJSON(json: any): CatalogsHotelBatchItem {
    return {
        'hotelId': json['hotel_id'],
        'operation': json['operation'],
        'attributes': CatalogsUpdatableHotelAttributesFromJSON(json['attributes']),
    };
}

export function CatalogsHotelBatchItemToJSON(value?: CatalogsHotelBatchItem): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'hotel_id': value.hotelId,
        'operation': value.operation,
        'attributes': CatalogsUpdatableHotelAttributesToJSON(value.attributes),
    };
}

/**
* @export
* @enum {string}
*/
export enum CatalogsHotelBatchItemOperationEnum {
    Delete = 'DELETE'
}

