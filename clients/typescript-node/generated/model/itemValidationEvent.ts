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

/**
* Object describing an item validation event
*/
export class ItemValidationEvent {
    /**
    * The attribute that the item validation event references
    */
    'attribute'?: string;
    /**
    * The event code that the item validation event references
    */
    'code'?: number;
    /**
    * Title message describing the item validation event
    */
    'message'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "attribute",
            "baseName": "attribute",
            "type": "string"
        },
        {
            "name": "code",
            "baseName": "code",
            "type": "number"
        },
        {
            "name": "message",
            "baseName": "message",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return ItemValidationEvent.attributeTypeMap;
    }
}

