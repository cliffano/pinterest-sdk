//
// AdsAnalyticsMetricsFilter.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AdsAnalyticsMetricsFilter: Codable, JSONEncodable, Hashable {

    public var field: AdsAnalyticsFilterColumn?
    public var _operator: AdsAnalyticsFilterOperator?
    /** List of values for filtering */
    public var values: [Double]?

    public init(field: AdsAnalyticsFilterColumn? = nil, _operator: AdsAnalyticsFilterOperator? = nil, values: [Double]? = nil) {
        self.field = field
        self._operator = _operator
        self.values = values
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case field
        case _operator = "operator"
        case values
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(field, forKey: .field)
        try container.encodeIfPresent(_operator, forKey: ._operator)
        try container.encodeIfPresent(values, forKey: .values)
    }
}

