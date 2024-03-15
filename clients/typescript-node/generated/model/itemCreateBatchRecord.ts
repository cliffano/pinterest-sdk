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
import { ItemAttributes } from './itemAttributes';

/**
* Object describing an item batch record to create items
*/
export class ItemCreateBatchRecord {
    /**
    * The catalog item id in the merchant namespace
    */
    'itemId'?: string;
    'attributes'?: ItemAttributes;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "itemId",
            "baseName": "item_id",
            "type": "string"
        },
        {
            "name": "attributes",
            "baseName": "attributes",
            "type": "ItemAttributes"
        }    ];

    static getAttributeTypeMap() {
        return ItemCreateBatchRecord.attributeTypeMap;
    }
}

