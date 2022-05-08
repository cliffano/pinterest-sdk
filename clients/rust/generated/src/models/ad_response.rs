/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct AdResponse {
    /// ID of the ad group that contains the ad.
    #[serde(rename = "ad_group_id", skip_serializing_if = "Option::is_none")]
    pub ad_group_id: Option<String>,
    /// Deep link URL for Android devices. Not currently available. Using this field will generate an error.
    #[serde(rename = "android_deep_link", skip_serializing_if = "Option::is_none")]
    pub android_deep_link: Option<String>,
    /// Comma-separated deep links for the carousel pin on Android.
    #[serde(rename = "carousel_android_deep_links", skip_serializing_if = "Option::is_none")]
    pub carousel_android_deep_links: Option<Vec<String>>,
    /// Comma-separated destination URLs for the carousel pin to promote.
    #[serde(rename = "carousel_destination_urls", skip_serializing_if = "Option::is_none")]
    pub carousel_destination_urls: Option<Vec<String>>,
    /// Comma-separated deep links for the carousel pin on iOS.
    #[serde(rename = "carousel_ios_deep_links", skip_serializing_if = "Option::is_none")]
    pub carousel_ios_deep_links: Option<Vec<String>>,
    /// Tracking url for the ad clicks.
    #[serde(rename = "click_tracking_url", skip_serializing_if = "Option::is_none")]
    pub click_tracking_url: Option<String>,
    /// Ad creative type enum
    #[serde(rename = "creative_type", skip_serializing_if = "Option::is_none")]
    pub creative_type: Option<CreativeType>,
    /// Destination URL.
    #[serde(rename = "destination_url", skip_serializing_if = "Option::is_none")]
    pub destination_url: Option<String>,
    /// Deep link URL for iOS devices. Not currently available. Using this field will generate an error.
    #[serde(rename = "ios_deep_link", skip_serializing_if = "Option::is_none")]
    pub ios_deep_link: Option<String>,
    /// Is original pin deleted?
    #[serde(rename = "is_pin_deleted", skip_serializing_if = "Option::is_none")]
    pub is_pin_deleted: Option<bool>,
    /// Is pin repinnable?
    #[serde(rename = "is_removable", skip_serializing_if = "Option::is_none")]
    pub is_removable: Option<bool>,
    /// Name of the ad - 255 chars max.
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    /// Pin ID.
    #[serde(rename = "pin_id", skip_serializing_if = "Option::is_none")]
    pub pin_id: Option<String>,
    #[serde(rename = "status", skip_serializing_if = "Option::is_none")]
    pub status: Option<crate::models::EntityStatus>,
    #[serde(rename = "tracking_urls", skip_serializing_if = "Option::is_none")]
    pub tracking_urls: Option<Box<crate::models::TrackingUrls>>,
    /// Tracking URL for ad impressions.
    #[serde(rename = "view_tracking_url", skip_serializing_if = "Option::is_none")]
    pub view_tracking_url: Option<String>,
    /// The ID of the advertiser that this ad belongs to.
    #[serde(rename = "ad_account_id", skip_serializing_if = "Option::is_none")]
    pub ad_account_id: Option<String>,
    /// ID of the ad campaign that contains this ad.
    #[serde(rename = "campaign_id", skip_serializing_if = "Option::is_none")]
    pub campaign_id: Option<String>,
    /// Destination URL template for all items within a collections drawer.
    #[serde(rename = "collection_items_destination_url_template", skip_serializing_if = "Option::is_none")]
    pub collection_items_destination_url_template: Option<String>,
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
    pub _type: Option<String>,
    /// Last update time. Unix timestamp in seconds.
    #[serde(rename = "updated_time", skip_serializing_if = "Option::is_none")]
    pub updated_time: Option<i32>,
    /// Ad summary status
    #[serde(rename = "summary_status", skip_serializing_if = "Option::is_none")]
    pub summary_status: Option<Box<crate::models::PinPromotionSummaryStatus>>,
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
            pin_id: None,
            status: None,
            tracking_urls: None: None,
            view_tracking_url: None,
            ad_account_id: None,
            campaign_id: None,
            collection_items_destination_url_template: None,
            created_time: None,
            id: None,
            rejected_reasons: None,
            rejection_labels: None,
            review_status: None,
            _type: None,
            updated_time: None,
            summary_status: None,
        }
    }
}

/// Ad creative type enum
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum CreativeType {
    #[serde(rename = "REGULAR")]
    REGULAR,
    #[serde(rename = "VIDEO")]
    VIDEO,
    #[serde(rename = "SHOPPING")]
    SHOPPING,
    #[serde(rename = "CAROUSEL")]
    CAROUSEL,
    #[serde(rename = "MAX_VIDEO")]
    MAXVIDEO,
    #[serde(rename = "SHOP_THE_PIN")]
    SHOPTHEPIN,
    #[serde(rename = "STORY")]
    STORY,
}

impl Default for CreativeType {
    fn default() -> CreativeType {
        Self::REGULAR
    }
}
/// Enum reason why the pin was rejected. Returned if <code>review_status</code> is \"REJECTED\".
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RejectedReasons {
    #[serde(rename = "HASHTAGS")]
    HASHTAGS,
    #[serde(rename = "PROMOTIONS_AND_PRICES")]
    PROMOTIONSANDPRICES,
    #[serde(rename = "TARGETING")]
    TARGETING,
    #[serde(rename = "LANDING_PAGE")]
    LANDINGPAGE,
    #[serde(rename = "CAPS_AND_SYMBOLS")]
    CAPSANDSYMBOLS,
    #[serde(rename = "SHOCKING")]
    SHOCKING,
    #[serde(rename = "WEIGHT_LOSS")]
    WEIGHTLOSS,
    #[serde(rename = "PROHIBITED_PRODUCT")]
    PROHIBITEDPRODUCT,
    #[serde(rename = "AUTHENTICITY")]
    AUTHENTICITY,
    #[serde(rename = "NUDITY")]
    NUDITY,
    #[serde(rename = "CONFUSING_DESIGN")]
    CONFUSINGDESIGN,
    #[serde(rename = "URGENCY")]
    URGENCY,
    #[serde(rename = "RATINGS")]
    RATINGS,
    #[serde(rename = "APP")]
    APP,
    #[serde(rename = "ALCOHOL")]
    ALCOHOL,
    #[serde(rename = "CONTESTS")]
    CONTESTS,
    #[serde(rename = "POLITICAL")]
    POLITICAL,
    #[serde(rename = "OTHER")]
    OTHER,
    #[serde(rename = "IMAGE")]
    IMAGE,
    #[serde(rename = "NAR")]
    NAR,
    #[serde(rename = "INCONSISTENT")]
    INCONSISTENT,
    #[serde(rename = "CLICKBAIT")]
    CLICKBAIT,
    #[serde(rename = "NO_DESCRIPTION")]
    NODESCRIPTION,
    #[serde(rename = "LOW_QUALITY")]
    LOWQUALITY,
    #[serde(rename = "EXAGGERATED_CLAIMS")]
    EXAGGERATEDCLAIMS,
    #[serde(rename = "PINTEREST_BRAND")]
    PINTERESTBRAND,
    #[serde(rename = "ALCOHOL_NO_SALE")]
    ALCOHOLNOSALE,
    #[serde(rename = "LANDING_PAGE_SPEED")]
    LANDINGPAGESPEED,
    #[serde(rename = "LANDING_PAGE_HARDWALL")]
    LANDINGPAGEHARDWALL,
    #[serde(rename = "LANDING_PAGE_BROKEN")]
    LANDINGPAGEBROKEN,
    #[serde(rename = "LANDING_PAGE_QUALITY")]
    LANDINGPAGEQUALITY,
    #[serde(rename = "OUT_OF_STOCK")]
    OUTOFSTOCK,
    #[serde(rename = "IMAGE_LOW_QUALITY")]
    IMAGELOWQUALITY,
    #[serde(rename = "IMAGE_BUSY")]
    IMAGEBUSY,
    #[serde(rename = "IMAGE_POORLY_EDITED")]
    IMAGEPOORLYEDITED,
    #[serde(rename = "IMAGE_BEFORE_AFTER")]
    IMAGEBEFOREAFTER,
    #[serde(rename = "UGC")]
    UGC,
    #[serde(rename = "FAKE_BUTTONS")]
    FAKEBUTTONS,
    #[serde(rename = "WEAPONS")]
    WEAPONS,
    #[serde(rename = "SENSITIVE")]
    SENSITIVE,
    #[serde(rename = "UNACCEPTABLE_BUSINESS")]
    UNACCEPTABLEBUSINESS,
    #[serde(rename = "SUSPICIOUS_CLAIMS")]
    SUSPICIOUSCLAIMS,
    #[serde(rename = "PHARMA")]
    PHARMA,
    #[serde(rename = "SUSPICIOUS_SUPPLEMENTS")]
    SUSPICIOUSSUPPLEMENTS,
    #[serde(rename = "ILLEGAL_RECREATIONAL_DRUG")]
    ILLEGALRECREATIONALDRUG,
    #[serde(rename = "LOW_QUALITY_LANDING_PAGE")]
    LOWQUALITYLANDINGPAGE,
    #[serde(rename = "RESTRICTED_HEALTHCARE")]
    RESTRICTEDHEALTHCARE,
    #[serde(rename = "INCONSISTENT_LANG_FR")]
    INCONSISTENTLANGFR,
}

impl Default for RejectedReasons {
    fn default() -> RejectedReasons {
        Self::HASHTAGS
    }
}
/// Ad review status
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ReviewStatus {
    #[serde(rename = "OTHER")]
    OTHER,
    #[serde(rename = "PENDING")]
    PENDING,
    #[serde(rename = "REJECTED")]
    REJECTED,
    #[serde(rename = "APPROVED")]
    APPROVED,
}

impl Default for ReviewStatus {
    fn default() -> ReviewStatus {
        Self::OTHER
    }
}
