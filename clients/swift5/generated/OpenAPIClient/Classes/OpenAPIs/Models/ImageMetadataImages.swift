//
// ImageMetadataImages.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct ImageMetadataImages: Codable, JSONEncodable, Hashable {

    public var _150x150: ImageDetails?
    public var _400x300: ImageDetails?
    public var _600x: ImageDetails?
    public var _1200x: ImageDetails?

    public init(_150x150: ImageDetails? = nil, _400x300: ImageDetails? = nil, _600x: ImageDetails? = nil, _1200x: ImageDetails? = nil) {
        self._150x150 = _150x150
        self._400x300 = _400x300
        self._600x = _600x
        self._1200x = _1200x
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case _150x150 = "150x150"
        case _400x300 = "400x300"
        case _600x = "600x"
        case _1200x = "1200x"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(_150x150, forKey: ._150x150)
        try container.encodeIfPresent(_400x300, forKey: ._400x300)
        try container.encodeIfPresent(_600x, forKey: ._600x)
        try container.encodeIfPresent(_1200x, forKey: ._1200x)
    }
}
