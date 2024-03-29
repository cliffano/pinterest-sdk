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
import { AdCommonQuizPinData } from './adCommonQuizPinData';
import { AdCommonTrackingUrls } from './adCommonTrackingUrls';
import { CreativeType } from './creativeType';
import { EntityStatus } from './entityStatus';
import { GridClickType } from './gridClickType';

export class AdCreateRequest {
    /**
    * ID of the ad group that contains the ad.
    */
    'adGroupId': string;
    /**
    * Deep link URL for Android devices. Not currently available. Using this field will generate an error.
    */
    'androidDeepLink'?: string | null;
    /**
    * Comma-separated deep links for the carousel pin on Android.
    */
    'carouselAndroidDeepLinks'?: Array<string> | null;
    /**
    * Comma-separated destination URLs for the carousel pin to promote.
    */
    'carouselDestinationUrls'?: Array<string> | null;
    /**
    * Comma-separated deep links for the carousel pin on iOS.
    */
    'carouselIosDeepLinks'?: Array<string> | null;
    /**
    * Tracking url for the ad clicks.
    */
    'clickTrackingUrl'?: string | null;
    'creativeType': CreativeType;
    /**
    * Destination URL.
    */
    'destinationUrl'?: string | null;
    /**
    * Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
    */
    'iosDeepLink'?: string | null;
    /**
    * Is original pin deleted?
    */
    'isPinDeleted'?: boolean;
    /**
    * Is pin repinnable?
    */
    'isRemovable'?: boolean;
    /**
    * Name of the ad - 255 chars max.
    */
    'name'?: string | null;
    'status'?: EntityStatus;
    'trackingUrls'?: AdCommonTrackingUrls | null;
    /**
    * Tracking URL for ad impressions.
    */
    'viewTrackingUrl'?: string | null;
    /**
    * Lead form ID for lead ad generation.
    */
    'leadFormId'?: string | null;
    'gridClickType'?: GridClickType | null;
    /**
    * Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
    */
    'customizableCtaType'?: AdCreateRequest.CustomizableCtaTypeEnum;
    'quizPinData'?: AdCommonQuizPinData | null;
    /**
    * Pin ID.
    */
    'pinId': string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "adGroupId",
            "baseName": "ad_group_id",
            "type": "string"
        },
        {
            "name": "androidDeepLink",
            "baseName": "android_deep_link",
            "type": "string"
        },
        {
            "name": "carouselAndroidDeepLinks",
            "baseName": "carousel_android_deep_links",
            "type": "Array<string>"
        },
        {
            "name": "carouselDestinationUrls",
            "baseName": "carousel_destination_urls",
            "type": "Array<string>"
        },
        {
            "name": "carouselIosDeepLinks",
            "baseName": "carousel_ios_deep_links",
            "type": "Array<string>"
        },
        {
            "name": "clickTrackingUrl",
            "baseName": "click_tracking_url",
            "type": "string"
        },
        {
            "name": "creativeType",
            "baseName": "creative_type",
            "type": "CreativeType"
        },
        {
            "name": "destinationUrl",
            "baseName": "destination_url",
            "type": "string"
        },
        {
            "name": "iosDeepLink",
            "baseName": "ios_deep_link",
            "type": "string"
        },
        {
            "name": "isPinDeleted",
            "baseName": "is_pin_deleted",
            "type": "boolean"
        },
        {
            "name": "isRemovable",
            "baseName": "is_removable",
            "type": "boolean"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "EntityStatus"
        },
        {
            "name": "trackingUrls",
            "baseName": "tracking_urls",
            "type": "AdCommonTrackingUrls"
        },
        {
            "name": "viewTrackingUrl",
            "baseName": "view_tracking_url",
            "type": "string"
        },
        {
            "name": "leadFormId",
            "baseName": "lead_form_id",
            "type": "string"
        },
        {
            "name": "gridClickType",
            "baseName": "grid_click_type",
            "type": "GridClickType"
        },
        {
            "name": "customizableCtaType",
            "baseName": "customizable_cta_type",
            "type": "AdCreateRequest.CustomizableCtaTypeEnum"
        },
        {
            "name": "quizPinData",
            "baseName": "quiz_pin_data",
            "type": "AdCommonQuizPinData"
        },
        {
            "name": "pinId",
            "baseName": "pin_id",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return AdCreateRequest.attributeTypeMap;
    }
}

export namespace AdCreateRequest {
    export enum CustomizableCtaTypeEnum {
        GetOffer = <any> 'GET_OFFER',
        LearnMore = <any> 'LEARN_MORE',
        OrderNow = <any> 'ORDER_NOW',
        ShopNow = <any> 'SHOP_NOW',
        SignUp = <any> 'SIGN_UP',
        Subscribe = <any> 'SUBSCRIBE',
        BuyNow = <any> 'BUY_NOW',
        ContactUs = <any> 'CONTACT_US',
        GetQuote = <any> 'GET_QUOTE',
        VisitWebsite = <any> 'VISIT_WEBSITE',
        ApplyNow = <any> 'APPLY_NOW',
        BookNow = <any> 'BOOK_NOW',
        RequestDemo = <any> 'REQUEST_DEMO',
        RegisterNow = <any> 'REGISTER_NOW',
        FindADealer = <any> 'FIND_A_DEALER',
        AddToCart = <any> 'ADD_TO_CART',
        WatchNow = <any> 'WATCH_NOW',
        ReadMore = <any> 'READ_MORE',
        Null = <any> 'null'
    }
}
