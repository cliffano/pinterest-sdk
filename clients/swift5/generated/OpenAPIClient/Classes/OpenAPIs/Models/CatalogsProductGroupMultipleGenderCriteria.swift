//
// CatalogsProductGroupMultipleGenderCriteria.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CatalogsProductGroupMultipleGenderCriteria: Codable, JSONEncodable, Hashable {

    public var values: [Gender]
    public var negated: Bool? = false

    public init(values: [Gender], negated: Bool? = false) {
        self.values = values
        self.negated = negated
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case values
        case negated
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(values, forKey: .values)
        try container.encodeIfPresent(negated, forKey: .negated)
    }
}

