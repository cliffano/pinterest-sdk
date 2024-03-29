/* tslint:disable */
/* eslint-disable */
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

import { mapValues } from '../runtime';
import type { NullableCatalogsItemFieldType } from './NullableCatalogsItemFieldType';
import {
    NullableCatalogsItemFieldTypeFromJSON,
    NullableCatalogsItemFieldTypeFromJSONTyped,
    NullableCatalogsItemFieldTypeToJSON,
} from './NullableCatalogsItemFieldType';

/**
 * 
 * @export
 * @interface CatalogsItemValidationDetails
 */
export interface CatalogsItemValidationDetails {
    /**
     * 
     * @type {NullableCatalogsItemFieldType}
     * @memberof CatalogsItemValidationDetails
     */
    attributeName: NullableCatalogsItemFieldType | null;
    /**
     * Provided value that caused the validation issue.
     * @type {string}
     * @memberof CatalogsItemValidationDetails
     */
    providedValue: string | null;
}

/**
 * Check if a given object implements the CatalogsItemValidationDetails interface.
 */
export function instanceOfCatalogsItemValidationDetails(value: object): boolean {
    if (!('attributeName' in value)) return false;
    if (!('providedValue' in value)) return false;
    return true;
}

export function CatalogsItemValidationDetailsFromJSON(json: any): CatalogsItemValidationDetails {
    return CatalogsItemValidationDetailsFromJSONTyped(json, false);
}

export function CatalogsItemValidationDetailsFromJSONTyped(json: any, ignoreDiscriminator: boolean): CatalogsItemValidationDetails {
    if (json == null) {
        return json;
    }
    return {
        
        'attributeName': NullableCatalogsItemFieldTypeFromJSON(json['attribute_name']),
        'providedValue': json['provided_value'],
    };
}

export function CatalogsItemValidationDetailsToJSON(value?: CatalogsItemValidationDetails | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'attribute_name': NullableCatalogsItemFieldTypeToJSON(value['attributeName']),
        'provided_value': value['providedValue'],
    };
}

