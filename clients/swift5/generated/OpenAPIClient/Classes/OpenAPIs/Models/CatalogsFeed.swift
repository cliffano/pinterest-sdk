//
// CatalogsFeed.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Catalogs Feed object */
public enum CatalogsFeed: Codable, JSONEncodable, Hashable {
    case typeCatalogsHotelFeed(CatalogsHotelFeed)
    case typeCatalogsRetailFeed(CatalogsRetailFeed)

    public func encode(to encoder: Encoder) throws {
        var container = encoder.singleValueContainer()
        switch self {
        case .typeCatalogsHotelFeed(let value):
            try container.encode(value)
        case .typeCatalogsRetailFeed(let value):
            try container.encode(value)
        }
    }

    public init(from decoder: Decoder) throws {
        let container = try decoder.singleValueContainer()
        if let value = try? container.decode(CatalogsHotelFeed.self) {
            self = .typeCatalogsHotelFeed(value)
        } else if let value = try? container.decode(CatalogsRetailFeed.self) {
            self = .typeCatalogsRetailFeed(value)
        } else {
            throw DecodingError.typeMismatch(Self.Type.self, .init(codingPath: decoder.codingPath, debugDescription: "Unable to decode instance of CatalogsFeed"))
        }
    }
}
