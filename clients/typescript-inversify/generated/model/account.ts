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


export interface Account { 
    /**
     * Type of account
     */
    account_type?: Account.AccountTypeEnum;
    profile_image?: string;
    website_url?: string;
    username?: string;
}
export namespace Account {
    export type AccountTypeEnum = 'PINNER' | 'BUSINESS';
    export const AccountTypeEnum = {
        Pinner: 'PINNER' as AccountTypeEnum,
        Business: 'BUSINESS' as AccountTypeEnum
    }
}
