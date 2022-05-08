/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://openapi-generator.tech
 */

/// CatalogsProductGroupType : Catalog product group type

/// Catalog product group type
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum CatalogsProductGroupType {
    #[serde(rename = "MERCHANT_CREATED")]
    MERCHANTCREATED,
    #[serde(rename = "ALL_PRODUCTS")]
    ALLPRODUCTS,
    #[serde(rename = "BEST_DEALS")]
    BESTDEALS,
    #[serde(rename = "PINNER_FAVORITES")]
    PINNERFAVORITES,
    #[serde(rename = "TOP_SELLERS")]
    TOPSELLERS,
    #[serde(rename = "BACK_IN_STOCK")]
    BACKINSTOCK,
    #[serde(rename = "NEW_ARRIVALS")]
    NEWARRIVALS,

}

impl ToString for CatalogsProductGroupType {
    fn to_string(&self) -> String {
        match self {
            Self::MERCHANTCREATED => String::from("MERCHANT_CREATED"),
            Self::ALLPRODUCTS => String::from("ALL_PRODUCTS"),
            Self::BESTDEALS => String::from("BEST_DEALS"),
            Self::PINNERFAVORITES => String::from("PINNER_FAVORITES"),
            Self::TOPSELLERS => String::from("TOP_SELLERS"),
            Self::BACKINSTOCK => String::from("BACK_IN_STOCK"),
            Self::NEWARRIVALS => String::from("NEW_ARRIVALS"),
        }
    }
}

impl Default for CatalogsProductGroupType {
    fn default() -> CatalogsProductGroupType {
        Self::MERCHANTCREATED
    }
}



