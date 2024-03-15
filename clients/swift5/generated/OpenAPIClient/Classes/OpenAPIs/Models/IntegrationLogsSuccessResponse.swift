//
// IntegrationLogsSuccessResponse.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Response when logs are successfully processed. */
public struct IntegrationLogsSuccessResponse: Codable, JSONEncodable, Hashable {

    public var message: String?

    public init(message: String? = nil) {
        self.message = message
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case message
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(message, forKey: .message)
    }
}

