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

import { BatchOperation } from '../models/BatchOperation';
import { Country } from '../models/Country';
import { ItemCreateBatchRecord } from '../models/ItemCreateBatchRecord';
import { Language } from '../models/Language';
import { HttpFile } from '../http/http';

/**
* Request object to create catalogs items
*/
export class CatalogsItemsCreateBatchRequest {
    'country': Country;
    'language': Language;
    'operation': BatchOperation;
    /**
    * Array with catalogs items
    */
    'items': Array<ItemCreateBatchRecord>;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "country",
            "baseName": "country",
            "type": "Country",
            "format": ""
        },
        {
            "name": "language",
            "baseName": "language",
            "type": "Language",
            "format": ""
        },
        {
            "name": "operation",
            "baseName": "operation",
            "type": "BatchOperation",
            "format": ""
        },
        {
            "name": "items",
            "baseName": "items",
            "type": "Array<ItemCreateBatchRecord>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return CatalogsItemsCreateBatchRequest.attributeTypeMap;
    }

    public constructor() {
    }
}



