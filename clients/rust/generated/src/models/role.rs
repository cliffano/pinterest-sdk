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

/// Role : An internal role type used on business access, EMPLOYEE, ADMIN.
/// An internal role type used on business access, EMPLOYEE, ADMIN.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Role {
    #[serde(rename = "UNKNOWN")]
    Unknown,
    #[serde(rename = "OWNER")]
    Owner,
    #[serde(rename = "ADMIN")]
    Admin,
    #[serde(rename = "ANALYST")]
    Analyst,
    #[serde(rename = "SOS_READER")]
    SosReader,
    #[serde(rename = "FINANCE_MANAGER")]
    FinanceManager,
    #[serde(rename = "AUDIENCE_MANAGER")]
    AudienceManager,
    #[serde(rename = "CAMPAIGN_MANAGER")]
    CampaignManager,
    #[serde(rename = "CATALOGS_MANAGER")]
    CatalogsManager,
    #[serde(rename = "RESTRICTED_OWNER")]
    RestrictedOwner,
    #[serde(rename = "PROFILE_MANAGER")]
    ProfileManager,
    #[serde(rename = "PROFILE_PUBLISHER")]
    ProfilePublisher,
    #[serde(rename = "RESOURCE_PINNER_LIST_OWNER")]
    ResourcePinnerListOwner,
    #[serde(rename = "RESOURCE_PINNER_LIST_READER")]
    ResourcePinnerListReader,
    #[serde(rename = "BIZ_PINNER_LIST_SHARER")]
    BizPinnerListSharer,
    #[serde(rename = "RESOURCE_CONVERSION_TAGS_READER")]
    ResourceConversionTagsReader,

}

impl ToString for Role {
    fn to_string(&self) -> String {
        match self {
            Self::Unknown => String::from("UNKNOWN"),
            Self::Owner => String::from("OWNER"),
            Self::Admin => String::from("ADMIN"),
            Self::Analyst => String::from("ANALYST"),
            Self::SosReader => String::from("SOS_READER"),
            Self::FinanceManager => String::from("FINANCE_MANAGER"),
            Self::AudienceManager => String::from("AUDIENCE_MANAGER"),
            Self::CampaignManager => String::from("CAMPAIGN_MANAGER"),
            Self::CatalogsManager => String::from("CATALOGS_MANAGER"),
            Self::RestrictedOwner => String::from("RESTRICTED_OWNER"),
            Self::ProfileManager => String::from("PROFILE_MANAGER"),
            Self::ProfilePublisher => String::from("PROFILE_PUBLISHER"),
            Self::ResourcePinnerListOwner => String::from("RESOURCE_PINNER_LIST_OWNER"),
            Self::ResourcePinnerListReader => String::from("RESOURCE_PINNER_LIST_READER"),
            Self::BizPinnerListSharer => String::from("BIZ_PINNER_LIST_SHARER"),
            Self::ResourceConversionTagsReader => String::from("RESOURCE_CONVERSION_TAGS_READER"),
        }
    }
}

impl Default for Role {
    fn default() -> Role {
        Self::Unknown
    }
}

