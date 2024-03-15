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
/**
 * 
 * @export
 * @interface Exception
 */
export interface Exception {
    /**
     * Exception error code.
     * @type {number}
     * @memberof Exception
     */
    code?: number;
    /**
     * Exception message.
     * @type {string}
     * @memberof Exception
     */
    message?: string;
}

/**
 * Check if a given object implements the Exception interface.
 */
export function instanceOfException(value: object): boolean {
    return true;
}

export function ExceptionFromJSON(json: any): Exception {
    return ExceptionFromJSONTyped(json, false);
}

export function ExceptionFromJSONTyped(json: any, ignoreDiscriminator: boolean): Exception {
    if (json == null) {
        return json;
    }
    return {
        
        'code': json['code'] == null ? undefined : json['code'],
        'message': json['message'] == null ? undefined : json['message'],
    };
}

export function ExceptionToJSON(value?: Exception | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'code': value['code'],
        'message': value['message'],
    };
}

