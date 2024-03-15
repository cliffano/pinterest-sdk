//
// LinkedBusiness.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct LinkedBusiness: Codable, JSONEncodable, Hashable {

    /** Username */
    public var username: String?
    /** image_small_url */
    public var imageSmallUrl: String?
    /** image_medium_url */
    public var imageMediumUrl: String?
    /** image_large_url */
    public var imageLargeUrl: String?
    /** image_xlarge_url */
    public var imageXlargeUrl: String?

    public init(username: String? = nil, imageSmallUrl: String? = nil, imageMediumUrl: String? = nil, imageLargeUrl: String? = nil, imageXlargeUrl: String? = nil) {
        self.username = username
        self.imageSmallUrl = imageSmallUrl
        self.imageMediumUrl = imageMediumUrl
        self.imageLargeUrl = imageLargeUrl
        self.imageXlargeUrl = imageXlargeUrl
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case username
        case imageSmallUrl = "image_small_url"
        case imageMediumUrl = "image_medium_url"
        case imageLargeUrl = "image_large_url"
        case imageXlargeUrl = "image_xlarge_url"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(username, forKey: .username)
        try container.encodeIfPresent(imageSmallUrl, forKey: .imageSmallUrl)
        try container.encodeIfPresent(imageMediumUrl, forKey: .imageMediumUrl)
        try container.encodeIfPresent(imageLargeUrl, forKey: .imageLargeUrl)
        try container.encodeIfPresent(imageXlargeUrl, forKey: .imageXlargeUrl)
    }
}

