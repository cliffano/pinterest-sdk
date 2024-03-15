/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://openapi-generator.tech
 */

use crate::models;

#[derive(Clone, Default, Debug, PartialEq, Serialize, Deserialize)]
pub struct AdResponse {
    /// ID of the ad group that contains the ad.
    #[serde(rename = "ad_group_id", skip_serializing_if = "Option::is_none")]
    pub ad_group_id: Option<String>,
    /// Deep link URL for Android devices. Not currently available. Using this field will generate an error.
    #[serde(rename = "android_deep_link", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub android_deep_link: Option<Option<String>>,
    /// Comma-separated deep links for the carousel pin on Android.
    #[serde(rename = "carousel_android_deep_links", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub carousel_android_deep_links: Option<Option<Vec<String>>>,
    /// Comma-separated destination URLs for the carousel pin to promote.
    #[serde(rename = "carousel_destination_urls", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub carousel_destination_urls: Option<Option<Vec<String>>>,
    /// Comma-separated deep links for the carousel pin on iOS.
    #[serde(rename = "carousel_ios_deep_links", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub carousel_ios_deep_links: Option<Option<Vec<String>>>,
    /// Tracking url for the ad clicks.
    #[serde(rename = "click_tracking_url", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub click_tracking_url: Option<Option<String>>,
    #[serde(rename = "creative_type", skip_serializing_if = "Option::is_none")]
    pub creative_type: Option<models::CreativeType>,
    /// Destination URL.
    #[serde(rename = "destination_url", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub destination_url: Option<Option<String>>,
    /// Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
    #[serde(rename = "ios_deep_link", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub ios_deep_link: Option<Option<String>>,
    /// Is original pin deleted?
    #[serde(rename = "is_pin_deleted", skip_serializing_if = "Option::is_none")]
    pub is_pin_deleted: Option<bool>,
    /// Is pin repinnable?
    #[serde(rename = "is_removable", skip_serializing_if = "Option::is_none")]
    pub is_removable: Option<bool>,
    /// Name of the ad - 255 chars max.
    #[serde(rename = "name", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub name: Option<Option<String>>,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<models::EntityStatus>,
    #[serde(rename = "tracking_urls", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub tracking_urls: Option<Option<Box<models::AdCommonTrackingUrls>>>,
    /// Tracking URL for ad impressions.
    #[serde(rename = "view_tracking_url", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub view_tracking_url: Option<Option<String>>,
    /// Lead form ID for lead ad generation.
    #[serde(rename = "lead_form_id", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub lead_form_id: Option<Option<String>>,
    #[serde(rename = "grid_click_type", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub grid_click_type: Option<Option<models::GridClickType>>,
    /// Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
    #[serde(rename = "customizable_cta_type", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub customizable_cta_type: Option<Option<CustomizableCtaType>>,
    #[serde(rename = "quiz_pin_data", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub quiz_pin_data: Option<Option<Box<models::AdCommonQuizPinData>>>,
    /// Pin ID.
    #[serde(rename = "pin_id", skip_serializing_if = "Option::is_none")]
    pub pin_id: Option<String>,
    /// The ID of the advertiser that this ad belongs to.
    #[serde(rename = "ad_account_id", skip_serializing_if = "Option::is_none")]
    pub ad_account_id: Option<String>,
    /// ID of the ad campaign that contains this ad.
    #[serde(rename = "campaign_id", skip_serializing_if = "Option::is_none")]
    pub campaign_id: Option<String>,
    /// Destination URL template for all items within a collections drawer.
    #[serde(rename = "collection_items_destination_url_template", default, with = "::serde_with::rust::double_option", skip_serializing_if = "Option::is_none")]
    pub collection_items_destination_url_template: Option<Option<String>>,
    /// Pin creation time. Unix timestamp in seconds.
    #[serde(rename = "created_time", skip_serializing_if = "Option::is_none")]
    pub created_time: Option<i32>,
    /// The ID of this ad.
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    /// Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
    #[serde(rename = "rejected_reasons", skip_serializing_if = "Option::is_none")]
    pub rejected_reasons: Option<Vec<RejectedReasons>>,
    /// Text reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
    #[serde(rename = "rejection_labels", skip_serializing_if = "Option::is_none")]
    pub rejection_labels: Option<Vec<String>>,
    /// Ad review status
    #[serde(rename = "review_status", skip_serializing_if = "Option::is_none")]
    pub review_status: Option<ReviewStatus>,
    /// Always \"ad\".
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub r#type: Option<String>,
    /// Last update time. Unix timestamp in seconds.
    #[serde(rename = "updated_time", skip_serializing_if = "Option::is_none")]
    pub updated_time: Option<i32>,
    /// Ad summary status
    #[serde(rename = "summary_status", skip_serializing_if = "Option::is_none")]
    pub summary_status: Option<models::PinPromotionSummaryStatus>,
}

impl AdResponse {
    pub fn new() -> AdResponse {
        AdResponse {
            ad_group_id: None,
            android_deep_link: None,
            carousel_android_deep_links: None,
            carousel_destination_urls: None,
            carousel_ios_deep_links: None,
            click_tracking_url: None,
            creative_type: None,
            destination_url: None,
            ios_deep_link: None,
            is_pin_deleted: None,
            is_removable: None,
            name: None,
            status: None,
            tracking_urls: None,
            view_tracking_url: None,
            lead_form_id: None,
            grid_click_type: None,
            customizable_cta_type: None,
            quiz_pin_data: None,
            pin_id: None,
            ad_account_id: None,
            campaign_id: None,
            collection_items_destination_url_template: None,
            created_time: None,
            id: None,
            rejected_reasons: None,
            rejection_labels: None,
            review_status: None,
            r#type: None,
            updated_time: None,
            summary_status: None,
        }
    }
}
/// Select a call to action (CTA) to display below your ad. Available only for ads with direct links enabled. CTA options for consideration and conversion campaigns are LEARN_MORE, SHOP_NOW, BOOK_NOW, SIGN_UP, VISIT_WEBSITE, BUY_NOW, GET_OFFER, ORDER_NOW, ADD_TO_CART (for conversion campaigns with add to cart conversion events only)
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum CustomizableCtaType {
    #[serde(rename = "GET_OFFER")]
    GetOffer,
    #[serde(rename = "LEARN_MORE")]
    LearnMore,
    #[serde(rename = "ORDER_NOW")]
    OrderNow,
    #[serde(rename = "SHOP_NOW")]
    ShopNow,
    #[serde(rename = "SIGN_UP")]
    SignUp,
    #[serde(rename = "SUBSCRIBE")]
    Subscribe,
    #[serde(rename = "BUY_NOW")]
    BuyNow,
    #[serde(rename = "CONTACT_US")]
    ContactUs,
    #[serde(rename = "GET_QUOTE")]
    GetQuote,
    #[serde(rename = "VISIT_WEBSITE")]
    VisitWebsite,
    #[serde(rename = "APPLY_NOW")]
    ApplyNow,
    #[serde(rename = "BOOK_NOW")]
    BookNow,
    #[serde(rename = "REQUEST_DEMO")]
    RequestDemo,
    #[serde(rename = "REGISTER_NOW")]
    RegisterNow,
    #[serde(rename = "FIND_A_DEALER")]
    FindADealer,
    #[serde(rename = "ADD_TO_CART")]
    AddToCart,
    #[serde(rename = "WATCH_NOW")]
    WatchNow,
    #[serde(rename = "READ_MORE")]
    ReadMore,
    #[serde(rename = "null")]
    Null,
}

impl Default for CustomizableCtaType {
    fn default() -> CustomizableCtaType {
        Self::GetOffer
    }
}
/// Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RejectedReasons {
    #[serde(rename = "HASHTAGS")]
    Hashtags,
    #[serde(rename = "PROMOTIONS_AND_PRICES")]
    PromotionsAndPrices,
    #[serde(rename = "TARGETING")]
    Targeting,
    #[serde(rename = "LANDING_PAGE")]
    LandingPage,
    #[serde(rename = "CAPS_AND_SYMBOLS")]
    CapsAndSymbols,
    #[serde(rename = "SHOCKING")]
    Shocking,
    #[serde(rename = "WEIGHT_LOSS")]
    WeightLoss,
    #[serde(rename = "PROHIBITED_PRODUCT")]
    ProhibitedProduct,
    #[serde(rename = "AUTHENTICITY")]
    Authenticity,
    #[serde(rename = "NUDITY")]
    Nudity,
    #[serde(rename = "CONFUSING_DESIGN")]
    ConfusingDesign,
    #[serde(rename = "URGENCY")]
    Urgency,
    #[serde(rename = "RATINGS")]
    Ratings,
    #[serde(rename = "APP")]
    App,
    #[serde(rename = "ALCOHOL")]
    Alcohol,
    #[serde(rename = "CONTESTS")]
    Contests,
    #[serde(rename = "POLITICAL")]
    Political,
    #[serde(rename = "OTHER")]
    Other,
    #[serde(rename = "IMAGE")]
    Image,
    #[serde(rename = "NAR")]
    Nar,
    #[serde(rename = "INCONSISTENT")]
    Inconsistent,
    #[serde(rename = "CLICKBAIT")]
    Clickbait,
    #[serde(rename = "NO_DESCRIPTION")]
    NoDescription,
    #[serde(rename = "LOW_QUALITY")]
    LowQuality,
    #[serde(rename = "EXAGGERATED_CLAIMS")]
    ExaggeratedClaims,
    #[serde(rename = "PINTEREST_BRAND")]
    PinterestBrand,
    #[serde(rename = "ALCOHOL_NO_SALE")]
    AlcoholNoSale,
    #[serde(rename = "LANDING_PAGE_SPEED")]
    LandingPageSpeed,
    #[serde(rename = "LANDING_PAGE_HARDWALL")]
    LandingPageHardwall,
    #[serde(rename = "LANDING_PAGE_BROKEN")]
    LandingPageBroken,
    #[serde(rename = "LANDING_PAGE_QUALITY")]
    LandingPageQuality,
    #[serde(rename = "OUT_OF_STOCK")]
    OutOfStock,
    #[serde(rename = "IMAGE_LOW_QUALITY")]
    ImageLowQuality,
    #[serde(rename = "IMAGE_BUSY")]
    ImageBusy,
    #[serde(rename = "IMAGE_POORLY_EDITED")]
    ImagePoorlyEdited,
    #[serde(rename = "IMAGE_BEFORE_AFTER")]
    ImageBeforeAfter,
    #[serde(rename = "UGC")]
    Ugc,
    #[serde(rename = "FAKE_BUTTONS")]
    FakeButtons,
    #[serde(rename = "WEAPONS")]
    Weapons,
    #[serde(rename = "SENSITIVE")]
    Sensitive,
    #[serde(rename = "UNACCEPTABLE_BUSINESS")]
    UnacceptableBusiness,
    #[serde(rename = "SUSPICIOUS_CLAIMS")]
    SuspiciousClaims,
    #[serde(rename = "PHARMA")]
    Pharma,
    #[serde(rename = "SUSPICIOUS_SUPPLEMENTS")]
    SuspiciousSupplements,
    #[serde(rename = "ILLEGAL_RECREATIONAL_DRUG")]
    IllegalRecreationalDrug,
    #[serde(rename = "LOW_QUALITY_LANDING_PAGE")]
    LowQualityLandingPage,
    #[serde(rename = "RESTRICTED_HEALTHCARE")]
    RestrictedHealthcare,
    #[serde(rename = "INCONSISTENT_LANG_FR")]
    InconsistentLangFr,
}

impl Default for RejectedReasons {
    fn default() -> RejectedReasons {
        Self::Hashtags
    }
}
/// Ad review status
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ReviewStatus {
    #[serde(rename = "OTHER")]
    Other,
    #[serde(rename = "PENDING")]
    Pending,
    #[serde(rename = "REJECTED")]
    Rejected,
    #[serde(rename = "APPROVED")]
    Approved,
}

impl Default for ReviewStatus {
    fn default() -> ReviewStatus {
        Self::Other
    }
}

