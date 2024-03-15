//
// TrendingKeywordsResponseTrendsInnerTimeSeries.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** A sequence of weekly observations of the relative search volume for this keyword over the past year.&lt;br /&gt; These values are normalized to a [0-100] range, and can be used to visualize the history of user interest in this keyword. By default, normalization is applied independently to the time series of each keyword, but the &#x60;normalize_against_group&#x60; query parameter can be used in cases where you wish to compare relative volume between keywords.&lt;br /&gt; **Note**: The date of each observation is in ISO-8601 format and represents the *end* of the week.  For example, a value of &#x60;2023-10-31&#x60; would include searches that happened between &#x60;2023-10-25&#x60; and &#x60;2023-10-31&#x60;. */
public struct TrendingKeywordsResponseTrendsInnerTimeSeries: Codable, JSONEncodable, Hashable {

    public var date: Date?

    public init(date: Date? = nil) {
        self.date = date
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case date
    }

    public var additionalProperties: [String: Int] = [:]

    public subscript(key: String) -> Int? {
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
        try container.encodeIfPresent(date, forKey: .date)
        var additionalPropertiesContainer = encoder.container(keyedBy: String.self)
        try additionalPropertiesContainer.encodeMap(additionalProperties)
    }

    // Decodable protocol methods

    public init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: CodingKeys.self)

        date = try container.decodeIfPresent(Date.self, forKey: .date)
        var nonAdditionalPropertyKeys = Set<String>()
        nonAdditionalPropertyKeys.insert("date")
        let additionalPropertiesContainer = try decoder.container(keyedBy: String.self)
        additionalProperties = try additionalPropertiesContainer.decodeMap(Int.self, excludedKeys: nonAdditionalPropertyKeys)
    }
}

