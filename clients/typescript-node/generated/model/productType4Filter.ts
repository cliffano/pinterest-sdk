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
import { CatalogsProductGroupMultipleStringListCriteria } from './catalogsProductGroupMultipleStringListCriteria';

export class ProductType4Filter {
    'pRODUCTTYPE4': CatalogsProductGroupMultipleStringListCriteria;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "pRODUCTTYPE4",
            "baseName": "PRODUCT_TYPE_4",
            "type": "CatalogsProductGroupMultipleStringListCriteria"
        }    ];

    static getAttributeTypeMap() {
        return ProductType4Filter.attributeTypeMap;
    }
}

