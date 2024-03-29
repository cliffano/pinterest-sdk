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
import type { AdGroupResponse } from './AdGroupResponse';
import {
    AdGroupResponseFromJSON,
    AdGroupResponseFromJSONTyped,
    AdGroupResponseToJSON,
} from './AdGroupResponse';
import type { Exception } from './Exception';
import {
    ExceptionFromJSON,
    ExceptionFromJSONTyped,
    ExceptionToJSON,
} from './Exception';

/**
 * 
 * @export
 * @interface AdGroupArrayResponseElement
 */
export interface AdGroupArrayResponseElement {
    /**
     * 
     * @type {AdGroupResponse}
     * @memberof AdGroupArrayResponseElement
     */
    data?: AdGroupResponse;
    /**
     * 
     * @type {Array<Exception>}
     * @memberof AdGroupArrayResponseElement
     */
    exceptions?: Array<Exception>;
}

/**
 * Check if a given object implements the AdGroupArrayResponseElement interface.
 */
export function instanceOfAdGroupArrayResponseElement(value: object): boolean {
    return true;
}

export function AdGroupArrayResponseElementFromJSON(json: any): AdGroupArrayResponseElement {
    return AdGroupArrayResponseElementFromJSONTyped(json, false);
}

export function AdGroupArrayResponseElementFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdGroupArrayResponseElement {
    if (json == null) {
        return json;
    }
    return {
        
        'data': json['data'] == null ? undefined : AdGroupResponseFromJSON(json['data']),
        'exceptions': json['exceptions'] == null ? undefined : ((json['exceptions'] as Array<any>).map(ExceptionFromJSON)),
    };
}

export function AdGroupArrayResponseElementToJSON(value?: AdGroupArrayResponseElement | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'data': AdGroupResponseToJSON(value['data']),
        'exceptions': value['exceptions'] == null ? undefined : ((value['exceptions'] as Array<any>).map(ExceptionToJSON)),
    };
}

