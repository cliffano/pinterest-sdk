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

import { CatalogsProductGroupMultipleStringCriteria } from '../models/CatalogsProductGroupMultipleStringCriteria';
import { HttpFile } from '../http/http';

export class ItemIdFilter {
    'ITEM_ID': CatalogsProductGroupMultipleStringCriteria;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "ITEM_ID",
            "baseName": "ITEM_ID",
            "type": "CatalogsProductGroupMultipleStringCriteria",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return ItemIdFilter.attributeTypeMap;
    }

    public constructor() {
    }
}

