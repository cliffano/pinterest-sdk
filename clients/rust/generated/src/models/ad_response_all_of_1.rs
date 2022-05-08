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
pub struct AdResponseAllOf1 {
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

impl AdResponseAllOf1 {
    pub fn new() -> AdResponseAllOf1 {
        AdResponseAllOf1 {
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
