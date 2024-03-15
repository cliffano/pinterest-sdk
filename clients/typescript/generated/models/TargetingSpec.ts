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

import { TargetingSpecSHOPPINGRETARGETING } from '../models/TargetingSpecSHOPPINGRETARGETING';
import { HttpFile } from '../http/http';

/**
* Ad group targeting specification defining the ad group target audience. For example, {\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}
*/
export class TargetingSpec {
    /**
    * Age ranges. If the AGE_BUCKET field is missing, the default behavior in terms of ad delivery is that **All age buckets** will be targeted.
    */
    'AGE_BUCKET'?: Array<TargetingSpecAGEBUCKETEnum> | null;
    /**
    * Allowed devices. If the APPTYPE field is missing, the default behavior in terms of ad delivery is that **All devices/apptypes** will be targeted.
    */
    'APPTYPE'?: Array<TargetingSpecAPPTYPEEnum> | null;
    /**
    * Excluded customer list IDs. Used to drive new customer acquisition goals. For example: [\"2542620905475\"]. Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_EXCLUDE field is missing, the default behavior in terms of ad delivery is that **No users will be excluded**.
    */
    'AUDIENCE_EXCLUDE'?: Array<string> | null;
    /**
    * Targeted customer list IDs. For example: [\"2542620905473\"]. Audience lists need to have at least 100 people with Pinterest accounts in them Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_INCLUDE field is missing, the default behavior in terms of ad delivery is that **All users will be included**.
    */
    'AUDIENCE_INCLUDE'?: Array<string> | null;
    /**
    * Targeted genders. Values: [\"unknown\",\"male\",\"female\"]. If the GENDER field is missing, the default behavior in terms of ad delivery is that **All genders will be targeted**.
    */
    'GENDER'?: Array<TargetingSpecGENDEREnum> | null;
    /**
    * Location region codes, e.g., \"BE-VOV\" (East Flanders, Belgium) For complete list, <a href=\"https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\" target=\"_blank\">click here</a> or postal codes, e.g., \"US-94107\". Use either region codes or postal codes but not both. If the GEO field is missing, the default behavior in terms of ad delivery is that **No geos will be selected**.
    */
    'GEO'?: Array<string> | null;
    /**
    * Array of interest object IDs. If the INTEREST field is missing, the default behavior in terms of ad delivery is that **All interests will be targeted**.
    */
    'INTEREST'?: Array<string>;
    /**
    * 24 ISO 639-1 two letter language codes. If the LOCALE field is missing, the default behavior in terms of ad delivery is that **All languages will be target, only english non-sublanguage will be targeted**.
    */
    'LOCALE'?: Array<string> | null;
    /**
    * 22 ISO Alpha 2 two letter country codes or US Nielsen DMA (Designated Market Area) codes (location region codes) (e.g., [\"US\", \"807\"]). For complete list, click here. Location-Country and Location-Metro codes apply. If the LOCATION field is missing, the default behavior in terms of ad delivery is that **Selects default country if not specified (US) and all regions within that country**.
    */
    'LOCATION'?: Array<string> | null;
    /**
    * Array of object: lookback_window [Integer]: Number of days ago to start lookback timeframe for dynamic retargeting tag_types [Array of integer]: Event types to target for dynamic retargeting exclusion_window [Integer]: Number of days ago to stop lookback timeframe for dynamic retargeting
    */
    'SHOPPING_RETARGETING'?: Array<TargetingSpecSHOPPINGRETARGETING> | null;
    /**
    * 
    */
    'TARGETING_STRATEGY'?: Array<TargetingSpecTARGETINGSTRATEGYEnum> | null;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "AGE_BUCKET",
            "baseName": "AGE_BUCKET",
            "type": "Array<TargetingSpecAGEBUCKETEnum>",
            "format": ""
        },
        {
            "name": "APPTYPE",
            "baseName": "APPTYPE",
            "type": "Array<TargetingSpecAPPTYPEEnum>",
            "format": ""
        },
        {
            "name": "AUDIENCE_EXCLUDE",
            "baseName": "AUDIENCE_EXCLUDE",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "AUDIENCE_INCLUDE",
            "baseName": "AUDIENCE_INCLUDE&#39;",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "GENDER",
            "baseName": "GENDER",
            "type": "Array<TargetingSpecGENDEREnum>",
            "format": ""
        },
        {
            "name": "GEO",
            "baseName": "GEO",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "INTEREST",
            "baseName": "INTEREST",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "LOCALE",
            "baseName": "LOCALE",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "LOCATION",
            "baseName": "LOCATION",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "SHOPPING_RETARGETING",
            "baseName": "SHOPPING_RETARGETING",
            "type": "Array<TargetingSpecSHOPPINGRETARGETING>",
            "format": ""
        },
        {
            "name": "TARGETING_STRATEGY",
            "baseName": "TARGETING_STRATEGY",
            "type": "Array<TargetingSpecTARGETINGSTRATEGYEnum>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return TargetingSpec.attributeTypeMap;
    }

    public constructor() {
    }
}


export enum TargetingSpecAGEBUCKETEnum {
    _1824 = '18-24',
    _21 = '21+',
    _2534 = '25-34',
    _3544 = '35-44',
    _4549 = '45-49',
    _5054 = '50-54',
    _5564 = '55-64',
    _65 = '65+'
}
export enum TargetingSpecAPPTYPEEnum {
    AndroidMobile = 'android_mobile',
    AndroidTablet = 'android_tablet',
    Ipad = 'ipad',
    Iphone = 'iphone',
    Web = 'web',
    WebMobile = 'web_mobile'
}
export enum TargetingSpecGENDEREnum {
    Unknown = 'unknown',
    Male = 'male',
    Female = 'female'
}
export enum TargetingSpecTARGETINGSTRATEGYEnum {
    ChooseYourOwn = 'CHOOSE_YOUR_OWN',
    FindNewCustomers = 'FIND_NEW_CUSTOMERS',
    ReconnectWithUsers = 'RECONNECT_WITH_USERS'
}

