//
// AudienceDefinition.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Queryable audience representation. */
public struct AudienceDefinition: Codable, JSONEncodable, Hashable {

    /** Generation date */
    public var date: String?
    /** Generated audience type to request. */
    public var type: String?
    /** Generated audience scope to request. */
    public var scope: String?

    public init(date: String? = nil, type: String? = nil, scope: String? = nil) {
        self.date = date
        self.type = type
        self.scope = scope
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case date
        case type
        case scope
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(date, forKey: .date)
        try container.encodeIfPresent(type, forKey: .type)
        try container.encodeIfPresent(scope, forKey: .scope)
    }
}

