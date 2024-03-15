//
// ProductGroupPromotionUpdateRequest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct ProductGroupPromotionUpdateRequest: Codable, JSONEncodable, Hashable {

    static let adGroupIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^(AG)?\\d+$/")
    /** ID of the ad group the product group belongs to. */
    public var adGroupId: String
    public var productGroupPromotion: [ProductGroupPromotion]

    public init(adGroupId: String, productGroupPromotion: [ProductGroupPromotion]) {
        self.adGroupId = adGroupId
        self.productGroupPromotion = productGroupPromotion
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case adGroupId = "ad_group_id"
        case productGroupPromotion = "product_group_promotion"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(adGroupId, forKey: .adGroupId)
        try container.encode(productGroupPromotion, forKey: .productGroupPromotion)
    }
}

