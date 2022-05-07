//
// CatalogsProductGroupType.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Catalog product group type */
public enum CatalogsProductGroupType: String, Codable, CaseIterable {
    case merchantCreated = "MERCHANT_CREATED"
    case allProducts = "ALL_PRODUCTS"
    case bestDeals = "BEST_DEALS"
    case pinnerFavorites = "PINNER_FAVORITES"
    case topSellers = "TOP_SELLERS"
    case backInStock = "BACK_IN_STOCK"
    case newArrivals = "NEW_ARRIVALS"
}
