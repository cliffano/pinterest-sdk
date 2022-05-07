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
import { CatalogsProductGroupCurrencyCriteria } from './catalogsProductGroupCurrencyCriteria';

export class ItemIdFilter {
    'iTEMID': CatalogsProductGroupCurrencyCriteria;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "iTEMID",
            "baseName": "ITEM_ID",
            "type": "CatalogsProductGroupCurrencyCriteria"
        }    ];

    static getAttributeTypeMap() {
        return ItemIdFilter.attributeTypeMap;
    }
}

