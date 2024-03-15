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
import { BoardSection } from './boardSection';

export class BoardSectionsList200Response {
    /**
    * Board sections
    */
    'items': Array<BoardSection>;
    'bookmark'?: string | null;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "items",
            "baseName": "items",
            "type": "Array<BoardSection>"
        },
        {
            "name": "bookmark",
            "baseName": "bookmark",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return BoardSectionsList200Response.attributeTypeMap;
    }
}
