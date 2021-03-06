/* tslint:disable */
/* eslint-disable */
/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { exists, mapValues } from '../runtime';
/**
 * 
 * @export
 * @interface Account
 */
export interface Account {
    /**
     * Type of account
     * @type {string}
     * @memberof Account
     */
    accountType?: AccountAccountTypeEnum;
    /**
     * 
     * @type {string}
     * @memberof Account
     */
    profileImage?: string;
    /**
     * 
     * @type {string}
     * @memberof Account
     */
    websiteUrl?: string;
    /**
     * 
     * @type {string}
     * @memberof Account
     */
    username?: string;
}

/**
* @export
* @enum {string}
*/
export enum AccountAccountTypeEnum {
    Pinner = 'PINNER',
    Business = 'BUSINESS'
}

export function AccountFromJSON(json: any): Account {
    return AccountFromJSONTyped(json, false);
}

export function AccountFromJSONTyped(json: any, ignoreDiscriminator: boolean): Account {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'accountType': !exists(json, 'account_type') ? undefined : json['account_type'],
        'profileImage': !exists(json, 'profile_image') ? undefined : json['profile_image'],
        'websiteUrl': !exists(json, 'website_url') ? undefined : json['website_url'],
        'username': !exists(json, 'username') ? undefined : json['username'],
    };
}

export function AccountToJSON(value?: Account | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'account_type': value.accountType,
        'profile_image': value.profileImage,
        'website_url': value.websiteUrl,
        'username': value.username,
    };
}

