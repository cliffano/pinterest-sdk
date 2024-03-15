//
// CatalogsVerticalBatchRequest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** A request object that can have multiple operations on a single batch */
public enum CatalogsVerticalBatchRequest: Codable, JSONEncodable, Hashable {
    case typeCatalogsHotelBatchRequest(CatalogsHotelBatchRequest)
    case typeCatalogsRetailBatchRequest(CatalogsRetailBatchRequest)

    public func encode(to encoder: Encoder) throws {
        var container = encoder.singleValueContainer()
        switch self {
        case .typeCatalogsHotelBatchRequest(let value):
            try container.encode(value)
        case .typeCatalogsRetailBatchRequest(let value):
            try container.encode(value)
        }
    }

    public init(from decoder: Decoder) throws {
        let container = try decoder.singleValueContainer()
        if let value = try? container.decode(CatalogsHotelBatchRequest.self) {
            self = .typeCatalogsHotelBatchRequest(value)
        } else if let value = try? container.decode(CatalogsRetailBatchRequest.self) {
            self = .typeCatalogsRetailBatchRequest(value)
        } else {
            throw DecodingError.typeMismatch(Self.Type.self, .init(codingPath: decoder.codingPath, debugDescription: "Unable to decode instance of CatalogsVerticalBatchRequest"))
        }
    }
}
