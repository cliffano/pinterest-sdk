//
// PinMediaWithVideos.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Pin with multiple videos. */
public struct PinMediaWithVideos: Codable, JSONEncodable, Hashable {

    public var mediaType: String?
    public var items: [VideoMetadata]?

    public init(mediaType: String? = nil, items: [VideoMetadata]? = nil) {
        self.mediaType = mediaType
        self.items = items
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case mediaType = "media_type"
        case items
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(mediaType, forKey: .mediaType)
        try container.encodeIfPresent(items, forKey: .items)
    }
}
