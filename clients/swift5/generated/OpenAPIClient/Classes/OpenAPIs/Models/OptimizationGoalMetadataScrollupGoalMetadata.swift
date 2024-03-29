//
// OptimizationGoalMetadataScrollupGoalMetadata.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct OptimizationGoalMetadataScrollupGoalMetadata: Codable, JSONEncodable, Hashable {

    static let scrollupGoalValueInMicroCurrencyRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^[0-9]+$/")
    public var scrollupGoalValueInMicroCurrency: String?

    public init(scrollupGoalValueInMicroCurrency: String? = nil) {
        self.scrollupGoalValueInMicroCurrency = scrollupGoalValueInMicroCurrency
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case scrollupGoalValueInMicroCurrency = "scrollup_goal_value_in_micro_currency"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(scrollupGoalValueInMicroCurrency, forKey: .scrollupGoalValueInMicroCurrency)
    }
}

