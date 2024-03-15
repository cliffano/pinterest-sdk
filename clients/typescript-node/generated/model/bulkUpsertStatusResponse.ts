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
import { BulkUpsertStatus } from './bulkUpsertStatus';

/**
* ID of the bulk request.
*/
export class BulkUpsertStatusResponse {
    'status'?: BulkUpsertStatus;
    'resultUrl'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "status",
            "baseName": "status",
            "type": "BulkUpsertStatus"
        },
        {
            "name": "resultUrl",
            "baseName": "result_url",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BulkUpsertStatusResponse.attributeTypeMap;
    }
}

export namespace BulkUpsertStatusResponse {
}