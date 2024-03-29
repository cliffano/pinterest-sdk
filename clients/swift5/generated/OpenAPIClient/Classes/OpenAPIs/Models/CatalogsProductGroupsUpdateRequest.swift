//
// CatalogsProductGroupsUpdateRequest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public enum CatalogsProductGroupsUpdateRequest: Codable, JSONEncodable, Hashable {
    case typeCatalogsProductGroupUpdateRequest(CatalogsProductGroupUpdateRequest)
    case typeCatalogsVerticalProductGroupUpdateRequest(CatalogsVerticalProductGroupUpdateRequest)

    public func encode(to encoder: Encoder) throws {
        var container = encoder.singleValueContainer()
        switch self {
        case .typeCatalogsProductGroupUpdateRequest(let value):
            try container.encode(value)
        case .typeCatalogsVerticalProductGroupUpdateRequest(let value):
            try container.encode(value)
        }
    }

    public init(from decoder: Decoder) throws {
        let container = try decoder.singleValueContainer()
        if let value = try? container.decode(CatalogsProductGroupUpdateRequest.self) {
            self = .typeCatalogsProductGroupUpdateRequest(value)
        } else if let value = try? container.decode(CatalogsVerticalProductGroupUpdateRequest.self) {
            self = .typeCatalogsVerticalProductGroupUpdateRequest(value)
        } else {
            throw DecodingError.typeMismatch(Self.Type.self, .init(codingPath: decoder.codingPath, debugDescription: "Unable to decode instance of CatalogsProductGroupsUpdateRequest"))
        }
    }
}

