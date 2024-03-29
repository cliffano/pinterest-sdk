//
// BulkDownloadResponse.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct BulkDownloadResponse: Codable, JSONEncodable, Hashable {

    /** ID of the bulk request. */
    public var requestId: String?

    public init(requestId: String? = nil) {
        self.requestId = requestId
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case requestId = "request_id"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(requestId, forKey: .requestId)
    }
}

