//
// ItemDeleteDiscontinuedBatchRecord.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Object describing an item batch record to discontinue items */
public struct ItemDeleteDiscontinuedBatchRecord: Codable, JSONEncodable, Hashable {

    /** The catalog item id in the merchant namespace */
    public var itemId: String?

    public init(itemId: String? = nil) {
        self.itemId = itemId
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case itemId = "item_id"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(itemId, forKey: .itemId)
    }
}

