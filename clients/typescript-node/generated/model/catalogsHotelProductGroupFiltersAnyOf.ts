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
import { CatalogsHotelProductGroupFilterKeys } from './catalogsHotelProductGroupFilterKeys';

export class CatalogsHotelProductGroupFiltersAnyOf {
    'anyOf': Array<CatalogsHotelProductGroupFilterKeys>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "anyOf",
            "baseName": "any_of",
            "type": "Array<CatalogsHotelProductGroupFilterKeys>"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsHotelProductGroupFiltersAnyOf.attributeTypeMap;
    }
}

