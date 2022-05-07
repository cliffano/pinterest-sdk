/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface CatalogsProductGroupPricingCriteria
 */
export interface CatalogsProductGroupPricingCriteria {
    /**
     * 
     * @type {boolean}
     * @memberof CatalogsProductGroupPricingCriteria
     */
    inclusion: boolean;
    /**
     * 
     * @type {number}
     * @memberof CatalogsProductGroupPricingCriteria
     */
    values: number;
    /**
     * 
     * @type {boolean}
     * @memberof CatalogsProductGroupPricingCriteria
     */
    negated: boolean;
}

export function CatalogsProductGroupPricingCriteriaFromJSON(json: any): CatalogsProductGroupPricingCriteria {
    return CatalogsProductGroupPricingCriteriaFromJSONTyped(json, false);
}

export function CatalogsProductGroupPricingCriteriaFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsProductGroupPricingCriteria {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'inclusion': json['inclusion'],
        'values': json['values'],
        'negated': json['negated'],
    };
}

export function CatalogsProductGroupPricingCriteriaToJSON(value?: CatalogsProductGroupPricingCriteria | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'inclusion': value.inclusion,
        'values': value.values,
        'negated': value.negated,
    };
}

