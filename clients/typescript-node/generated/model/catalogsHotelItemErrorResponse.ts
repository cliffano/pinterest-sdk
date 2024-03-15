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

import { RequestFile } from './models';
import { CatalogsType } from './catalogsType';
import { ItemValidationEvent } from './itemValidationEvent';

/**
* Object describing a hotel item error
*/
export class CatalogsHotelItemErrorResponse {
    'catalogType': CatalogsType;
    /**
    * The catalog hotel id in the merchant namespace
    */
    'hotelId'?: string;
    /**
    * Array with the errors for the item id requested
    */
    'errors'?: Array<ItemValidationEvent>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "catalogType",
            "baseName": "catalog_type",
            "type": "CatalogsType"
        },
        {
            "name": "hotelId",
            "baseName": "hotel_id",
            "type": "string"
        },
        {
            "name": "errors",
            "baseName": "errors",
            "type": "Array<ItemValidationEvent>"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsHotelItemErrorResponse.attributeTypeMap;
    }
}

export namespace CatalogsHotelItemErrorResponse {
}
