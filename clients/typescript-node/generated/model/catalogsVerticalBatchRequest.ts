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
import { CatalogsHotelBatchItem } from './catalogsHotelBatchItem';
import { CatalogsHotelBatchRequest } from './catalogsHotelBatchRequest';
import { CatalogsRetailBatchRequest } from './catalogsRetailBatchRequest';
import { CatalogsType } from './catalogsType';
import { Country } from './country';
import { Language } from './language';

/**
* A request object that can have multiple operations on a single batch
*/
export class CatalogsVerticalBatchRequest {
    'catalogType': CatalogsType;
    'country': Country;
    'language': Language;
    /**
    * Array with catalogs item operations
    */
    'items': Array<CatalogsHotelBatchItem>;
    /**
    * Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
    */
    'catalogId'?: string;

    static discriminator: string | undefined = "catalogType";

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "catalogType",
            "baseName": "catalog_type",
            "type": "CatalogsType"
        },
        {
            "name": "country",
            "baseName": "country",
            "type": "Country"
        },
        {
            "name": "language",
            "baseName": "language",
            "type": "Language"
        },
        {
            "name": "items",
            "baseName": "items",
            "type": "Array<CatalogsHotelBatchItem>"
        },
        {
            "name": "catalogId",
            "baseName": "catalog_id",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsVerticalBatchRequest.attributeTypeMap;
    }
}

export namespace CatalogsVerticalBatchRequest {
}
