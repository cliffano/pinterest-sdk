//
// UpdateMaskFieldType.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** The field types supported by the update mask */
public enum UpdateMaskFieldType: String, Codable, CaseIterable {
    case adLink = "ad_link"
    case adult = "adult"
    case ageGroup = "age_group"
    case availability = "availability"
    case averageReviewRating = "average_review_rating"
    case brand = "brand"
    case checkoutEnabled = "checkout_enabled"
    case color = "color"
    case condition = "condition"
    case customLabel0 = "custom_label_0"
    case customLabel1 = "custom_label_1"
    case customLabel2 = "custom_label_2"
    case customLabel3 = "custom_label_3"
    case customLabel4 = "custom_label_4"
    case description = "description"
    case freeShippingLabel = "free_shipping_label"
    case freeShippingLimit = "free_shipping_limit"
    case gender = "gender"
    case googleProductCategory = "google_product_category"
    case gtin = "gtin"
    case itemGroupId = "item_group_id"
    case lastUpdatedTime = "last_updated_time"
    case link = "link"
    case material = "material"
    case minAdPrice = "min_ad_price"
    case mpn = "mpn"
    case numberOfRatings = "number_of_ratings"
    case numberOfReviews = "number_of_reviews"
    case pattern = "pattern"
    case price = "price"
    case productType = "product_type"
    case salePrice = "sale_price"
    case shipping = "shipping"
    case shippingHeight = "shipping_height"
    case shippingWeight = "shipping_weight"
    case shippingWidth = "shipping_width"
    case size = "size"
    case sizeSystem = "size_system"
    case sizeType = "size_type"
    case tax = "tax"
    case title = "title"
    case variantNames = "variant_names"
    case variantValues = "variant_values"
}
