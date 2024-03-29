//
// TargetingTypeFilter.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct TargetingTypeFilter: Codable, JSONEncodable, Hashable {

    /** List of targeting types. Requires `level` to be a value ending in `_TARGETING`. */
    public var targetingTypes: [AdsAnalyticsTargetingType]?

    public init(targetingTypes: [AdsAnalyticsTargetingType]? = nil) {
        self.targetingTypes = targetingTypes
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case targetingTypes = "targeting_types"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(targetingTypes, forKey: .targetingTypes)
    }
}

