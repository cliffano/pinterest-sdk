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

import { CatalogsHotelItemsFilter } from '../models/CatalogsHotelItemsFilter';
import { CatalogsRetailItemsFilter } from '../models/CatalogsRetailItemsFilter';
import { CatalogsType } from '../models/CatalogsType';
import { HttpFile } from '../http/http';

export class CatalogsItemsFilters {
    'catalogType': CatalogsType;
    'itemIds': Array<string>;
    /**
    * Catalog id pertaining to the hotel item. If not provided, default to oldest hotel catalog
    */
    'catalogId'?: string;
    'hotelIds': Array<string>;

    static readonly discriminator: string | undefined = "catalogType";

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "catalogType",
            "baseName": "catalog_type",
            "type": "CatalogsType",
            "format": ""
        },
        {
            "name": "itemIds",
            "baseName": "item_ids",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "catalogId",
            "baseName": "catalog_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "hotelIds",
            "baseName": "hotel_ids",
            "type": "Array<string>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return CatalogsItemsFilters.attributeTypeMap;
    }

    public constructor() {
        this.catalogType = "CatalogsItemsFilters";
    }
}



