//
// TargetingSpecSHOPPINGRETARGETING.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct TargetingSpecSHOPPINGRETARGETING: Codable, JSONEncodable, Hashable {

    /** Number of days ago to start lookback timeframe for dynamic retargeting */
    public var lookbackWindow: Int?
    /** Event types to target for dynamic retargeting */
    public var tagTypes: [Int]?
    /** Number of days ago to stop lookback timeframe for dynamic retargeting */
    public var exclusionWindow: Int?

    public init(lookbackWindow: Int? = nil, tagTypes: [Int]? = nil, exclusionWindow: Int? = nil) {
        self.lookbackWindow = lookbackWindow
        self.tagTypes = tagTypes
        self.exclusionWindow = exclusionWindow
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case lookbackWindow = "lookback_window"
        case tagTypes = "tag_types"
        case exclusionWindow = "exclusion_window"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(lookbackWindow, forKey: .lookbackWindow)
        try container.encodeIfPresent(tagTypes, forKey: .tagTypes)
        try container.encodeIfPresent(exclusionWindow, forKey: .exclusionWindow)
    }
}

