//
// BulkUpsertRequestUpdate.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Request for creation of entities in bulk. */
public struct BulkUpsertRequestUpdate: Codable, JSONEncodable, Hashable {

    public var campaigns: [CampaignUpdateRequest]?
    public var adGroups: [AdGroupUpdateRequest]?
    public var ads: [AdUpdateRequest]?
    public var productGroups: [ProductGroupPromotionUpdateRequest]?
    public var keywords: [KeywordUpdate]?

    public init(campaigns: [CampaignUpdateRequest]? = nil, adGroups: [AdGroupUpdateRequest]? = nil, ads: [AdUpdateRequest]? = nil, productGroups: [ProductGroupPromotionUpdateRequest]? = nil, keywords: [KeywordUpdate]? = nil) {
        self.campaigns = campaigns
        self.adGroups = adGroups
        self.ads = ads
        self.productGroups = productGroups
        self.keywords = keywords
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case campaigns
        case adGroups = "ad_groups"
        case ads
        case productGroups = "product_groups"
        case keywords
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(campaigns, forKey: .campaigns)
        try container.encodeIfPresent(adGroups, forKey: .adGroups)
        try container.encodeIfPresent(ads, forKey: .ads)
        try container.encodeIfPresent(productGroups, forKey: .productGroups)
        try container.encodeIfPresent(keywords, forKey: .keywords)
    }
}

