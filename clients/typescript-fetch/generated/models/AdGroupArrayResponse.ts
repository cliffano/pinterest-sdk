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
import type { AdGroupArrayResponseElement } from './AdGroupArrayResponseElement';
import {
    AdGroupArrayResponseElementFromJSON,
    AdGroupArrayResponseElementFromJSONTyped,
    AdGroupArrayResponseElementToJSON,
} from './AdGroupArrayResponseElement';

/**
 * 
 * @export
 * @interface AdGroupArrayResponse
 */
export interface AdGroupArrayResponse {
    /**
     * 
     * @type {Array<AdGroupArrayResponseElement>}
     * @memberof AdGroupArrayResponse
     */
    items?: Array<AdGroupArrayResponseElement>;
}

/**
 * Check if a given object implements the AdGroupArrayResponse interface.
 */
export function instanceOfAdGroupArrayResponse(value: object): boolean {
    return true;
}

export function AdGroupArrayResponseFromJSON(json: any): AdGroupArrayResponse {
    return AdGroupArrayResponseFromJSONTyped(json, false);
}

export function AdGroupArrayResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdGroupArrayResponse {
    if (json == null) {
        return json;
    }
    return {
        
        'items': json['items'] == null ? undefined : ((json['items'] as Array<any>).map(AdGroupArrayResponseElementFromJSON)),
    };
}

export function AdGroupArrayResponseToJSON(value?: AdGroupArrayResponse | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'items': value['items'] == null ? undefined : ((value['items'] as Array<any>).map(AdGroupArrayResponseElementToJSON)),
    };
}

