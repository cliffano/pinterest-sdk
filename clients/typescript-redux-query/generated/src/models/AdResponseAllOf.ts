// tslint:disable
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
import {
    EntityStatus,
    EntityStatusFromJSON,
    EntityStatusToJSON,
    TrackingUrls,
    TrackingUrlsFromJSON,
    TrackingUrlsToJSON,
} from './';

/**
 * Creation fields
 * @export
 * @interface AdResponseAllOf
 */
export interface AdResponseAllOf  {
    /**
     * ID of the ad group that contains the ad.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    adGroupId?: string;
    /**
     * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    androidDeepLink?: string;
    /**
     * Comma-separated deep links for the carousel pin on Android.
     * @type {Array<string>}
     * @memberof AdResponseAllOf
     */
    carouselAndroidDeepLinks?: Array<string>;
    /**
     * Comma-separated destination URLs for the carousel pin to promote.
     * @type {Array<string>}
     * @memberof AdResponseAllOf
     */
    carouselDestinationUrls?: Array<string>;
    /**
     * Comma-separated deep links for the carousel pin on iOS.
     * @type {Array<string>}
     * @memberof AdResponseAllOf
     */
    carouselIosDeepLinks?: Array<string>;
    /**
     * Tracking url for the ad clicks.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    clickTrackingUrl?: string;
    /**
     * Ad creative type enum
     * @type {string}
     * @memberof AdResponseAllOf
     */
    creativeType?: AdResponseAllOfCreativeTypeEnum;
    /**
     * Destination URL.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    destinationUrl?: string;
    /**
     * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    iosDeepLink?: string;
    /**
     * Is original pin deleted?
     * @type {boolean}
     * @memberof AdResponseAllOf
     */
    isPinDeleted?: boolean;
    /**
     * Is pin repinnable?
     * @type {boolean}
     * @memberof AdResponseAllOf
     */
    isRemovable?: boolean;
    /**
     * Name of the ad - 255 chars max.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    name?: string;
    /**
     * Pin ID.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    pinId?: string;
    /**
     * 
     * @type {EntityStatus}
     * @memberof AdResponseAllOf
     */
    status?: EntityStatus;
    /**
     * 
     * @type {TrackingUrls}
     * @memberof AdResponseAllOf
     */
    trackingUrls?: TrackingUrls;
    /**
     * Tracking URL for ad impressions.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    viewTrackingUrl?: string;
}

export function AdResponseAllOfFromJSON(json: any): AdResponseAllOf {
    return {
        'adGroupId': !exists(json, 'ad_group_id') ? undefined : json['ad_group_id'],
        'androidDeepLink': !exists(json, 'android_deep_link') ? undefined : json['android_deep_link'],
        'carouselAndroidDeepLinks': !exists(json, 'carousel_android_deep_links') ? undefined : json['carousel_android_deep_links'],
        'carouselDestinationUrls': !exists(json, 'carousel_destination_urls') ? undefined : json['carousel_destination_urls'],
        'carouselIosDeepLinks': !exists(json, 'carousel_ios_deep_links') ? undefined : json['carousel_ios_deep_links'],
        'clickTrackingUrl': !exists(json, 'click_tracking_url') ? undefined : json['click_tracking_url'],
        'creativeType': !exists(json, 'creative_type') ? undefined : json['creative_type'],
        'destinationUrl': !exists(json, 'destination_url') ? undefined : json['destination_url'],
        'iosDeepLink': !exists(json, 'ios_deep_link') ? undefined : json['ios_deep_link'],
        'isPinDeleted': !exists(json, 'is_pin_deleted') ? undefined : json['is_pin_deleted'],
        'isRemovable': !exists(json, 'is_removable') ? undefined : json['is_removable'],
        'name': !exists(json, 'name') ? undefined : json['name'],
        'pinId': !exists(json, 'pin_id') ? undefined : json['pin_id'],
        'status': !exists(json, 'status') ? undefined : EntityStatusFromJSON(json['status']),
        'trackingUrls': !exists(json, 'tracking_urls') ? undefined : mapValues(json['tracking_urls'], FromJSON),
        'viewTrackingUrl': !exists(json, 'view_tracking_url') ? undefined : json['view_tracking_url'],
    };
}

export function AdResponseAllOfToJSON(value?: AdResponseAllOf): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'ad_group_id': value.adGroupId,
        'android_deep_link': value.androidDeepLink,
        'carousel_android_deep_links': value.carouselAndroidDeepLinks,
        'carousel_destination_urls': value.carouselDestinationUrls,
        'carousel_ios_deep_links': value.carouselIosDeepLinks,
        'click_tracking_url': value.clickTrackingUrl,
        'creative_type': value.creativeType,
        'destination_url': value.destinationUrl,
        'ios_deep_link': value.iosDeepLink,
        'is_pin_deleted': value.isPinDeleted,
        'is_removable': value.isRemovable,
        'name': value.name,
        'pin_id': value.pinId,
        'status': EntityStatusToJSON(value.status),
        'tracking_urls': value.trackingUrls === undefined ? undefined : mapValues(value.trackingUrls, ToJSON),
        'view_tracking_url': value.viewTrackingUrl,
    };
}

/**
* @export
* @enum {string}
*/
export enum AdResponseAllOfCreativeTypeEnum {
    Regular = 'REGULAR',
    Video = 'VIDEO',
    Shopping = 'SHOPPING',
    Carousel = 'CAROUSEL',
    MaxVideo = 'MAX_VIDEO',
    ShopThePin = 'SHOP_THE_PIN',
    Story = 'STORY'
}


