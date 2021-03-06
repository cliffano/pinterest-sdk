//
// ProductType1Filter.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct ProductType1Filter: Codable, JSONEncodable, Hashable {

    public var pRODUCTTYPE1: CatalogsProductGroupMultipleStringListCriteria

    public init(pRODUCTTYPE1: CatalogsProductGroupMultipleStringListCriteria) {
        self.pRODUCTTYPE1 = pRODUCTTYPE1
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case pRODUCTTYPE1 = "PRODUCT_TYPE_1"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(pRODUCTTYPE1, forKey: .pRODUCTTYPE1)
    }
}

