//
// CatalogsProductGroupFiltersAnyOf.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CatalogsProductGroupFiltersAnyOf: Codable, JSONEncodable, Hashable {

    public var anyOf: [CatalogsProductGroupFilterKeys]?

    public init(anyOf: [CatalogsProductGroupFilterKeys]? = nil) {
        self.anyOf = anyOf
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case anyOf = "any_of"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(anyOf, forKey: .anyOf)
    }
}

