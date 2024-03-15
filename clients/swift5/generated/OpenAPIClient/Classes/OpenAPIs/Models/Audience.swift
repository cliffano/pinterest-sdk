//
// Audience.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct Audience: Codable, JSONEncodable, Hashable {

    static let adAccountIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    static let idRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    /** Ad account ID. */
    public var adAccountId: String?
    /** Audience ID. */
    public var id: String?
    /** Audience name. */
    public var name: String?
    /** <a href=\"/docs/reference/glossary/#Audience Types\">Audience types</a>: ACTALIKE, ENGAGEMENT, CUSTOMER_LIST and VISITOR */
    public var audienceType: String?
    /** Audience description. */
    public var description: String?
    public var rule: AudienceRule?
    /** Audience size. */
    public var size: Int?
    /** Audience status. READY, INITIALIZING, TOO_SMALL - Each audience list needs to have at least 100 people with Pinterest accounts before you can start using it. */
    public var status: String?
    /** Always \"audience\". */
    public var type: String?
    /** Creation time. Unix timestamp in seconds. */
    public var createdTimestamp: Int?
    /** Last update time. Unix timestamp in seconds. */
    public var updatedTimestamp: Int?

    public init(adAccountId: String? = nil, id: String? = nil, name: String? = nil, audienceType: String? = nil, description: String? = nil, rule: AudienceRule? = nil, size: Int? = nil, status: String? = nil, type: String? = nil, createdTimestamp: Int? = nil, updatedTimestamp: Int? = nil) {
        self.adAccountId = adAccountId
        self.id = id
        self.name = name
        self.audienceType = audienceType
        self.description = description
        self.rule = rule
        self.size = size
        self.status = status
        self.type = type
        self.createdTimestamp = createdTimestamp
        self.updatedTimestamp = updatedTimestamp
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case adAccountId = "ad_account_id"
        case id
        case name
        case audienceType = "audience_type"
        case description
        case rule
        case size
        case status
        case type
        case createdTimestamp = "created_timestamp"
        case updatedTimestamp = "updated_timestamp"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(adAccountId, forKey: .adAccountId)
        try container.encodeIfPresent(id, forKey: .id)
        try container.encodeIfPresent(name, forKey: .name)
        try container.encodeIfPresent(audienceType, forKey: .audienceType)
        try container.encodeIfPresent(description, forKey: .description)
        try container.encodeIfPresent(rule, forKey: .rule)
        try container.encodeIfPresent(size, forKey: .size)
        try container.encodeIfPresent(status, forKey: .status)
        try container.encodeIfPresent(type, forKey: .type)
        try container.encodeIfPresent(createdTimestamp, forKey: .createdTimestamp)
        try container.encodeIfPresent(updatedTimestamp, forKey: .updatedTimestamp)
    }
}

