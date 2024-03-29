//
// CatalogsHotelProductGroupFilters.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Object holding a group of filters for a hotel product group */
public struct CatalogsHotelProductGroupFilters: Codable, JSONEncodable, Hashable {

    public var anyOf: [CatalogsHotelProductGroupFilterKeys]
    public var allOf: [CatalogsHotelProductGroupFilterKeys]

    public init(anyOf: [CatalogsHotelProductGroupFilterKeys], allOf: [CatalogsHotelProductGroupFilterKeys]) {
        self.anyOf = anyOf
        self.allOf = allOf
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case anyOf = "any_of"
        case allOf = "all_of"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(anyOf, forKey: .anyOf)
        try container.encode(allOf, forKey: .allOf)
    }
}

