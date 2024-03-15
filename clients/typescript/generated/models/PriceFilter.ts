/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { CatalogsProductGroupPricingCurrencyCriteria } from '../models/CatalogsProductGroupPricingCurrencyCriteria';
import { HttpFile } from '../http/http';

export class PriceFilter {
    'PRICE': CatalogsProductGroupPricingCurrencyCriteria;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "PRICE",
            "baseName": "PRICE",
            "type": "CatalogsProductGroupPricingCurrencyCriteria",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return PriceFilter.attributeTypeMap;
    }

    public constructor() {
    }
}

