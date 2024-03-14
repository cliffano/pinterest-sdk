/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.6.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { mapValues } from '../runtime';
import type { AdArrayResponseElement } from './AdArrayResponseElement';
import {
    AdArrayResponseElementFromJSON,
    AdArrayResponseElementFromJSONTyped,
    AdArrayResponseElementToJSON,
} from './AdArrayResponseElement';

/**
 * 
 * @export
 * @interface AdArrayResponse
 */
export interface AdArrayResponse {
    /**
     * 
     * @type {Array<AdArrayResponseElement>}
     * @memberof AdArrayResponse
     */
    items?: Array<AdArrayResponseElement>;
}

/**
 * Check if a given object implements the AdArrayResponse interface.
 */
export function instanceOfAdArrayResponse(value: object): boolean {
    return true;
}

export function AdArrayResponseFromJSON(json: any): AdArrayResponse {
    return AdArrayResponseFromJSONTyped(json, false);
}

export function AdArrayResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdArrayResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'items': json['items'] == null ? undefined : ((json['items'] as Array<any>).map(AdArrayResponseElementFromJSON)),
    };
}

export function AdArrayResponseToJSON(value?: AdArrayResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': value['items'] == null ? undefined : ((value['items'] as Array<any>).map(AdArrayResponseElementToJSON)),
    };
}
