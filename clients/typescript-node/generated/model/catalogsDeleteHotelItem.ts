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

/**
* A hotel item to be deleted
*/
export class CatalogsDeleteHotelItem {
    /**
    * The catalog hotel id in the merchant namespace
    */
    'hotelId': string;
    'operation': CatalogsDeleteHotelItem.OperationEnum;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "hotelId",
            "baseName": "hotel_id",
            "type": "string"
        },
        {
            "name": "operation",
            "baseName": "operation",
            "type": "CatalogsDeleteHotelItem.OperationEnum"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsDeleteHotelItem.attributeTypeMap;
    }
}

export namespace CatalogsDeleteHotelItem {
    export enum OperationEnum {
        Delete = <any> 'DELETE'
    }
}
