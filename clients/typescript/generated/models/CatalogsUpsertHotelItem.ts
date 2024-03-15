/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { CatalogsHotelAttributes } from '../models/CatalogsHotelAttributes';
import { HttpFile } from '../http/http';

/**
* A hotel item to be upserted.
*/
export class CatalogsUpsertHotelItem {
    /**
    * The catalog hotel id in the merchant namespace
    */
    'hotelId': string;
    'operation': CatalogsUpsertHotelItemOperationEnum;
    'attributes': CatalogsHotelAttributes;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "hotelId",
            "baseName": "hotel_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "operation",
            "baseName": "operation",
            "type": "CatalogsUpsertHotelItemOperationEnum",
            "format": ""
        },
        {
            "name": "attributes",
            "baseName": "attributes",
            "type": "CatalogsHotelAttributes",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return CatalogsUpsertHotelItem.attributeTypeMap;
    }

    public constructor() {
    }
}


export enum CatalogsUpsertHotelItemOperationEnum {
    Upsert = 'UPSERT'
}
