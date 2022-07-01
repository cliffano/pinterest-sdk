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

export interface AdResponseAllOf1 {
    /**
     * The ID of the advertiser that this ad belongs to.
     */
    "ad_account_id"?: string;
    /**
     * ID of the ad campaign that contains this ad.
     */
    "campaign_id"?: string;
    /**
     * Destination URL template for all items within a collections drawer.
     */
    "collection_items_destination_url_template"?: string;
    /**
     * Pin creation time. Unix timestamp in seconds.
     */
    "created_time"?: number;
    /**
     * The ID of this ad.
     */
    "id"?: string;
    /**
     * Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
     */
    "rejected_reasons"?: Array<AdResponseAllOf1.RejectedReasonsEnum>;
    /**
     * Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
     */
    "rejection_labels"?: Array<string>;
    /**
     * Ad review status
     */
    "review_status"?: AdResponseAllOf1.ReviewStatusEnum;
    /**
     * Always \"ad\".
     */
    "type"?: string;
    /**
     * Last update time. Unix timestamp in seconds.
     */
    "updated_time"?: number;
    /**
     * Ad summary status
     */
    "summary_status"?: models.models.PinPromotionSummaryStatus;
}

export namespace AdResponseAllOf1 {
    export enum RejectedReasonsEnum {
        Hashtags = <any> 'HASHTAGS',
        PromotionsAndPrices = <any> 'PROMOTIONS_AND_PRICES',
        Targeting = <any> 'TARGETING',
        LandingPage = <any> 'LANDING_PAGE',
        CapsAndSymbols = <any> 'CAPS_AND_SYMBOLS',
        Shocking = <any> 'SHOCKING',
        WeightLoss = <any> 'WEIGHT_LOSS',
        ProhibitedProduct = <any> 'PROHIBITED_PRODUCT',
        Authenticity = <any> 'AUTHENTICITY',
        Nudity = <any> 'NUDITY',
        ConfusingDesign = <any> 'CONFUSING_DESIGN',
        Urgency = <any> 'URGENCY',
        Ratings = <any> 'RATINGS',
        App = <any> 'APP',
        Alcohol = <any> 'ALCOHOL',
        Contests = <any> 'CONTESTS',
        Political = <any> 'POLITICAL',
        Other = <any> 'OTHER',
        Image = <any> 'IMAGE',
        Nar = <any> 'NAR',
        Inconsistent = <any> 'INCONSISTENT',
        Clickbait = <any> 'CLICKBAIT',
        NoDescription = <any> 'NO_DESCRIPTION',
        LowQuality = <any> 'LOW_QUALITY',
        ExaggeratedClaims = <any> 'EXAGGERATED_CLAIMS',
        PinterestBrand = <any> 'PINTEREST_BRAND',
        AlcoholNoSale = <any> 'ALCOHOL_NO_SALE',
        LandingPageSpeed = <any> 'LANDING_PAGE_SPEED',
        LandingPageHardwall = <any> 'LANDING_PAGE_HARDWALL',
        LandingPageBroken = <any> 'LANDING_PAGE_BROKEN',
        LandingPageQuality = <any> 'LANDING_PAGE_QUALITY',
        OutOfStock = <any> 'OUT_OF_STOCK',
        ImageLowQuality = <any> 'IMAGE_LOW_QUALITY',
        ImageBusy = <any> 'IMAGE_BUSY',
        ImagePoorlyEdited = <any> 'IMAGE_POORLY_EDITED',
        ImageBeforeAfter = <any> 'IMAGE_BEFORE_AFTER',
        Ugc = <any> 'UGC',
        FakeButtons = <any> 'FAKE_BUTTONS',
        Weapons = <any> 'WEAPONS',
        Sensitive = <any> 'SENSITIVE',
        UnacceptableBusiness = <any> 'UNACCEPTABLE_BUSINESS',
        SuspiciousClaims = <any> 'SUSPICIOUS_CLAIMS',
        Pharma = <any> 'PHARMA',
        SuspiciousSupplements = <any> 'SUSPICIOUS_SUPPLEMENTS',
        IllegalRecreationalDrug = <any> 'ILLEGAL_RECREATIONAL_DRUG',
        LowQualityLandingPage = <any> 'LOW_QUALITY_LANDING_PAGE',
        RestrictedHealthcare = <any> 'RESTRICTED_HEALTHCARE',
        InconsistentLangFr = <any> 'INCONSISTENT_LANG_FR'
    }
    export enum ReviewStatusEnum {
        Other = <any> 'OTHER',
        Pending = <any> 'PENDING',
        Rejected = <any> 'REJECTED',
        Approved = <any> 'APPROVED'
    }
}
