//
// CatalogsFeedCredentials.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Use this if your feed file requires username and password. */
public struct CatalogsFeedCredentials: Codable, JSONEncodable, Hashable {

    /** The required password for downloading a feed. */
    public var password: String
    /** The required username for downloading a feed. */
    public var username: String

    public init(password: String, username: String) {
        self.password = password
        self.username = username
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case password
        case username
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(password, forKey: .password)
        try container.encode(username, forKey: .username)
    }
}

