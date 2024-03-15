//
// TrendingKeywordsResponseTrendsInner.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct TrendingKeywordsResponseTrendsInner: Codable, JSONEncodable, Hashable {

    static let keywordRule = StringRule(minLength: 1, maxLength: nil, pattern: nil)
    /** The keyword that is trending. */
    public var keyword: String?
    /** The week-over-week percent change in search volume for this keyword.<br /> For example, a value of \"50\" would represent a 50% increase in searches in the last seven days compared to the week prior.<br /> **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced > 10000% week-over-week growth. */
    public var pctGrowthWow: Int?
    /** The month-over-month percent change in search volume for this keyword.<br /> For example, a value of \"400\" would represent a 400% increase in searches in the last 30 days compared to the month prior.<br /> **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced > 10000% month-over-month growth. */
    public var pctGrowthMom: Int?
    /** The year-over-year percent change in search volume for this keyword.<br /> For example, a value of \"-5\" would represent a 5% decrease in searches in the last 365 days compared to the month prior.<br /> **Note**: growth rates are rounded, with a maximum of +/- 10000% change.  A value of 10001 indicates that this keyword experienced > 10000% year-over-year growth. */
    public var pctGrowthYoy: Int?
    public var timeSeries: TrendingKeywordsResponseTrendsInnerTimeSeries?

    public init(keyword: String? = nil, pctGrowthWow: Int? = nil, pctGrowthMom: Int? = nil, pctGrowthYoy: Int? = nil, timeSeries: TrendingKeywordsResponseTrendsInnerTimeSeries? = nil) {
        self.keyword = keyword
        self.pctGrowthWow = pctGrowthWow
        self.pctGrowthMom = pctGrowthMom
        self.pctGrowthYoy = pctGrowthYoy
        self.timeSeries = timeSeries
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case keyword
        case pctGrowthWow = "pct_growth_wow"
        case pctGrowthMom = "pct_growth_mom"
        case pctGrowthYoy = "pct_growth_yoy"
        case timeSeries = "time_series"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(keyword, forKey: .keyword)
        try container.encodeIfPresent(pctGrowthWow, forKey: .pctGrowthWow)
        try container.encodeIfPresent(pctGrowthMom, forKey: .pctGrowthMom)
        try container.encodeIfPresent(pctGrowthYoy, forKey: .pctGrowthYoy)
        try container.encodeIfPresent(timeSeries, forKey: .timeSeries)
    }
}
