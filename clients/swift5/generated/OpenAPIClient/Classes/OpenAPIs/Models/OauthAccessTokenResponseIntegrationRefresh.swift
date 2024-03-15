//
// OauthAccessTokenResponseIntegrationRefresh.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** A successful OAuth access token response for the refresh token flow, with an added refresh token. */
public struct OauthAccessTokenResponseIntegrationRefresh: Codable, JSONEncodable, Hashable {

    public enum ResponseType: String, Codable, CaseIterable {
        case authorizationCode = "authorization_code"
        case refreshToken = "refresh_token"
    }
    public var responseType: ResponseType?
    public var accessToken: String
    public var tokenType: String = "bearer"
    public var expiresIn: Int
    public var scope: String
    public var refreshToken: String
    public var refreshTokenExpiresIn: Int

    public init(responseType: ResponseType? = nil, accessToken: String, tokenType: String = "bearer", expiresIn: Int, scope: String, refreshToken: String, refreshTokenExpiresIn: Int) {
        self.responseType = responseType
        self.accessToken = accessToken
        self.tokenType = tokenType
        self.expiresIn = expiresIn
        self.scope = scope
        self.refreshToken = refreshToken
        self.refreshTokenExpiresIn = refreshTokenExpiresIn
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case responseType = "response_type"
        case accessToken = "access_token"
        case tokenType = "token_type"
        case expiresIn = "expires_in"
        case scope
        case refreshToken = "refresh_token"
        case refreshTokenExpiresIn = "refresh_token_expires_in"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(responseType, forKey: .responseType)
        try container.encode(accessToken, forKey: .accessToken)
        try container.encode(tokenType, forKey: .tokenType)
        try container.encode(expiresIn, forKey: .expiresIn)
        try container.encode(scope, forKey: .scope)
        try container.encode(refreshToken, forKey: .refreshToken)
        try container.encode(refreshTokenExpiresIn, forKey: .refreshTokenExpiresIn)
    }
}

