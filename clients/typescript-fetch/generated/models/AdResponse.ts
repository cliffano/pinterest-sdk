/* tslint:disable */
/* eslint-disable */
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
    AdResponseAllOf,
    AdResponseAllOfFromJSON,
    AdResponseAllOfFromJSONTyped,
    AdResponseAllOfToJSON,
} from './AdResponseAllOf';
import {
    AdResponseAllOf1,
    AdResponseAllOf1FromJSON,
    AdResponseAllOf1FromJSONTyped,
    AdResponseAllOf1ToJSON,
} from './AdResponseAllOf1';
import {
    EntityStatus,
    EntityStatusFromJSON,
    EntityStatusFromJSONTyped,
    EntityStatusToJSON,
} from './EntityStatus';
import {
    PinPromotionSummaryStatus,
    PinPromotionSummaryStatusFromJSON,
    PinPromotionSummaryStatusFromJSONTyped,
    PinPromotionSummaryStatusToJSON,
} from './PinPromotionSummaryStatus';
import {
    TrackingUrls,
    TrackingUrlsFromJSON,
    TrackingUrlsFromJSONTyped,
    TrackingUrlsToJSON,
} from './TrackingUrls';

/**
 * 
 * @export
 * @interface AdResponse
 */
export interface AdResponse {
    /**
     * ID of the ad group that contains the ad.
     * @type {string}
     * @memberof AdResponse
     */
    adGroupId?: string;
    /**
     * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
     * @type {string}
     * @memberof AdResponse
     */
    androidDeepLink?: string | null;
    /**
     * Comma-separated deep links for the carousel pin on Android.
     * @type {Array<string>}
     * @memberof AdResponse
     */
    carouselAndroidDeepLinks?: Array<string> | null;
    /**
     * Comma-separated destination URLs for the carousel pin to promote.
     * @type {Array<string>}
     * @memberof AdResponse
     */
    carouselDestinationUrls?: Array<string> | null;
    /**
     * Comma-separated deep links for the carousel pin on iOS.
     * @type {Array<string>}
     * @memberof AdResponse
     */
    carouselIosDeepLinks?: Array<string> | null;
    /**
     * Tracking url for the ad clicks.
     * @type {string}
     * @memberof AdResponse
     */
    clickTrackingUrl?: string | null;
    /**
     * Ad creative type enum
     * @type {string}
     * @memberof AdResponse
     */
    creativeType?: AdResponseCreativeTypeEnum;
    /**
     * Destination URL.
     * @type {string}
     * @memberof AdResponse
     */
    destinationUrl?: string | null;
    /**
     * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
     * @type {string}
     * @memberof AdResponse
     */
    iosDeepLink?: string | null;
    /**
     * Is original pin deleted?
     * @type {boolean}
     * @memberof AdResponse
     */
    isPinDeleted?: boolean;
    /**
     * Is pin repinnable?
     * @type {boolean}
     * @memberof AdResponse
     */
    isRemovable?: boolean;
    /**
     * Name of the ad - 255 chars max.
     * @type {string}
     * @memberof AdResponse
     */
    name?: string | null;
    /**
     * Pin ID.
     * @type {string}
     * @memberof AdResponse
     */
    pinId?: string;
    /**
     * 
     * @type {EntityStatus}
     * @memberof AdResponse
     */
    status?: EntityStatus;
    /**
     * 
     * @type {TrackingUrls}
     * @memberof AdResponse
     */
    trackingUrls?: TrackingUrls | null;
    /**
     * Tracking URL for ad impressions.
     * @type {string}
     * @memberof AdResponse
     */
    viewTrackingUrl?: string | null;
    /**
     * The ID of the advertiser that this ad belongs to.
     * @type {string}
     * @memberof AdResponse
     */
    adAccountId?: string;
    /**
     * ID of the ad campaign that contains this ad.
     * @type {string}
     * @memberof AdResponse
     */
    campaignId?: string;
    /**
     * Destination URL template for all items within a collections drawer.
     * @type {string}
     * @memberof AdResponse
     */
    collectionItemsDestinationUrlTemplate?: string | null;
    /**
     * Pin creation time. Unix timestamp in seconds.
     * @type {number}
     * @memberof AdResponse
     */
    createdTime?: number;
    /**
     * The ID of this ad.
     * @type {string}
     * @memberof AdResponse
     */
    id?: string;
    /**
     * Enum reason why the pin was rejected. Returned if <code>review_status</code> is "REJECTED".
     * @type {Array<string>}
     * @memberof AdResponse
     */
    rejectedReasons?: Array<AdResponseRejectedReasonsEnum>;
    /**
     * Text reason why the pin was rejected. Returned if <code>review_status</code> is "REJECTED".
     * @type {Array<string>}
     * @memberof AdResponse
     */
    rejectionLabels?: Array<string>;
    /**
     * Ad review status
     * @type {string}
     * @memberof AdResponse
     */
    reviewStatus?: AdResponseReviewStatusEnum;
    /**
     * Always "ad".
     * @type {string}
     * @memberof AdResponse
     */
    type?: string;
    /**
     * Last update time. Unix timestamp in seconds.
     * @type {number}
     * @memberof AdResponse
     */
    updatedTime?: number;
    /**
     * Ad summary status
     * @type {PinPromotionSummaryStatus}
     * @memberof AdResponse
     */
    summaryStatus?: PinPromotionSummaryStatus;
}

/**
* @export
* @enum {string}
*/
export enum AdResponseCreativeTypeEnum {
    Regular = 'REGULAR',
    Video = 'VIDEO',
    Shopping = 'SHOPPING',
    Carousel = 'CAROUSEL',
    MaxVideo = 'MAX_VIDEO',
    ShopThePin = 'SHOP_THE_PIN',
    Story = 'STORY'
}/**
* @export
* @enum {string}
*/
export enum AdResponseRejectedReasonsEnum {
    Hashtags = 'HASHTAGS',
    PromotionsAndPrices = 'PROMOTIONS_AND_PRICES',
    Targeting = 'TARGETING',
    LandingPage = 'LANDING_PAGE',
    CapsAndSymbols = 'CAPS_AND_SYMBOLS',
    Shocking = 'SHOCKING',
    WeightLoss = 'WEIGHT_LOSS',
    ProhibitedProduct = 'PROHIBITED_PRODUCT',
    Authenticity = 'AUTHENTICITY',
    Nudity = 'NUDITY',
    ConfusingDesign = 'CONFUSING_DESIGN',
    Urgency = 'URGENCY',
    Ratings = 'RATINGS',
    App = 'APP',
    Alcohol = 'ALCOHOL',
    Contests = 'CONTESTS',
    Political = 'POLITICAL',
    Other = 'OTHER',
    Image = 'IMAGE',
    Nar = 'NAR',
    Inconsistent = 'INCONSISTENT',
    Clickbait = 'CLICKBAIT',
    NoDescription = 'NO_DESCRIPTION',
    LowQuality = 'LOW_QUALITY',
    ExaggeratedClaims = 'EXAGGERATED_CLAIMS',
    PinterestBrand = 'PINTEREST_BRAND',
    AlcoholNoSale = 'ALCOHOL_NO_SALE',
    LandingPageSpeed = 'LANDING_PAGE_SPEED',
    LandingPageHardwall = 'LANDING_PAGE_HARDWALL',
    LandingPageBroken = 'LANDING_PAGE_BROKEN',
    LandingPageQuality = 'LANDING_PAGE_QUALITY',
    OutOfStock = 'OUT_OF_STOCK',
    ImageLowQuality = 'IMAGE_LOW_QUALITY',
    ImageBusy = 'IMAGE_BUSY',
    ImagePoorlyEdited = 'IMAGE_POORLY_EDITED',
    ImageBeforeAfter = 'IMAGE_BEFORE_AFTER',
    Ugc = 'UGC',
    FakeButtons = 'FAKE_BUTTONS',
    Weapons = 'WEAPONS',
    Sensitive = 'SENSITIVE',
    UnacceptableBusiness = 'UNACCEPTABLE_BUSINESS',
    SuspiciousClaims = 'SUSPICIOUS_CLAIMS',
    Pharma = 'PHARMA',
    SuspiciousSupplements = 'SUSPICIOUS_SUPPLEMENTS',
    IllegalRecreationalDrug = 'ILLEGAL_RECREATIONAL_DRUG',
    LowQualityLandingPage = 'LOW_QUALITY_LANDING_PAGE',
    RestrictedHealthcare = 'RESTRICTED_HEALTHCARE',
    InconsistentLangFr = 'INCONSISTENT_LANG_FR'
}/**
* @export
* @enum {string}
*/
export enum AdResponseReviewStatusEnum {
    Other = 'OTHER',
    Pending = 'PENDING',
    Rejected = 'REJECTED',
    Approved = 'APPROVED'
}

export function AdResponseFromJSON(json: any): AdResponse {
    return AdResponseFromJSONTyped(json, false);
}

export function AdResponseFromJSONTyped(json: any, ignoreDiscriminator: boolean): AdResponse {
    if ((json === undefined) || (json === null)) {
        return json;
    }
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
        'trackingUrls': !exists(json, 'tracking_urls') ? undefined : (json['tracking_urls'] === null ? null : mapValues(json['tracking_urls'], FromJSON)),
        'viewTrackingUrl': !exists(json, 'view_tracking_url') ? undefined : json['view_tracking_url'],
        'adAccountId': !exists(json, 'ad_account_id') ? undefined : json['ad_account_id'],
        'campaignId': !exists(json, 'campaign_id') ? undefined : json['campaign_id'],
        'collectionItemsDestinationUrlTemplate': !exists(json, 'collection_items_destination_url_template') ? undefined : json['collection_items_destination_url_template'],
        'createdTime': !exists(json, 'created_time') ? undefined : json['created_time'],
        'id': !exists(json, 'id') ? undefined : json['id'],
        'rejectedReasons': !exists(json, 'rejected_reasons') ? undefined : json['rejected_reasons'],
        'rejectionLabels': !exists(json, 'rejection_labels') ? undefined : json['rejection_labels'],
        'reviewStatus': !exists(json, 'review_status') ? undefined : json['review_status'],
        'type': !exists(json, 'type') ? undefined : json['type'],
        'updatedTime': !exists(json, 'updated_time') ? undefined : json['updated_time'],
        'summaryStatus': !exists(json, 'summary_status') ? undefined : PinPromotionSummaryStatusFromJSON(json['summary_status']),
    };
}

export function AdResponseToJSON(value?: AdResponse | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
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
        'tracking_urls': value.trackingUrls === undefined ? undefined : (value.trackingUrls === null ? null : mapValues(value.trackingUrls, ToJSON)),
        'view_tracking_url': value.viewTrackingUrl,
        'ad_account_id': value.adAccountId,
        'campaign_id': value.campaignId,
        'collection_items_destination_url_template': value.collectionItemsDestinationUrlTemplate,
        'created_time': value.createdTime,
        'id': value.id,
        'rejected_reasons': value.rejectedReasons,
        'rejection_labels': value.rejectionLabels,
        'review_status': value.reviewStatus,
        'type': value.type,
        'updated_time': value.updatedTime,
        'summary_status': PinPromotionSummaryStatusToJSON(value.summaryStatus),
    };
}

