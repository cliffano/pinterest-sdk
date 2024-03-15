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
 * @interface BoardOwner
 */
export interface BoardOwner {
    /**
     * 
     * @type {string}
     * @memberof BoardOwner
     */
    readonly username?: string;
}

/**
 * Check if a given object implements the BoardOwner interface.
 */
export function instanceOfBoardOwner(value: object): boolean {
    return true;
}

export function BoardOwnerFromJSON(json: any): BoardOwner {
    return BoardOwnerFromJSONTyped(json, false);
}

export function BoardOwnerFromJSONTyped(json: any, ignoreDiscriminator: boolean): BoardOwner {
    if (json == null) {
        return json;
    }
    return {
        
        'username': json['username'] == null ? undefined : json['username'],
    };
}

export function BoardOwnerToJSON(value?: BoardOwner | null): any {
    if (value == null) {
        return value;
    }
    return {
        
    };
}

