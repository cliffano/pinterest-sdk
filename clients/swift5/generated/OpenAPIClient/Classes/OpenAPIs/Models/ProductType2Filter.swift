//
// ProductType2Filter.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct ProductType2Filter: Codable, JSONEncodable, Hashable {

    public var pRODUCTTYPE2: CatalogsProductGroupMultipleStringListCriteria

    public init(pRODUCTTYPE2: CatalogsProductGroupMultipleStringListCriteria) {
        self.pRODUCTTYPE2 = pRODUCTTYPE2
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case pRODUCTTYPE2 = "PRODUCT_TYPE_2"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(pRODUCTTYPE2, forKey: .pRODUCTTYPE2)
    }
}

