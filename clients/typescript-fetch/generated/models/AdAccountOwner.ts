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
 * @interface AdAccountOwner
 */
export interface AdAccountOwner {
    /**
     * Public username for the user account
     * @type {string}
     * @memberof AdAccountOwner
     */
    username?: string;
}

export function AdAccountOwnerFromJSON(json: any): AdAccountOwner {
    return AdAccountOwnerFromJSONTyped(json, false);
}

export function AdAccountOwnerFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdAccountOwner {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'username': !exists(json, 'username') ? undefined : json['username'],
    };
}

export function AdAccountOwnerToJSON(value?: AdAccountOwner | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'username': value.username,
    };
}

