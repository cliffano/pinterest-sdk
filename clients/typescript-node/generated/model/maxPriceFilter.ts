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
import { CatalogsProductGroupPricingCriteria } from './catalogsProductGroupPricingCriteria';

export class MaxPriceFilter {
    'mAXPRICE': CatalogsProductGroupPricingCriteria;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "mAXPRICE",
            "baseName": "MAX_PRICE",
            "type": "CatalogsProductGroupPricingCriteria"
        }    ];

    static getAttributeTypeMap() {
        return MaxPriceFilter.attributeTypeMap;
    }
}

