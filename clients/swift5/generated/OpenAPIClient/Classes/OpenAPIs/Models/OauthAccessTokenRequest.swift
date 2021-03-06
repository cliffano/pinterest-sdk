//
// OauthAccessTokenRequest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Describes the valid schema for possible OAuth access token requests. */
public struct OauthAccessTokenRequest: Codable, JSONEncodable, Hashable {

    public enum GrantType: String, Codable, CaseIterable {
        case authorizationCode = "authorization_code"
        case refreshToken = "refresh_token"
    }
    public var grantType: GrantType

    public init(grantType: GrantType) {
        self.grantType = grantType
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case grantType = "grant_type"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(grantType, forKey: .grantType)
    }
}

