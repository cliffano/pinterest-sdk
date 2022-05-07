//
// ItemIdFilter.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct ItemIdFilter: Codable, JSONEncodable, Hashable {

    public var ITEM_ID: CatalogsProductGroupCurrencyCriteria

    public init(ITEM_ID: CatalogsProductGroupCurrencyCriteria) {
        self.ITEM_ID = ITEM_ID
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case ITEM_ID
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(ITEM_ID, forKey: .ITEM_ID)
    }
}

