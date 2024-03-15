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

/**
* ID of the bulk request.
*/
export class BulkUpsertResponse {
    'requestId'?: string;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "requestId",
            "baseName": "request_id",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return BulkUpsertResponse.attributeTypeMap;
    }

    public constructor() {
    }
}

