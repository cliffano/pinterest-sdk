//
// AnalyticsMetricsResponse.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AnalyticsMetricsResponse: Codable, JSONEncodable, Hashable {

    /** The metric name and value over the requested period for each requested metric */
    public var summaryMetrics: [String: Double]?
    /** Array with the requested daily metric records */
    public var dailyMetrics: [AnalyticsDailyMetrics]?

    public init(summaryMetrics: [String: Double]? = nil, dailyMetrics: [AnalyticsDailyMetrics]? = nil) {
        self.summaryMetrics = summaryMetrics
        self.dailyMetrics = dailyMetrics
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case summaryMetrics = "summary_metrics"
        case dailyMetrics = "daily_metrics"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(summaryMetrics, forKey: .summaryMetrics)
        try container.encodeIfPresent(dailyMetrics, forKey: .dailyMetrics)
    }
}

