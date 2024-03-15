//
// PinsList200Response.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct PinsList200Response: Codable, JSONEncodable, Hashable {

    public var items: [Pin]
    public var bookmark: String?

    public init(items: [Pin], bookmark: String? = nil) {
        self.items = items
        self.bookmark = bookmark
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case items
        case bookmark
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(items, forKey: .items)
        try container.encodeIfPresent(bookmark, forKey: .bookmark)
    }
}
