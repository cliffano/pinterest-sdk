//
// AudienceCommon.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AudienceCommon: Codable, JSONEncodable, Hashable {

    static let adAccountIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    /** Ad account ID. */
    public var adAccountId: String?
    /** Audience name. */
    public var name: String?
    public var rule: AudienceRule?

    public init(adAccountId: String? = nil, name: String? = nil, rule: AudienceRule? = nil) {
        self.adAccountId = adAccountId
        self.name = name
        self.rule = rule
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case adAccountId = "ad_account_id"
        case name
        case rule
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(adAccountId, forKey: .adAccountId)
        try container.encodeIfPresent(name, forKey: .name)
        try container.encodeIfPresent(rule, forKey: .rule)
    }
}
