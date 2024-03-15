/**
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * OpenAPI spec version: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { HttpFile } from '../http/http';

export class Account {
    /**
    * Type of account
    */
    'accountType'?: AccountAccountTypeEnum;
    /**
    * User account ID.
    */
    'id'?: string;
    'profileImage'?: string;
    'websiteUrl'?: string;
    'username'?: string;
    /**
    * Profile about description.
    */
    'about'?: string;
    'businessName'?: string | null;
    /**
    * User account board count.<br/>**Note**: Board count on user account level may differ from counts found elsewhere due to attribution of collaborative Boards.
    */
    'boardCount'?: number | null;
    /**
    * User account pin count. This includes both created and saved pins.
    */
    'pinCount'?: number | null;
    /**
    * User account follower count.
    */
    'followerCount'?: number | null;
    /**
    * User account following count.
    */
    'followingCount'?: number | null;
    /**
    * User account monthly views.
    */
    'monthlyViews'?: number | null;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "accountType",
            "baseName": "account_type",
            "type": "AccountAccountTypeEnum",
            "format": ""
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string",
            "format": ""
        },
        {
            "name": "profileImage",
            "baseName": "profile_image",
            "type": "string",
            "format": ""
        },
        {
            "name": "websiteUrl",
            "baseName": "website_url",
            "type": "string",
            "format": ""
        },
        {
            "name": "username",
            "baseName": "username",
            "type": "string",
            "format": ""
        },
        {
            "name": "about",
            "baseName": "about",
            "type": "string",
            "format": ""
        },
        {
            "name": "businessName",
            "baseName": "business_name",
            "type": "string",
            "format": ""
        },
        {
            "name": "boardCount",
            "baseName": "board_count",
            "type": "number",
            "format": ""
        },
        {
            "name": "pinCount",
            "baseName": "pin_count",
            "type": "number",
            "format": ""
        },
        {
            "name": "followerCount",
            "baseName": "follower_count",
            "type": "number",
            "format": ""
        },
        {
            "name": "followingCount",
            "baseName": "following_count",
            "type": "number",
            "format": ""
        },
        {
            "name": "monthlyViews",
            "baseName": "monthly_views",
            "type": "number",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return Account.attributeTypeMap;
    }

    public constructor() {
    }
}


export enum AccountAccountTypeEnum {
    Pinner = 'PINNER',
    Business = 'BUSINESS'
}

