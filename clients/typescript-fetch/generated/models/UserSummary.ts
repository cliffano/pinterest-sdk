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
 * @interface UserSummary
 */
export interface UserSummary {
    /**
     * Username
     * @type {string}
     * @memberof UserSummary
     */
    username?: string;
    /**
     * Always "user"
     * @type {string}
     * @memberof UserSummary
     */
    type?: string;
}

/**
 * Check if a given object implements the UserSummary interface.
 */
export function instanceOfUserSummary(value: object): boolean {
    return true;
}

export function UserSummaryFromJSON(json: any): UserSummary {
    return UserSummaryFromJSONTyped(json, false);
}

export function UserSummaryFromJSONTyped(json: any, ignoreDiscriminator: boolean): UserSummary {
    if (json == null) {
        return json;
    }
    return {
        
        'username': json['username'] == null ? undefined : json['username'],
        'type': json['type'] == null ? undefined : json['type'],
    };
}

export function UserSummaryToJSON(value?: UserSummary | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'username': value['username'],
        'type': value['type'],
    };
}

