//
// AdPreviewURLResponse.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AdPreviewURLResponse: Codable, JSONEncodable, Hashable {

    /** 'Preview URL, expires in 7 days. Can be used in an iframe. For example: https://ads.pinterest.com/ad-preview/74667c814dd2b19/ The preview object ID/key is the last param - 74667c814dd2b19' */
    public var url: String?

    public init(url: String? = nil) {
        self.url = url
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case url
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(url, forKey: .url)
    }
}

