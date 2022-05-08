//
// PinMediaWithImage.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Pin with image. */
public struct PinMediaWithImage: Codable, JSONEncodable, Hashable {

    public var images: [String: ImageDetails]?
    public var mediaType: String?

    public init(images: [String: ImageDetails]? = nil, mediaType: String? = nil) {
        self.images = images
        self.mediaType = mediaType
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case images
        case mediaType = "media_type"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(images, forKey: .images)
        try container.encodeIfPresent(mediaType, forKey: .mediaType)
    }
}
