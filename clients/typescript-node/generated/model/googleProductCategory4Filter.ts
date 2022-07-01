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
import { CatalogsProductGroupMultipleStringListCriteria } from './catalogsProductGroupMultipleStringListCriteria';

export class GoogleProductCategory4Filter {
    'gOOGLEPRODUCTCATEGORY4': CatalogsProductGroupMultipleStringListCriteria;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "gOOGLEPRODUCTCATEGORY4",
            "baseName": "GOOGLE_PRODUCT_CATEGORY_4",
            "type": "CatalogsProductGroupMultipleStringListCriteria"
        }    ];

    static getAttributeTypeMap() {
        return GoogleProductCategory4Filter.attributeTypeMap;
    }
}

