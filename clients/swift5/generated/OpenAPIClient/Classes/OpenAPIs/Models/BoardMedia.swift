//
// BoardMedia.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Board media. */
public struct BoardMedia: Codable, JSONEncodable, Hashable {

    /** Board cover image. */
    public var imageCoverUrl: String?
    /** Board pin thumbnail urls. */
    public var pinThumbnailUrls: [String]?

    public init(imageCoverUrl: String? = nil, pinThumbnailUrls: [String]? = nil) {
        self.imageCoverUrl = imageCoverUrl
        self.pinThumbnailUrls = pinThumbnailUrls
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case imageCoverUrl = "image_cover_url"
        case pinThumbnailUrls = "pin_thumbnail_urls"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(imageCoverUrl, forKey: .imageCoverUrl)
        try container.encodeIfPresent(pinThumbnailUrls, forKey: .pinThumbnailUrls)
    }
}

