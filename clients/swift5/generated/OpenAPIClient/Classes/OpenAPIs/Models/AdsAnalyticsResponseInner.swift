//
// AdsAnalyticsResponseInner.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AdsAnalyticsResponseInner: Codable, JSONEncodable, Hashable {

    static let AD_IDRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    /** The ID of the ad that this metrics belongs to. */
    public var AD_ID: String
    /** Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`) */
    public var DATE: Date?

    public init(AD_ID: String, DATE: Date? = nil) {
        self.AD_ID = AD_ID
        self.DATE = DATE
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case AD_ID
        case DATE
    }

    public var additionalProperties: [String: AnyCodable] = [:]

    public subscript(key: String) -> AnyCodable? {
        get {
            if let value = additionalProperties[key] {
                return value
            }
            return nil
        }

        set {
            additionalProperties[key] = newValue
        }
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(AD_ID, forKey: .AD_ID)
        try container.encodeIfPresent(DATE, forKey: .DATE)
        var additionalPropertiesContainer = encoder.container(keyedBy: String.self)
        try additionalPropertiesContainer.encodeMap(additionalProperties)
    }

    // Decodable protocol methods

    public init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: CodingKeys.self)

        AD_ID = try container.decode(String.self, forKey: .AD_ID)
        DATE = try container.decodeIfPresent(Date.self, forKey: .DATE)
        var nonAdditionalPropertyKeys = Set<String>()
        nonAdditionalPropertyKeys.insert("AD_ID")
        nonAdditionalPropertyKeys.insert("DATE")
        let additionalPropertiesContainer = try decoder.container(keyedBy: String.self)
        additionalProperties = try additionalPropertiesContainer.decodeMap(AnyCodable.self, excludedKeys: nonAdditionalPropertyKeys)
    }
}

