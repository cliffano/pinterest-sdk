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
import { NonNullableCatalogsCurrency } from './nonNullableCatalogsCurrency';


export interface CatalogsProductGroupPricingCurrencyCriteria { 
    operator: CatalogsProductGroupPricingCurrencyCriteria.OperatorEnum;
    value: number;
    currency: NonNullableCatalogsCurrency;
    negated?: boolean;
}
export namespace CatalogsProductGroupPricingCurrencyCriteria {
    export type OperatorEnum = 'GREATER_THAN' | 'GREATER_THAN_OR_EQUALS' | 'LESS_THAN' | 'LESS_THAN_OR_EQUALS';
    export const OperatorEnum = {
        GreaterThan: 'GREATER_THAN' as OperatorEnum,
        GreaterThanOrEquals: 'GREATER_THAN_OR_EQUALS' as OperatorEnum,
        LessThan: 'LESS_THAN' as OperatorEnum,
        LessThanOrEquals: 'LESS_THAN_OR_EQUALS' as OperatorEnum
    };
}


