//
// TermsOfService.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct TermsOfService: Codable, JSONEncodable, Hashable {

    /** The ID of the terms of service */
    public var id: String?
    /** The terms of service content */
    public var html: String?
    /** Whether the ad account has accepted terms of service. */
    public var hasAccepted: Bool?
    /** The ID of the ad account. */
    public var adAccountId: String?

    public init(id: String? = nil, html: String? = nil, hasAccepted: Bool? = nil, adAccountId: String? = nil) {
        self.id = id
        self.html = html
        self.hasAccepted = hasAccepted
        self.adAccountId = adAccountId
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case id
        case html
        case hasAccepted = "has_accepted"
        case adAccountId = "ad_account_id"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(id, forKey: .id)
        try container.encodeIfPresent(html, forKey: .html)
        try container.encodeIfPresent(hasAccepted, forKey: .hasAccepted)
        try container.encodeIfPresent(adAccountId, forKey: .adAccountId)
    }
}

