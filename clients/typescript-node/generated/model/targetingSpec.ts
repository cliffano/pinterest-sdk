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

import { RequestFile } from './models';
import { TargetingSpecSHOPPINGRETARGETING } from './targetingSpecSHOPPINGRETARGETING';

/**
* Ad group targeting specification defining the ad group target audience. For example, {\"APPTYPE\":[\"iphone\"], \"GENDER\":[\"male\"], \"LOCALE\":[\"en-US\"], \"LOCATION\":[\"501\"], \"AGE_BUCKET\":[\"25-34\"]}
*/
export class TargetingSpec {
    /**
    * Age ranges. If the AGE_BUCKET field is missing, the default behavior in terms of ad delivery is that **All age buckets** will be targeted.
    */
    'aGEBUCKET'?: Array<TargetingSpec.AGEBUCKETEnum>;
    /**
    * Allowed devices. If the APPTYPE field is missing, the default behavior in terms of ad delivery is that **All devices/apptypes** will be targeted.
    */
    'aPPTYPE'?: Array<TargetingSpec.APPTYPEEnum>;
    /**
    * Excluded customer list IDs. Used to drive new customer acquisition goals. For example: [\"2542620905475\"]. Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_EXCLUDE field is missing, the default behavior in terms of ad delivery is that **No users will be excluded**.
    */
    'aUDIENCEEXCLUDE'?: Array<string> | null;
    /**
    * Targeted customer list IDs. For example: [\"2542620905473\"]. Audience lists need to have at least 100 people with Pinterest accounts in them Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_INCLUDE field is missing, the default behavior in terms of ad delivery is that **All users will be included**.
    */
    'aUDIENCEINCLUDE'?: Array<string> | null;
    /**
    * Targeted genders. Values: [\"unknown\",\"male\",\"female\"]. If the GENDER field is missing, the default behavior in terms of ad delivery is that **All genders will be targeted**.
    */
    'gENDER'?: Array<TargetingSpec.GENDEREnum>;
    /**
    * Location region codes, e.g., \"BE-VOV\" (East Flanders, Belgium) For complete list, <a href=\"https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\" target=\"_blank\">click here</a> or postal codes, e.g., \"US-94107\". Use either region codes or postal codes but not both. If the GEO field is missing, the default behavior in terms of ad delivery is that **No geos will be selected**.
    */
    'gEO'?: Array<string> | null;
    /**
    * Array of interest object IDs. If the INTEREST field is missing, the default behavior in terms of ad delivery is that **All interests will be targeted**.
    */
    'iNTEREST'?: Array<string>;
    /**
    * 24 ISO 639-1 two letter language codes. If the LOCALE field is missing, the default behavior in terms of ad delivery is that **All languages will be target, only english non-sublanguage will be targeted**.
    */
    'lOCALE'?: Array<string> | null;
    /**
    * 22 ISO Alpha 2 two letter country codes or US Nielsen DMA (Designated Market Area) codes (location region codes) (e.g., [\"US\", \"807\"]). For complete list, click here. Location-Country and Location-Metro codes apply. If the LOCATION field is missing, the default behavior in terms of ad delivery is that **Selects default country if not specified (US) and all regions within that country**.
    */
    'lOCATION'?: Array<string> | null;
    /**
    * Array of object: lookback_window [Integer]: Number of days ago to start lookback timeframe for dynamic retargeting tag_types [Array of integer]: Event types to target for dynamic retargeting exclusion_window [Integer]: Number of days ago to stop lookback timeframe for dynamic retargeting
    */
    'sHOPPINGRETARGETING'?: Array<TargetingSpecSHOPPINGRETARGETING> | null;
    /**
    * 
    */
    'tARGETINGSTRATEGY'?: Array<TargetingSpec.TARGETINGSTRATEGYEnum>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "aGEBUCKET",
            "baseName": "AGE_BUCKET",
            "type": "Array<TargetingSpec.AGEBUCKETEnum>"
        },
        {
            "name": "aPPTYPE",
            "baseName": "APPTYPE",
            "type": "Array<TargetingSpec.APPTYPEEnum>"
        },
        {
            "name": "aUDIENCEEXCLUDE",
            "baseName": "AUDIENCE_EXCLUDE",
            "type": "Array<string>"
        },
        {
            "name": "aUDIENCEINCLUDE",
            "baseName": "AUDIENCE_INCLUDE&#39;",
            "type": "Array<string>"
        },
        {
            "name": "gENDER",
            "baseName": "GENDER",
            "type": "Array<TargetingSpec.GENDEREnum>"
        },
        {
            "name": "gEO",
            "baseName": "GEO",
            "type": "Array<string>"
        },
        {
            "name": "iNTEREST",
            "baseName": "INTEREST",
            "type": "Array<string>"
        },
        {
            "name": "lOCALE",
            "baseName": "LOCALE",
            "type": "Array<string>"
        },
        {
            "name": "lOCATION",
            "baseName": "LOCATION",
            "type": "Array<string>"
        },
        {
            "name": "sHOPPINGRETARGETING",
            "baseName": "SHOPPING_RETARGETING",
            "type": "Array<TargetingSpecSHOPPINGRETARGETING>"
        },
        {
            "name": "tARGETINGSTRATEGY",
            "baseName": "TARGETING_STRATEGY",
            "type": "Array<TargetingSpec.TARGETINGSTRATEGYEnum>"
        }    ];

    static getAttributeTypeMap() {
        return TargetingSpec.attributeTypeMap;
    }
}

export namespace TargetingSpec {
    export enum AGEBUCKETEnum {
        _1824 = <any> '18-24',
        _21 = <any> '21+',
        _2534 = <any> '25-34',
        _3544 = <any> '35-44',
        _4549 = <any> '45-49',
        _5054 = <any> '50-54',
        _5564 = <any> '55-64',
        _65 = <any> '65+'
    }
    export enum APPTYPEEnum {
        AndroidMobile = <any> 'android_mobile',
        AndroidTablet = <any> 'android_tablet',
        Ipad = <any> 'ipad',
        Iphone = <any> 'iphone',
        Web = <any> 'web',
        WebMobile = <any> 'web_mobile'
    }
    export enum GENDEREnum {
        Unknown = <any> 'unknown',
        Male = <any> 'male',
        Female = <any> 'female'
    }
    export enum TARGETINGSTRATEGYEnum {
        ChooseYourOwn = <any> 'CHOOSE_YOUR_OWN',
        FindNewCustomers = <any> 'FIND_NEW_CUSTOMERS',
        ReconnectWithUsers = <any> 'RECONNECT_WITH_USERS'
    }
}
