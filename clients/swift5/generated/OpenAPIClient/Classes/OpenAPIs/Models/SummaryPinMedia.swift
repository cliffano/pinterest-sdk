//
// SummaryPinMedia.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct SummaryPinMedia: Codable, JSONEncodable, Hashable {

    public var mediaType: String?

    public init(mediaType: String? = nil) {
        self.mediaType = mediaType
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case mediaType = "media_type"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(mediaType, forKey: .mediaType)
    }
}
