//
// AdGroupArrayResponseElement.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AdGroupArrayResponseElement: Codable, JSONEncodable, Hashable {

    public var data: AdGroupResponse?
    public var exceptions: [Exception]?

    public init(data: AdGroupResponse? = nil, exceptions: [Exception]? = nil) {
        self.data = data
        self.exceptions = exceptions
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case data
        case exceptions
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(data, forKey: .data)
        try container.encodeIfPresent(exceptions, forKey: .exceptions)
    }
}

