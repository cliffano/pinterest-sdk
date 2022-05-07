/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from './models';
import { CatalogsProductGroupFilterKeys } from './catalogsProductGroupFilterKeys';

export class CatalogsProductGroupFiltersAnyOf {
    'anyOf'?: Array<CatalogsProductGroupFilterKeys>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "anyOf",
            "baseName": "any_of",
            "type": "Array<CatalogsProductGroupFilterKeys>"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsProductGroupFiltersAnyOf.attributeTypeMap;
    }
}

