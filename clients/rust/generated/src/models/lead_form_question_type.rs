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

/// LeadFormQuestionType : Lead form question type
/// Lead form question type
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum LeadFormQuestionType {
    #[serde(rename = "CUSTOM")]
    Custom,
    #[serde(rename = "FULL_NAME")]
    FullName,
    #[serde(rename = "FIRST_NAME")]
    FirstName,
    #[serde(rename = "LAST_NAME")]
    LastName,
    #[serde(rename = "EMAIL")]
    Email,
    #[serde(rename = "PHONE_NUMBER")]
    PhoneNumber,
    #[serde(rename = "ZIP_CODE")]
    ZipCode,
    #[serde(rename = "AGE")]
    Age,
    #[serde(rename = "GENDER")]
    Gender,
    #[serde(rename = "CITY")]
    City,
    #[serde(rename = "COUNTRY")]
    Country,
    #[serde(rename = "PREFERRED_CONTACT_METHOD")]
    PreferredContactMethod,
    #[serde(rename = "STATE_PROVINCE")]
    StateProvince,
    #[serde(rename = "ADDRESS")]
    Address,
    #[serde(rename = "DATE_OF_BIRTH")]
    DateOfBirth,

}

impl ToString for LeadFormQuestionType {
    fn to_string(&self) -> String {
        match self {
            Self::Custom => String::from("CUSTOM"),
            Self::FullName => String::from("FULL_NAME"),
            Self::FirstName => String::from("FIRST_NAME"),
            Self::LastName => String::from("LAST_NAME"),
            Self::Email => String::from("EMAIL"),
            Self::PhoneNumber => String::from("PHONE_NUMBER"),
            Self::ZipCode => String::from("ZIP_CODE"),
            Self::Age => String::from("AGE"),
            Self::Gender => String::from("GENDER"),
            Self::City => String::from("CITY"),
            Self::Country => String::from("COUNTRY"),
            Self::PreferredContactMethod => String::from("PREFERRED_CONTACT_METHOD"),
            Self::StateProvince => String::from("STATE_PROVINCE"),
            Self::Address => String::from("ADDRESS"),
            Self::DateOfBirth => String::from("DATE_OF_BIRTH"),
        }
    }
}

impl Default for LeadFormQuestionType {
    fn default() -> LeadFormQuestionType {
        Self::Custom
    }
}

