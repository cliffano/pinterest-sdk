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
* Product counts for a CatalogsProductGroup
*/
export class CatalogsProductGroupProductCounts {
    'inStock': number;
    'outOfStock': number;
    'preorder': number;
    'total': number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "inStock",
            "baseName": "in_stock",
            "type": "number"
        },
        {
            "name": "outOfStock",
            "baseName": "out_of_stock",
            "type": "number"
        },
        {
            "name": "preorder",
            "baseName": "preorder",
            "type": "number"
        },
        {
            "name": "total",
            "baseName": "total",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsProductGroupProductCounts.attributeTypeMap;
    }
}

