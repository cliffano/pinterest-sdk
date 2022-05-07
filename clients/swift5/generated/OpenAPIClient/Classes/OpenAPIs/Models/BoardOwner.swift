//
// BoardOwner.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct BoardOwner: Codable, JSONEncodable, Hashable {

    public var username: String?

    public init(username: String? = nil) {
        self.username = username
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case username
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(username, forKey: .username)
    }
}

