//
// DetailedError.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Used for including extra details to a base error */
public struct DetailedError: Codable, JSONEncodable, Hashable {

    public var code: Int
    public var message: String
    public var details: AnyCodable

    public init(code: Int, message: String, details: AnyCodable) {
        self.code = code
        self.message = message
        self.details = details
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case code
        case message
        case details
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(code, forKey: .code)
        try container.encode(message, forKey: .message)
        try container.encode(details, forKey: .details)
    }
}

