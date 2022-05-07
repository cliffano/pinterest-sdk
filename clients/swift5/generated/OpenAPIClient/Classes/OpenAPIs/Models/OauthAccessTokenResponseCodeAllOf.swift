//
// OauthAccessTokenResponseCodeAllOf.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct OauthAccessTokenResponseCodeAllOf: Codable, JSONEncodable, Hashable {

    public var refreshToken: String
    public var refreshTokenExpiresIn: Int

    public init(refreshToken: String, refreshTokenExpiresIn: Int) {
        self.refreshToken = refreshToken
        self.refreshTokenExpiresIn = refreshTokenExpiresIn
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case refreshToken = "refresh_token"
        case refreshTokenExpiresIn = "refresh_token_expires_in"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(refreshToken, forKey: .refreshToken)
        try container.encode(refreshTokenExpiresIn, forKey: .refreshTokenExpiresIn)
    }
}

