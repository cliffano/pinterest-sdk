//
// CatalogsItemsCreateBatchRequest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Request object to create catalogs items */
public struct CatalogsItemsCreateBatchRequest: Codable, JSONEncodable, Hashable {

    public var country: Country
    public var language: Language
    public var operation: BatchOperation
    /** Array with catalogs items */
    public var items: [ItemCreateBatchRecord]

    public init(country: Country, language: Language, operation: BatchOperation, items: [ItemCreateBatchRecord]) {
        self.country = country
        self.language = language
        self.operation = operation
        self.items = items
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case country
        case language
        case operation
        case items
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(country, forKey: .country)
        try container.encode(language, forKey: .language)
        try container.encode(operation, forKey: .operation)
        try container.encode(items, forKey: .items)
    }
}

