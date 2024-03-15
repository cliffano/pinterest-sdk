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

import { HttpFile } from '../http/http';

export class KeywordUpdate {
    /**
    * Keyword ID.
    */
    'id': string;
    /**
    * Is keyword archived?
    */
    'archived'?: boolean;
    /**
    * Keyword custom bid in microcurrency - null if inherited from parent ad group.
    */
    'bid'?: number | null;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string",
            "format": ""
        },
        {
            "name": "archived",
            "baseName": "archived",
            "type": "boolean",
            "format": ""
        },
        {
            "name": "bid",
            "baseName": "bid",
            "type": "number",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return KeywordUpdate.attributeTypeMap;
    }

    public constructor() {
    }
}

