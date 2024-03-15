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
import { CatalogsProductGroupMultipleCountriesCriteria } from './catalogsProductGroupMultipleCountriesCriteria';

export class CountryFilter {
    'cOUNTRY': CatalogsProductGroupMultipleCountriesCriteria;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "cOUNTRY",
            "baseName": "COUNTRY",
            "type": "CatalogsProductGroupMultipleCountriesCriteria"
        }    ];

    static getAttributeTypeMap() {
        return CountryFilter.attributeTypeMap;
    }
}
