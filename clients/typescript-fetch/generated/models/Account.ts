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
 */
export const AccountAccountTypeEnum = {
    Pinner: 'PINNER',
    Business: 'BUSINESS'
} as const;
export type AccountAccountTypeEnum = typeof AccountAccountTypeEnum[keyof typeof AccountAccountTypeEnum];


/**
 * Check if a given object implements the Account interface.
 */
export function instanceOfAccount(value: object): boolean {
    return true;
}

export function AccountFromJSON(json: any): Account {
    return AccountFromJSONTyped(json, false);
}

export function AccountFromJSONTyped(json: any, ignoreDiscriminator: boolean): Account {
    if (json == null) {
        return json;
    }
    return {
        
        'accountType': json['account_type'] == null ? undefined : json['account_type'],
        'profileImage': json['profile_image'] == null ? undefined : json['profile_image'],
        'websiteUrl': json['website_url'] == null ? undefined : json['website_url'],
        'username': json['username'] == null ? undefined : json['username'],
    };
}

export function AccountToJSON(value?: Account | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'account_type': value['accountType'],
        'profile_image': value['profileImage'],
        'website_url': value['websiteUrl'],
        'username': value['username'],
    };
}
