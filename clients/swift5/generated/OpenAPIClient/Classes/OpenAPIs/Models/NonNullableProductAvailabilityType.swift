//
// NonNullableProductAvailabilityType.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Product availability. */
public enum NonNullableProductAvailabilityType: String, Codable, CaseIterable {
    case inStock = "IN_STOCK"
    case outOfStock = "OUT_OF_STOCK"
    case preorder = "PREORDER"
}