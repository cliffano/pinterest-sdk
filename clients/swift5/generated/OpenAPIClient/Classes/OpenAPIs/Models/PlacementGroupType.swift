//
// PlacementGroupType.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Campaign placement group type */
public enum PlacementGroupType: String, Codable, CaseIterable {
    case all = "ALL"
    case search = "SEARCH"
    case browse = "BROWSE"
    case other = "OTHER"
}
