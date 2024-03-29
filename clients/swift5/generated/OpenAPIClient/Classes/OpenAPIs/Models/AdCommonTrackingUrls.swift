//
// AdCommonTrackingUrls.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AdCommonTrackingUrls: Codable, JSONEncodable, Hashable {

    public var impression: [String]?
    public var click: [String]?
    public var engagement: [String]?
    public var buyableButton: [String]?
    public var audienceVerification: [String]?

    public init(impression: [String]? = nil, click: [String]? = nil, engagement: [String]? = nil, buyableButton: [String]? = nil, audienceVerification: [String]? = nil) {
        self.impression = impression
        self.click = click
        self.engagement = engagement
        self.buyableButton = buyableButton
        self.audienceVerification = audienceVerification
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case impression
        case click
        case engagement
        case buyableButton = "buyable_button"
        case audienceVerification = "audience_verification"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(impression, forKey: .impression)
        try container.encodeIfPresent(click, forKey: .click)
        try container.encodeIfPresent(engagement, forKey: .engagement)
        try container.encodeIfPresent(buyableButton, forKey: .buyableButton)
        try container.encodeIfPresent(audienceVerification, forKey: .audienceVerification)
    }
}

