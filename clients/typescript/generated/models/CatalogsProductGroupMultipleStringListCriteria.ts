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

export class CatalogsProductGroupMultipleStringListCriteria {
    'values': Array<Array<string>>;
    'negated'?: boolean;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "values",
            "baseName": "values",
            "type": "Array<Array<string>>",
            "format": ""
        },
        {
            "name": "negated",
            "baseName": "negated",
            "type": "boolean",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return CatalogsProductGroupMultipleStringListCriteria.attributeTypeMap;
    }

    public constructor() {
    }
}

