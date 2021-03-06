//
// AvailabilityFilter.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AvailabilityFilter: Codable, JSONEncodable, Hashable {

    public var AVAILABILITY: CatalogsProductGroupMultipleStringCriteria

    public init(AVAILABILITY: CatalogsProductGroupMultipleStringCriteria) {
        self.AVAILABILITY = AVAILABILITY
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case AVAILABILITY
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(AVAILABILITY, forKey: .AVAILABILITY)
    }
}

