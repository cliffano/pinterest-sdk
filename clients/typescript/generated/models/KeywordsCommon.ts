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

import { MatchTypeResponse } from '../models/MatchTypeResponse';
import { HttpFile } from '../http/http';

export class KeywordsCommon {
    /**
    * Keyword custom bid in microcurrency - null if inherited from parent ad group.
    */
    'bid'?: number | null;
    'matchType': MatchTypeResponse | null;
    /**
    * Keyword value (120 chars max).
    */
    'value': string;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "bid",
            "baseName": "bid",
            "type": "number",
            "format": ""
        },
        {
            "name": "matchType",
            "baseName": "match_type",
            "type": "MatchTypeResponse",
            "format": ""
        },
        {
            "name": "value",
            "baseName": "value",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return KeywordsCommon.attributeTypeMap;
    }

    public constructor() {
    }
}



