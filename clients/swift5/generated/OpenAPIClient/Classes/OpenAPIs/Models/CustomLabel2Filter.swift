//
// CustomLabel2Filter.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CustomLabel2Filter: Codable, JSONEncodable, Hashable {

    public var cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria

    public init(cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria) {
        self.cUSTOMLABEL2 = cUSTOMLABEL2
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case cUSTOMLABEL2 = "CUSTOM_LABEL_2"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(cUSTOMLABEL2, forKey: .cUSTOMLABEL2)
    }
}
