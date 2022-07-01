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

export class CatalogsProductGroupPricingCriteria {
    'inclusion': boolean;
    'values': number;
    'negated': boolean;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "inclusion",
            "baseName": "inclusion",
            "type": "boolean"
        },
        {
            "name": "values",
            "baseName": "values",
            "type": "number"
        },
        {
            "name": "negated",
            "baseName": "negated",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsProductGroupPricingCriteria.attributeTypeMap;
    }
}

