//
// ProductType3Filter.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct ProductType3Filter: Codable, JSONEncodable, Hashable {

    public var pRODUCTTYPE3: CatalogsProductGroupMultipleStringListCriteria

    public init(pRODUCTTYPE3: CatalogsProductGroupMultipleStringListCriteria) {
        self.pRODUCTTYPE3 = pRODUCTTYPE3
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case pRODUCTTYPE3 = "PRODUCT_TYPE_3"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(pRODUCTTYPE3, forKey: .pRODUCTTYPE3)
    }
}

