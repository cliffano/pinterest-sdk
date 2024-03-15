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
 * @interface UserWebsiteVerificationCode
 */
export interface UserWebsiteVerificationCode {
    /**
     * Code to check against the user claiming the website
     * @type {string}
     * @memberof UserWebsiteVerificationCode
     */
    verificationCode?: string;
    /**
     * DNS TXT record to check against for the website to be claimed
     * @type {string}
     * @memberof UserWebsiteVerificationCode
     */
    dnsTxtRecord?: string;
    /**
     * Metatag the verification process searchs for the website to be claimed
     * @type {string}
     * @memberof UserWebsiteVerificationCode
     */
    metatag?: string;
    /**
     * File expected to find on the website being claimed
     * @type {string}
     * @memberof UserWebsiteVerificationCode
     */
    filename?: string;
    /**
     * A full html file to upload to the website in order for it to be claimed
     * @type {string}
     * @memberof UserWebsiteVerificationCode
     */
    fileContent?: string;
}

/**
 * Check if a given object implements the UserWebsiteVerificationCode interface.
 */
export function instanceOfUserWebsiteVerificationCode(value: object): boolean {
    return true;
}

export function UserWebsiteVerificationCodeFromJSON(json: any): UserWebsiteVerificationCode {
    return UserWebsiteVerificationCodeFromJSONTyped(json, false);
}

export function UserWebsiteVerificationCodeFromJSONTyped(json: any, ignoreDiscriminator: boolean): UserWebsiteVerificationCode {
    if (json == null) {
        return json;
    }
    return {
        
        'verificationCode': json['verification_code'] == null ? undefined : json['verification_code'],
        'dnsTxtRecord': json['dns_txt_record'] == null ? undefined : json['dns_txt_record'],
        'metatag': json['metatag'] == null ? undefined : json['metatag'],
        'filename': json['filename'] == null ? undefined : json['filename'],
        'fileContent': json['file_content'] == null ? undefined : json['file_content'],
    };
}

export function UserWebsiteVerificationCodeToJSON(value?: UserWebsiteVerificationCode | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'verification_code': value['verificationCode'],
        'dns_txt_record': value['dnsTxtRecord'],
        'metatag': value['metatag'],
        'filename': value['filename'],
        'file_content': value['fileContent'],
    };
}

