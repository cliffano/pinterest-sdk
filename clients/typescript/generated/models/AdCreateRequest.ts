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

import { AdCommonQuizPinData } from '../models/AdCommonQuizPinData';
import { AdCommonTrackingUrls } from '../models/AdCommonTrackingUrls';
import { CreativeType } from '../models/CreativeType';
import { EntityStatus } from '../models/EntityStatus';
import { GridClickType } from '../models/GridClickType';
import { HttpFile } from '../http/http';

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
    'customizableCtaType'?: AdCreateRequestCustomizableCtaTypeEnum | null;
    'quizPinData'?: AdCommonQuizPinData | null;
    /**
    * Pin ID.
    */
    'pinId': string;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "adGroupId",
            "baseName": "ad_group_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "androidDeepLink",
            "baseName": "android_deep_link",
            "type": "string",
            "format": ""
        },
        {
            "name": "carouselAndroidDeepLinks",
            "baseName": "carousel_android_deep_links",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "carouselDestinationUrls",
            "baseName": "carousel_destination_urls",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "carouselIosDeepLinks",
            "baseName": "carousel_ios_deep_links",
            "type": "Array<string>",
            "format": ""
        },
        {
            "name": "clickTrackingUrl",
            "baseName": "click_tracking_url",
            "type": "string",
            "format": ""
        },
        {
            "name": "creativeType",
            "baseName": "creative_type",
            "type": "CreativeType",
            "format": ""
        },
        {
            "name": "destinationUrl",
            "baseName": "destination_url",
            "type": "string",
            "format": ""
        },
        {
            "name": "iosDeepLink",
            "baseName": "ios_deep_link",
            "type": "string",
            "format": ""
        },
        {
            "name": "isPinDeleted",
            "baseName": "is_pin_deleted",
            "type": "boolean",
            "format": ""
        },
        {
            "name": "isRemovable",
            "baseName": "is_removable",
            "type": "boolean",
            "format": ""
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string",
            "format": ""
        },
        {
            "name": "status",
            "baseName": "status",
            "type": "EntityStatus",
            "format": ""
        },
        {
            "name": "trackingUrls",
            "baseName": "tracking_urls",
            "type": "AdCommonTrackingUrls",
            "format": ""
        },
        {
            "name": "viewTrackingUrl",
            "baseName": "view_tracking_url",
            "type": "string",
            "format": ""
        },
        {
            "name": "leadFormId",
            "baseName": "lead_form_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "gridClickType",
            "baseName": "grid_click_type",
            "type": "GridClickType",
            "format": ""
        },
        {
            "name": "customizableCtaType",
            "baseName": "customizable_cta_type",
            "type": "AdCreateRequestCustomizableCtaTypeEnum",
            "format": ""
        },
        {
            "name": "quizPinData",
            "baseName": "quiz_pin_data",
            "type": "AdCommonQuizPinData",
            "format": ""
        },
        {
            "name": "pinId",
            "baseName": "pin_id",
            "type": "string",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return AdCreateRequest.attributeTypeMap;
    }

    public constructor() {
    }
}


export enum AdCreateRequestCustomizableCtaTypeEnum {
    GetOffer = 'GET_OFFER',
    LearnMore = 'LEARN_MORE',
    OrderNow = 'ORDER_NOW',
    ShopNow = 'SHOP_NOW',
    SignUp = 'SIGN_UP',
    Subscribe = 'SUBSCRIBE',
    BuyNow = 'BUY_NOW',
    ContactUs = 'CONTACT_US',
    GetQuote = 'GET_QUOTE',
    VisitWebsite = 'VISIT_WEBSITE',
    ApplyNow = 'APPLY_NOW',
    BookNow = 'BOOK_NOW',
    RequestDemo = 'REQUEST_DEMO',
    RegisterNow = 'REGISTER_NOW',
    FindADealer = 'FIND_A_DEALER',
    AddToCart = 'ADD_TO_CART',
    WatchNow = 'WATCH_NOW',
    ReadMore = 'READ_MORE',
    Null = 'null'
}

