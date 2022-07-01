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
import { PinPromotionSummaryStatus } from './pinPromotionSummaryStatus';


export interface AdResponseAllOf1 { 
    /**
     * The ID of the advertiser that this ad belongs to.
     */
    ad_account_id?: string;
    /**
     * ID of the ad campaign that contains this ad.
     */
    campaign_id?: string;
    /**
     * Destination URL template for all items within a collections drawer.
     */
    collection_items_destination_url_template?: string | null;
    /**
     * Pin creation time. Unix timestamp in seconds.
     */
    created_time?: number;
    /**
     * The ID of this ad.
     */
    id?: string;
    /**
     * Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
     */
    rejected_reasons?: Array<AdResponseAllOf1.RejectedReasonsEnum>;
    /**
     * Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
     */
    rejection_labels?: Array<string>;
    /**
     * Ad review status
     */
    review_status?: AdResponseAllOf1.ReviewStatusEnum;
    /**
     * Always \"ad\".
     */
    type?: string;
    /**
     * Last update time. Unix timestamp in seconds.
     */
    updated_time?: number;
    /**
     * Ad summary status
     */
    summary_status?: PinPromotionSummaryStatus;
}
export namespace AdResponseAllOf1 {
    export type RejectedReasonsEnum = 'HASHTAGS' | 'PROMOTIONS_AND_PRICES' | 'TARGETING' | 'LANDING_PAGE' | 'CAPS_AND_SYMBOLS' | 'SHOCKING' | 'WEIGHT_LOSS' | 'PROHIBITED_PRODUCT' | 'AUTHENTICITY' | 'NUDITY' | 'CONFUSING_DESIGN' | 'URGENCY' | 'RATINGS' | 'APP' | 'ALCOHOL' | 'CONTESTS' | 'POLITICAL' | 'OTHER' | 'IMAGE' | 'NAR' | 'INCONSISTENT' | 'CLICKBAIT' | 'NO_DESCRIPTION' | 'LOW_QUALITY' | 'EXAGGERATED_CLAIMS' | 'PINTEREST_BRAND' | 'ALCOHOL_NO_SALE' | 'LANDING_PAGE_SPEED' | 'LANDING_PAGE_HARDWALL' | 'LANDING_PAGE_BROKEN' | 'LANDING_PAGE_QUALITY' | 'OUT_OF_STOCK' | 'IMAGE_LOW_QUALITY' | 'IMAGE_BUSY' | 'IMAGE_POORLY_EDITED' | 'IMAGE_BEFORE_AFTER' | 'UGC' | 'FAKE_BUTTONS' | 'WEAPONS' | 'SENSITIVE' | 'UNACCEPTABLE_BUSINESS' | 'SUSPICIOUS_CLAIMS' | 'PHARMA' | 'SUSPICIOUS_SUPPLEMENTS' | 'ILLEGAL_RECREATIONAL_DRUG' | 'LOW_QUALITY_LANDING_PAGE' | 'RESTRICTED_HEALTHCARE' | 'INCONSISTENT_LANG_FR';
    export const RejectedReasonsEnum = {
        Hashtags: 'HASHTAGS' as RejectedReasonsEnum,
        PromotionsAndPrices: 'PROMOTIONS_AND_PRICES' as RejectedReasonsEnum,
        Targeting: 'TARGETING' as RejectedReasonsEnum,
        LandingPage: 'LANDING_PAGE' as RejectedReasonsEnum,
        CapsAndSymbols: 'CAPS_AND_SYMBOLS' as RejectedReasonsEnum,
        Shocking: 'SHOCKING' as RejectedReasonsEnum,
        WeightLoss: 'WEIGHT_LOSS' as RejectedReasonsEnum,
        ProhibitedProduct: 'PROHIBITED_PRODUCT' as RejectedReasonsEnum,
        Authenticity: 'AUTHENTICITY' as RejectedReasonsEnum,
        Nudity: 'NUDITY' as RejectedReasonsEnum,
        ConfusingDesign: 'CONFUSING_DESIGN' as RejectedReasonsEnum,
        Urgency: 'URGENCY' as RejectedReasonsEnum,
        Ratings: 'RATINGS' as RejectedReasonsEnum,
        App: 'APP' as RejectedReasonsEnum,
        Alcohol: 'ALCOHOL' as RejectedReasonsEnum,
        Contests: 'CONTESTS' as RejectedReasonsEnum,
        Political: 'POLITICAL' as RejectedReasonsEnum,
        Other: 'OTHER' as RejectedReasonsEnum,
        Image: 'IMAGE' as RejectedReasonsEnum,
        Nar: 'NAR' as RejectedReasonsEnum,
        Inconsistent: 'INCONSISTENT' as RejectedReasonsEnum,
        Clickbait: 'CLICKBAIT' as RejectedReasonsEnum,
        NoDescription: 'NO_DESCRIPTION' as RejectedReasonsEnum,
        LowQuality: 'LOW_QUALITY' as RejectedReasonsEnum,
        ExaggeratedClaims: 'EXAGGERATED_CLAIMS' as RejectedReasonsEnum,
        PinterestBrand: 'PINTEREST_BRAND' as RejectedReasonsEnum,
        AlcoholNoSale: 'ALCOHOL_NO_SALE' as RejectedReasonsEnum,
        LandingPageSpeed: 'LANDING_PAGE_SPEED' as RejectedReasonsEnum,
        LandingPageHardwall: 'LANDING_PAGE_HARDWALL' as RejectedReasonsEnum,
        LandingPageBroken: 'LANDING_PAGE_BROKEN' as RejectedReasonsEnum,
        LandingPageQuality: 'LANDING_PAGE_QUALITY' as RejectedReasonsEnum,
        OutOfStock: 'OUT_OF_STOCK' as RejectedReasonsEnum,
        ImageLowQuality: 'IMAGE_LOW_QUALITY' as RejectedReasonsEnum,
        ImageBusy: 'IMAGE_BUSY' as RejectedReasonsEnum,
        ImagePoorlyEdited: 'IMAGE_POORLY_EDITED' as RejectedReasonsEnum,
        ImageBeforeAfter: 'IMAGE_BEFORE_AFTER' as RejectedReasonsEnum,
        Ugc: 'UGC' as RejectedReasonsEnum,
        FakeButtons: 'FAKE_BUTTONS' as RejectedReasonsEnum,
        Weapons: 'WEAPONS' as RejectedReasonsEnum,
        Sensitive: 'SENSITIVE' as RejectedReasonsEnum,
        UnacceptableBusiness: 'UNACCEPTABLE_BUSINESS' as RejectedReasonsEnum,
        SuspiciousClaims: 'SUSPICIOUS_CLAIMS' as RejectedReasonsEnum,
        Pharma: 'PHARMA' as RejectedReasonsEnum,
        SuspiciousSupplements: 'SUSPICIOUS_SUPPLEMENTS' as RejectedReasonsEnum,
        IllegalRecreationalDrug: 'ILLEGAL_RECREATIONAL_DRUG' as RejectedReasonsEnum,
        LowQualityLandingPage: 'LOW_QUALITY_LANDING_PAGE' as RejectedReasonsEnum,
        RestrictedHealthcare: 'RESTRICTED_HEALTHCARE' as RejectedReasonsEnum,
        InconsistentLangFr: 'INCONSISTENT_LANG_FR' as RejectedReasonsEnum
    }
    export type ReviewStatusEnum = 'OTHER' | 'PENDING' | 'REJECTED' | 'APPROVED';
    export const ReviewStatusEnum = {
        Other: 'OTHER' as ReviewStatusEnum,
        Pending: 'PENDING' as ReviewStatusEnum,
        Rejected: 'REJECTED' as ReviewStatusEnum,
        Approved: 'APPROVED' as ReviewStatusEnum
    }
}
