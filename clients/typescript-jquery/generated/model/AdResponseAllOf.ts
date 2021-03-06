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

import * as models from './models';

/**
 * Creation fields
 */
export interface AdResponseAllOf {
    /**
     * ID of the ad group that contains the ad.
     */
    ad_group_id?: string;

    /**
     * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
     */
    android_deep_link?: string;

    /**
     * Comma-separated deep links for the carousel pin on Android.
     */
    carousel_android_deep_links?: Array<string>;

    /**
     * Comma-separated destination URLs for the carousel pin to promote.
     */
    carousel_destination_urls?: Array<string>;

    /**
     * Comma-separated deep links for the carousel pin on iOS.
     */
    carousel_ios_deep_links?: Array<string>;

    /**
     * Tracking url for the ad clicks.
     */
    click_tracking_url?: string;

    /**
     * Ad creative type enum
     */
    creative_type?: AdResponseAllOf.CreativeTypeEnum;

    /**
     * Destination URL.
     */
    destination_url?: string;

    /**
     * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
     */
    ios_deep_link?: string;

    /**
     * Is original pin deleted?
     */
    is_pin_deleted?: boolean;

    /**
     * Is pin repinnable?
     */
    is_removable?: boolean;

    /**
     * Name of the ad - 255 chars max.
     */
    name?: string;

    /**
     * Pin ID.
     */
    pin_id?: string;

    status?: models.EntityStatus;

    tracking_urls?: models.models.TrackingUrls;

    /**
     * Tracking URL for ad impressions.
     */
    view_tracking_url?: string;

}
export namespace AdResponseAllOf {
    export enum CreativeTypeEnum {
        Regular = <any> 'REGULAR',
        Video = <any> 'VIDEO',
        Shopping = <any> 'SHOPPING',
        Carousel = <any> 'CAROUSEL',
        MaxVideo = <any> 'MAX_VIDEO',
        ShopThePin = <any> 'SHOP_THE_PIN',
        Story = <any> 'STORY'
    }
}
