/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';

/**
* The counts can be null early in the process.
*/
export class CatalogsFeedProductCounts {
    /**
    * The number of products in the feed file
    */
    'original'?: number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "original",
            "baseName": "original",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsFeedProductCounts.attributeTypeMap;
    }
}

