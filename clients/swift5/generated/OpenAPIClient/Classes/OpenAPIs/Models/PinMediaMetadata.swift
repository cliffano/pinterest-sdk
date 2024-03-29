//
// PinMediaMetadata.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct PinMediaMetadata: Codable, JSONEncodable, Hashable {

    public var itemType: String?
    public var title: String?
    public var description: String?
    public var link: String?
    public var images: ImageMetadataImages?
    public var coverImageUrl: String?
    /** Video url (720p). </p><strong>Note:</strong> This field is limited and not available to all apps. */
    public var videoUrl: String?
    /** Duration (in milliseconds) */
    public var duration: Double?
    /** Height (in pixels) */
    public var height: Int?
    /** Width (in pixels) */
    public var width: Int?

    public init(itemType: String? = nil, title: String? = nil, description: String? = nil, link: String? = nil, images: ImageMetadataImages? = nil, coverImageUrl: String? = nil, videoUrl: String? = nil, duration: Double? = nil, height: Int? = nil, width: Int? = nil) {
        self.itemType = itemType
        self.title = title
        self.description = description
        self.link = link
        self.images = images
        self.coverImageUrl = coverImageUrl
        self.videoUrl = videoUrl
        self.duration = duration
        self.height = height
        self.width = width
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case itemType = "item_type"
        case title
        case description
        case link
        case images
        case coverImageUrl = "cover_image_url"
        case videoUrl = "video_url"
        case duration
        case height
        case width
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(itemType, forKey: .itemType)
        try container.encodeIfPresent(title, forKey: .title)
        try container.encodeIfPresent(description, forKey: .description)
        try container.encodeIfPresent(link, forKey: .link)
        try container.encodeIfPresent(images, forKey: .images)
        try container.encodeIfPresent(coverImageUrl, forKey: .coverImageUrl)
        try container.encodeIfPresent(videoUrl, forKey: .videoUrl)
        try container.encodeIfPresent(duration, forKey: .duration)
        try container.encodeIfPresent(height, forKey: .height)
        try container.encodeIfPresent(width, forKey: .width)
    }
}

