// tslint:disable
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

import {
    EntityStatus,
    TrackingUrls,
} from './';

/**
 * Creation fields
 * @export
 * @interface AdResponseAllOf
 */
export interface AdResponseAllOf {
    /**
     * ID of the ad group that contains the ad.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    ad_group_id?: string;
    /**
     * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    android_deep_link?: string | null;
    /**
     * Comma-separated deep links for the carousel pin on Android.
     * @type {Array<string>}
     * @memberof AdResponseAllOf
     */
    carousel_android_deep_links?: Array<string> | null;
    /**
     * Comma-separated destination URLs for the carousel pin to promote.
     * @type {Array<string>}
     * @memberof AdResponseAllOf
     */
    carousel_destination_urls?: Array<string> | null;
    /**
     * Comma-separated deep links for the carousel pin on iOS.
     * @type {Array<string>}
     * @memberof AdResponseAllOf
     */
    carousel_ios_deep_links?: Array<string> | null;
    /**
     * Tracking url for the ad clicks.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    click_tracking_url?: string | null;
    /**
     * Ad creative type enum
     * @type {string}
     * @memberof AdResponseAllOf
     */
    creative_type?: AdResponseAllOfCreativeTypeEnum;
    /**
     * Destination URL.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    destination_url?: string | null;
    /**
     * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    ios_deep_link?: string | null;
    /**
     * Is original pin deleted?
     * @type {boolean}
     * @memberof AdResponseAllOf
     */
    is_pin_deleted?: boolean;
    /**
     * Is pin repinnable?
     * @type {boolean}
     * @memberof AdResponseAllOf
     */
    is_removable?: boolean;
    /**
     * Name of the ad - 255 chars max.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    name?: string | null;
    /**
     * Pin ID.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    pin_id?: string;
    /**
     * @type {EntityStatus}
     * @memberof AdResponseAllOf
     */
    status?: EntityStatus;
    /**
     * @type {TrackingUrls}
     * @memberof AdResponseAllOf
     */
    tracking_urls?: TrackingUrls | null;
    /**
     * Tracking URL for ad impressions.
     * @type {string}
     * @memberof AdResponseAllOf
     */
    view_tracking_url?: string | null;
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

