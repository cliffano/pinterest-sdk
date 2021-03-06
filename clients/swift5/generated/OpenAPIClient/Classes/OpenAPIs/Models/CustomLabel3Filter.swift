//
// CustomLabel3Filter.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CustomLabel3Filter: Codable, JSONEncodable, Hashable {

    public var cUSTOMLABEL3: CatalogsProductGroupMultipleStringCriteria

    public init(cUSTOMLABEL3: CatalogsProductGroupMultipleStringCriteria) {
        self.cUSTOMLABEL3 = cUSTOMLABEL3
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case cUSTOMLABEL3 = "CUSTOM_LABEL_3"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(cUSTOMLABEL3, forKey: .cUSTOMLABEL3)
    }
}

