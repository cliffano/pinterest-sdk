//
// AdAccountCreateRequest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AdAccountCreateRequest: Codable, JSONEncodable, Hashable {

    static let nameRule = StringRule(minLength: nil, maxLength: 256, pattern: nil)
    static let ownerUserIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    public var country: Country?
    /** Ad Account name. */
    public var name: String?
    /** Advertiser's owning user ID. */
    public var ownerUserId: String?

    public init(country: Country? = nil, name: String? = nil, ownerUserId: String? = nil) {
        self.country = country
        self.name = name
        self.ownerUserId = ownerUserId
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case country
        case name
        case ownerUserId = "owner_user_id"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(country, forKey: .country)
        try container.encodeIfPresent(name, forKey: .name)
        try container.encodeIfPresent(ownerUserId, forKey: .ownerUserId)
    }
}

