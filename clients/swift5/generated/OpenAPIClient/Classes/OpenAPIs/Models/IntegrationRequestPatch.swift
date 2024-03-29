//
// IntegrationRequestPatch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Schema used for updating the integration metadata. */
public struct IntegrationRequestPatch: Codable, JSONEncodable, Hashable {

    public var connectedMerchantId: String?
    public var connectedAdvertiserId: String?
    public var connectedLbaId: String?
    public var connectedTagId: String?
    public var partnerAccessToken: String?
    public var partnerRefreshToken: String?
    public var partnerPrimaryEmail: String?
    public var partnerAccessTokenExpiry: Double?
    public var partnerRefreshTokenExpiry: Double?
    public var scopes: String?
    public var additionalId1: String?
    public var partnerMetadata: String?

    public init(connectedMerchantId: String? = nil, connectedAdvertiserId: String? = nil, connectedLbaId: String? = nil, connectedTagId: String? = nil, partnerAccessToken: String? = nil, partnerRefreshToken: String? = nil, partnerPrimaryEmail: String? = nil, partnerAccessTokenExpiry: Double? = nil, partnerRefreshTokenExpiry: Double? = nil, scopes: String? = nil, additionalId1: String? = nil, partnerMetadata: String? = nil) {
        self.connectedMerchantId = connectedMerchantId
        self.connectedAdvertiserId = connectedAdvertiserId
        self.connectedLbaId = connectedLbaId
        self.connectedTagId = connectedTagId
        self.partnerAccessToken = partnerAccessToken
        self.partnerRefreshToken = partnerRefreshToken
        self.partnerPrimaryEmail = partnerPrimaryEmail
        self.partnerAccessTokenExpiry = partnerAccessTokenExpiry
        self.partnerRefreshTokenExpiry = partnerRefreshTokenExpiry
        self.scopes = scopes
        self.additionalId1 = additionalId1
        self.partnerMetadata = partnerMetadata
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case connectedMerchantId = "connected_merchant_id"
        case connectedAdvertiserId = "connected_advertiser_id"
        case connectedLbaId = "connected_lba_id"
        case connectedTagId = "connected_tag_id"
        case partnerAccessToken = "partner_access_token"
        case partnerRefreshToken = "partner_refresh_token"
        case partnerPrimaryEmail = "partner_primary_email"
        case partnerAccessTokenExpiry = "partner_access_token_expiry"
        case partnerRefreshTokenExpiry = "partner_refresh_token_expiry"
        case scopes
        case additionalId1 = "additional_id_1"
        case partnerMetadata = "partner_metadata"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(connectedMerchantId, forKey: .connectedMerchantId)
        try container.encodeIfPresent(connectedAdvertiserId, forKey: .connectedAdvertiserId)
        try container.encodeIfPresent(connectedLbaId, forKey: .connectedLbaId)
        try container.encodeIfPresent(connectedTagId, forKey: .connectedTagId)
        try container.encodeIfPresent(partnerAccessToken, forKey: .partnerAccessToken)
        try container.encodeIfPresent(partnerRefreshToken, forKey: .partnerRefreshToken)
        try container.encodeIfPresent(partnerPrimaryEmail, forKey: .partnerPrimaryEmail)
        try container.encodeIfPresent(partnerAccessTokenExpiry, forKey: .partnerAccessTokenExpiry)
        try container.encodeIfPresent(partnerRefreshTokenExpiry, forKey: .partnerRefreshTokenExpiry)
        try container.encodeIfPresent(scopes, forKey: .scopes)
        try container.encodeIfPresent(additionalId1, forKey: .additionalId1)
        try container.encodeIfPresent(partnerMetadata, forKey: .partnerMetadata)
    }
}

