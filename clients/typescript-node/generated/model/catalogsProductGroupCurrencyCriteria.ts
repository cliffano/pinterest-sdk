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
import { NonNullableCatalogsCurrency } from './nonNullableCatalogsCurrency';

/**
* A currency filter. This filter cannot be negated
*/
export class CatalogsProductGroupCurrencyCriteria {
    'values': NonNullableCatalogsCurrency;
    'negated'?: boolean = false;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "values",
            "baseName": "values",
            "type": "NonNullableCatalogsCurrency"
        },
        {
            "name": "negated",
            "baseName": "negated",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsProductGroupCurrencyCriteria.attributeTypeMap;
    }
}

export namespace CatalogsProductGroupCurrencyCriteria {
}