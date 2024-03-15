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

import { Keyword } from '../models/Keyword';
import { HttpFile } from '../http/http';

export class KeywordError {
    'data'?: Keyword;
    'errorMessages'?: Array<string>;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "data",
            "baseName": "data",
            "type": "Keyword",
            "format": ""
        },
        {
            "name": "errorMessages",
            "baseName": "error_messages",
            "type": "Array<string>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return KeywordError.attributeTypeMap;
    }

    public constructor() {
    }
}
