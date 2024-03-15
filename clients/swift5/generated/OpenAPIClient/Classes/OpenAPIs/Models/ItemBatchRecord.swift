//
// ItemBatchRecord.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Object describing an item batch record */
public enum ItemBatchRecord: Codable, JSONEncodable, Hashable {
    case typeItemCreateBatchRecord(ItemCreateBatchRecord)
    case typeItemDeleteBatchRecord(ItemDeleteBatchRecord)
    case typeItemDeleteDiscontinuedBatchRecord(ItemDeleteDiscontinuedBatchRecord)
    case typeItemUpdateBatchRecord(ItemUpdateBatchRecord)
    case typeItemUpsertBatchRecord(ItemUpsertBatchRecord)

    public func encode(to encoder: Encoder) throws {
        var container = encoder.singleValueContainer()
        switch self {
        case .typeItemCreateBatchRecord(let value):
            try container.encode(value)
        case .typeItemDeleteBatchRecord(let value):
            try container.encode(value)
        case .typeItemDeleteDiscontinuedBatchRecord(let value):
            try container.encode(value)
        case .typeItemUpdateBatchRecord(let value):
            try container.encode(value)
        case .typeItemUpsertBatchRecord(let value):
            try container.encode(value)
        }
    }

    public init(from decoder: Decoder) throws {
        let container = try decoder.singleValueContainer()
        if let value = try? container.decode(ItemCreateBatchRecord.self) {
            self = .typeItemCreateBatchRecord(value)
        } else if let value = try? container.decode(ItemDeleteBatchRecord.self) {
            self = .typeItemDeleteBatchRecord(value)
        } else if let value = try? container.decode(ItemDeleteDiscontinuedBatchRecord.self) {
            self = .typeItemDeleteDiscontinuedBatchRecord(value)
        } else if let value = try? container.decode(ItemUpdateBatchRecord.self) {
            self = .typeItemUpdateBatchRecord(value)
        } else if let value = try? container.decode(ItemUpsertBatchRecord.self) {
            self = .typeItemUpsertBatchRecord(value)
        } else {
            throw DecodingError.typeMismatch(Self.Type.self, .init(codingPath: decoder.codingPath, debugDescription: "Unable to decode instance of ItemBatchRecord"))
        }
    }
}

