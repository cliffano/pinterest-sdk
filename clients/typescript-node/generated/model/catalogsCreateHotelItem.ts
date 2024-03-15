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
import { CatalogsHotelAttributes } from './catalogsHotelAttributes';

/**
* A hotel item to be created.
*/
export class CatalogsCreateHotelItem {
    /**
    * The catalog hotel id in the merchant namespace
    */
    'hotelId': string;
    'operation': CatalogsCreateHotelItem.OperationEnum;
    'attributes': CatalogsHotelAttributes;

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
            "type": "CatalogsCreateHotelItem.OperationEnum"
        },
        {
            "name": "attributes",
            "baseName": "attributes",
            "type": "CatalogsHotelAttributes"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsCreateHotelItem.attributeTypeMap;
    }
}

export namespace CatalogsCreateHotelItem {
    export enum OperationEnum {
        Create = <any> 'CREATE'
    }
}
