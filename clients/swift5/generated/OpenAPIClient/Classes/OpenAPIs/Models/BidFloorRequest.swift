//
// BidFloorRequest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct BidFloorRequest: Codable, JSONEncodable, Hashable {

    public var bidFloorSpecs: [BidFloorSpec]
    public var targetingSpec: TargetingSpec?

    public init(bidFloorSpecs: [BidFloorSpec], targetingSpec: TargetingSpec? = nil) {
        self.bidFloorSpecs = bidFloorSpecs
        self.targetingSpec = targetingSpec
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case bidFloorSpecs = "bid_floor_specs"
        case targetingSpec = "targeting_spec"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(bidFloorSpecs, forKey: .bidFloorSpecs)
        try container.encodeIfPresent(targetingSpec, forKey: .targetingSpec)
    }
}

