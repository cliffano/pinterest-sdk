//
// PinMediaSourceImagesURL.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Multiple images urls-based media source */
public struct PinMediaSourceImagesURL: Codable, JSONEncodable, Hashable {

    public enum SourceType: String, Codable, CaseIterable {
        case multipleImageUrls = "multiple_image_urls"
    }
    static let indexRule = NumericRule<Int>(minimum: 0, exclusiveMinimum: false, maximum: nil, exclusiveMaximum: false, multipleOf: nil)
    public var sourceType: SourceType?
    /** Array with image objects. */
    public var items: [PinMediaSourceImagesURLItemsInner]
    public var index: Int?

    public init(sourceType: SourceType? = nil, items: [PinMediaSourceImagesURLItemsInner], index: Int? = nil) {
        self.sourceType = sourceType
        self.items = items
        self.index = index
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case sourceType = "source_type"
        case items
        case index
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(sourceType, forKey: .sourceType)
        try container.encode(items, forKey: .items)
        try container.encodeIfPresent(index, forKey: .index)
    }
}

