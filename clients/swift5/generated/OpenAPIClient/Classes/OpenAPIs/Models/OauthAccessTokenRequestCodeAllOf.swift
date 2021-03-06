//
// OauthAccessTokenRequestCodeAllOf.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct OauthAccessTokenRequestCodeAllOf: Codable, JSONEncodable, Hashable {

    public var code: String
    public var redirectUri: String

    public init(code: String, redirectUri: String) {
        self.code = code
        self.redirectUri = redirectUri
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case code
        case redirectUri = "redirect_uri"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(code, forKey: .code)
        try container.encode(redirectUri, forKey: .redirectUri)
    }
}

