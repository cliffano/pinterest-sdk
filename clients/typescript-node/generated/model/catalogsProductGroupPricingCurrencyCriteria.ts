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

export class CatalogsProductGroupPricingCurrencyCriteria {
    'operator': CatalogsProductGroupPricingCurrencyCriteria.OperatorEnum;
    'value': number;
    'currency': NonNullableCatalogsCurrency;
    'negated'?: boolean = false;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "operator",
            "baseName": "operator",
            "type": "CatalogsProductGroupPricingCurrencyCriteria.OperatorEnum"
        },
        {
            "name": "value",
            "baseName": "value",
            "type": "number"
        },
        {
            "name": "currency",
            "baseName": "currency",
            "type": "NonNullableCatalogsCurrency"
        },
        {
            "name": "negated",
            "baseName": "negated",
            "type": "boolean"
        }    ];

    static getAttributeTypeMap() {
        return CatalogsProductGroupPricingCurrencyCriteria.attributeTypeMap;
    }
}

export namespace CatalogsProductGroupPricingCurrencyCriteria {
    export enum OperatorEnum {
        GreaterThan = <any> 'GREATER_THAN',
        GreaterThanOrEquals = <any> 'GREATER_THAN_OR_EQUALS',
        LessThan = <any> 'LESS_THAN',
        LessThanOrEquals = <any> 'LESS_THAN_OR_EQUALS'
    }
}