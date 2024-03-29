//
// GetMMMReportResponse.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct GetMMMReportResponse: Codable, JSONEncodable, Hashable {

    public var code: Double?
    public var data: GetMMMReportResponseData?
    public var message: String?
    public var status: String?

    public init(code: Double? = nil, data: GetMMMReportResponseData? = nil, message: String? = nil, status: String? = nil) {
        self.code = code
        self.data = data
        self.message = message
        self.status = status
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case code
        case data
        case message
        case status
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(code, forKey: .code)
        try container.encodeIfPresent(data, forKey: .data)
        try container.encodeIfPresent(message, forKey: .message)
        try container.encodeIfPresent(status, forKey: .status)
    }
}

