//
// AdAccountsCountryResponseData.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AdAccountsCountryResponseData: Codable, JSONEncodable, Hashable {

    public var code: AdCountry?
    /** Country currency. */
    public var currency: String?
    /** Country index */
    public var index: Double?
    /** Country name */
    public var name: String?

    public init(code: AdCountry? = nil, currency: String? = nil, index: Double? = nil, name: String? = nil) {
        self.code = code
        self.currency = currency
        self.index = index
        self.name = name
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case code
        case currency
        case index
        case name
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(code, forKey: .code)
        try container.encodeIfPresent(currency, forKey: .currency)
        try container.encodeIfPresent(index, forKey: .index)
        try container.encodeIfPresent(name, forKey: .name)
    }
}

