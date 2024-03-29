//
// CatalogsUpsertHotelItem.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** A hotel item to be upserted. */
public struct CatalogsUpsertHotelItem: Codable, JSONEncodable, Hashable {

    public enum Operation: String, Codable, CaseIterable {
        case upsert = "UPSERT"
    }
    /** The catalog hotel id in the merchant namespace */
    public var hotelId: String
    public var operation: Operation
    public var attributes: CatalogsHotelAttributes

    public init(hotelId: String, operation: Operation, attributes: CatalogsHotelAttributes) {
        self.hotelId = hotelId
        self.operation = operation
        self.attributes = attributes
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case hotelId = "hotel_id"
        case operation
        case attributes
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(hotelId, forKey: .hotelId)
        try container.encode(operation, forKey: .operation)
        try container.encode(attributes, forKey: .attributes)
    }
}

