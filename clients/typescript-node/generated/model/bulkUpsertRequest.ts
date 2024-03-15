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
import { BulkUpsertRequestCreate } from './bulkUpsertRequestCreate';
import { BulkUpsertRequestUpdate } from './bulkUpsertRequestUpdate';

/**
* Two set of objects to be managed asyncronusly by bulk. One for creations, one for modifications.
*/
export class BulkUpsertRequest {
    'create'?: BulkUpsertRequestCreate;
    'update'?: BulkUpsertRequestUpdate;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "create",
            "baseName": "create",
            "type": "BulkUpsertRequestCreate"
        },
        {
            "name": "update",
            "baseName": "update",
            "type": "BulkUpsertRequestUpdate"
        }    ];

    static getAttributeTypeMap() {
        return BulkUpsertRequest.attributeTypeMap;
    }
}

