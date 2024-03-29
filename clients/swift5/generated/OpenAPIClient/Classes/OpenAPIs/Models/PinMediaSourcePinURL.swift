//
// PinMediaSourcePinURL.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Pin URL-based media source for product pin creation. Currently the field is only available to a list of beta users. */
public struct PinMediaSourcePinURL: Codable, JSONEncodable, Hashable {

    public enum SourceType: String, Codable, CaseIterable {
        case pinUrl = "pin_url"
    }
    public var sourceType: SourceType
    /** This is an affiliate link or sponsored product. The FTC requires disclosure for paid partnerships and affiliate products. */
    public var isAffiliateLink: Bool? = false

    public init(sourceType: SourceType, isAffiliateLink: Bool? = false) {
        self.sourceType = sourceType
        self.isAffiliateLink = isAffiliateLink
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case sourceType = "source_type"
        case isAffiliateLink = "is_affiliate_link"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(sourceType, forKey: .sourceType)
        try container.encodeIfPresent(isAffiliateLink, forKey: .isAffiliateLink)
    }
}

