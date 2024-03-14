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
import type { TargetingSpecSHOPPINGRETARGETING1Inner } from './TargetingSpecSHOPPINGRETARGETING1Inner';
import {
    TargetingSpecSHOPPINGRETARGETING1InnerFromJSON,
    TargetingSpecSHOPPINGRETARGETING1InnerFromJSONTyped,
    TargetingSpecSHOPPINGRETARGETING1InnerToJSON,
} from './TargetingSpecSHOPPINGRETARGETING1Inner';

/**
 * Ad group targeting specification defining the ad group target audience. For example, {"APPTYPE":["iphone"], "GENDER":["male"], "LOCALE":["en-US"], "LOCATION":["501"], "AGE_BUCKET":["25-34"]}
 * @export
 * @interface TargetingSpec
 */
export interface TargetingSpec {
    /**
     * Age ranges
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    aGEBUCKET?: Array<TargetingSpecAGEBUCKETEnum>;
    /**
     * Allowed devices
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    aPPTYPE?: Array<TargetingSpecAPPTYPEEnum>;
    /**
     * Excluded customer list IDs. Used to drive new customer acquisition goals. For example: ["2542620905475"]. Audience lists need to have at least 100 people with Pinterest accounts in them.
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    aUDIENCEEXCLUDE?: Array<string>;
    /**
     * Targeted customer list IDs. For example: ["2542620905473"]. Audience lists need to have at least 100 people with Pinterest accounts in them
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    aUDIENCEINCLUDE?: Array<string>;
    /**
     * Targeted genders. Values: ["unknown","male","female"]
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    gENDER?: Array<TargetingSpecGENDEREnum>;
    /**
     * Location region codes, e.g., "BE-VOV" (East Flanders, Belgium) For complete list, <a href="https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx" target="_blank">click here</a> or postal codes, e.g., "US-94107". Use either region codes or postal codes but not both.
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    gEO?: Array<string>;
    /**
     * Array of interest object IDs.
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    iNTEREST?: Array<string>;
    /**
     * 24 ISO 639-1 two letter language codes.
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    lOCALE?: Array<string>;
    /**
     * 22 ISO Alpha 2 two letter country codes or US Nielsen DMA (Designated Market Area) codes (location region codes) (e.g., ["US", "807"]). For complete list, click here. Location-Country and Location-Metro codes apply.
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    lOCATION?: Array<string>;
    /**
     * Array of object: lookback_window	[Integer]: Number of days ago to start lookback timeframe for dynamic retargeting tag_types [Array of integer]: Event types to target for dynamic retargeting exclusion_window [Integer]: Number of days ago to stop lookback timeframe for dynamic retargeting
     * @type {Array<TargetingSpecSHOPPINGRETARGETING1Inner>}
     * @memberof TargetingSpec
     */
    sHOPPINGRETARGETING?: Array<TargetingSpecSHOPPINGRETARGETING1Inner>;
    /**
     * 
     * @type {Array<string>}
     * @memberof TargetingSpec
     */
    tARGETINGSTRATEGY?: Array<TargetingSpecTARGETINGSTRATEGYEnum>;
}


/**
 * @export
 */
export const TargetingSpecAGEBUCKETEnum = {
    _1824: '18-24',
    _21: '21+',
    _2534: '25-34',
    _3544: '35-44',
    _4549: '45-49',
    _5054: '50-54',
    _5564: '55-64',
    _65: '65+'
} as const;
export type TargetingSpecAGEBUCKETEnum = typeof TargetingSpecAGEBUCKETEnum[keyof typeof TargetingSpecAGEBUCKETEnum];

/**
 * @export
 */
export const TargetingSpecAPPTYPEEnum = {
    AndroidMobile: 'android_mobile',
    AndroidTablet: 'android_tablet',
    Ipad: 'ipad',
    Iphone: 'iphone',
    Web: 'web',
    WebMobile: 'web_mobile'
} as const;
export type TargetingSpecAPPTYPEEnum = typeof TargetingSpecAPPTYPEEnum[keyof typeof TargetingSpecAPPTYPEEnum];

/**
 * @export
 */
export const TargetingSpecGENDEREnum = {
    Unknown: 'unknown',
    Male: 'male',
    Female: 'female'
} as const;
export type TargetingSpecGENDEREnum = typeof TargetingSpecGENDEREnum[keyof typeof TargetingSpecGENDEREnum];

/**
 * @export
 */
export const TargetingSpecTARGETINGSTRATEGYEnum = {
    ChooseYourOwn: 'CHOOSE_YOUR_OWN',
    FindNewCustomers: 'FIND_NEW_CUSTOMERS',
    ReconnectWithUsers: 'RECONNECT_WITH_USERS'
} as const;
export type TargetingSpecTARGETINGSTRATEGYEnum = typeof TargetingSpecTARGETINGSTRATEGYEnum[keyof typeof TargetingSpecTARGETINGSTRATEGYEnum];


/**
 * Check if a given object implements the TargetingSpec interface.
 */
export function instanceOfTargetingSpec(value: object): boolean {
    return true;
}

export function TargetingSpecFromJSON(json: any): TargetingSpec {
    return TargetingSpecFromJSONTyped(json, false);
}

export function TargetingSpecFromJSONTyped(json: any, ignoreDiscriminator: boolean): TargetingSpec {
    if (json == null) {
        return json;
    }
    return {
        
        'aGEBUCKET': json['AGE_BUCKET'] == null ? undefined : json['AGE_BUCKET'],
        'aPPTYPE': json['APPTYPE'] == null ? undefined : json['APPTYPE'],
        'aUDIENCEEXCLUDE': json['AUDIENCE_EXCLUDE'] == null ? undefined : json['AUDIENCE_EXCLUDE'],
        'aUDIENCEINCLUDE': json['AUDIENCE_INCLUDE&#39;'] == null ? undefined : json['AUDIENCE_INCLUDE&#39;'],
        'gENDER': json['GENDER'] == null ? undefined : json['GENDER'],
        'gEO': json['GEO'] == null ? undefined : json['GEO'],
        'iNTEREST': json['INTEREST'] == null ? undefined : json['INTEREST'],
        'lOCALE': json['LOCALE'] == null ? undefined : json['LOCALE'],
        'lOCATION': json['LOCATION'] == null ? undefined : json['LOCATION'],
        'sHOPPINGRETARGETING': json['SHOPPING_RETARGETING'] == null ? undefined : ((json['SHOPPING_RETARGETING'] as Array<any>).map(TargetingSpecSHOPPINGRETARGETING1InnerFromJSON)),
        'tARGETINGSTRATEGY': json['TARGETING_STRATEGY'] == null ? undefined : json['TARGETING_STRATEGY'],
    };
}

export function TargetingSpecToJSON(value?: TargetingSpec | null): any {
    if (value == null) {
        return value;
    }
    return {
        
        'AGE_BUCKET': value['aGEBUCKET'],
        'APPTYPE': value['aPPTYPE'],
        'AUDIENCE_EXCLUDE': value['aUDIENCEEXCLUDE'],
        'AUDIENCE_INCLUDE&#39;': value['aUDIENCEINCLUDE'],
        'GENDER': value['gENDER'],
        'GEO': value['gEO'],
        'INTEREST': value['iNTEREST'],
        'LOCALE': value['lOCALE'],
        'LOCATION': value['lOCATION'],
        'SHOPPING_RETARGETING': value['sHOPPINGRETARGETING'] == null ? undefined : ((value['sHOPPINGRETARGETING'] as Array<any>).map(TargetingSpecSHOPPINGRETARGETING1InnerToJSON)),
        'TARGETING_STRATEGY': value['tARGETINGSTRATEGY'],
    };
}

