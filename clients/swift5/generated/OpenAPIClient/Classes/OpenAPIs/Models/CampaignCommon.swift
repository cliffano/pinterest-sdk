//
// CampaignCommon.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Campaign Data */
public struct CampaignCommon: Codable, JSONEncodable, Hashable {

    static let adAccountIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    static let orderLineIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    /** Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. */
    public var adAccountId: String?
    /** Campaign name. */
    public var name: String?
    public var status: EntityStatus?
    /** Campaign total spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"daily_spend_cap\" cannot be set at the same time. */
    public var lifetimeSpendCap: Int?
    /** Campaign daily spending cap. Required for Campaign Budget Optimization (CBO) campaigns. This and \"lifetime_spend_cap\" cannot be set at the same time. */
    public var dailySpendCap: Int?
    /** Order line ID that appears on the invoice. */
    public var orderLineId: String?
    public var trackingUrls: AdCommonTrackingUrls?
    /** Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    public var startTime: Int?
    /** Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    public var endTime: Int?
    public var summaryStatus: CampaignSummaryStatus?

    public init(adAccountId: String? = nil, name: String? = nil, status: EntityStatus? = nil, lifetimeSpendCap: Int? = nil, dailySpendCap: Int? = nil, orderLineId: String? = nil, trackingUrls: AdCommonTrackingUrls? = nil, startTime: Int? = nil, endTime: Int? = nil, summaryStatus: CampaignSummaryStatus? = nil) {
        self.adAccountId = adAccountId
        self.name = name
        self.status = status
        self.lifetimeSpendCap = lifetimeSpendCap
        self.dailySpendCap = dailySpendCap
        self.orderLineId = orderLineId
        self.trackingUrls = trackingUrls
        self.startTime = startTime
        self.endTime = endTime
        self.summaryStatus = summaryStatus
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case adAccountId = "ad_account_id"
        case name
        case status
        case lifetimeSpendCap = "lifetime_spend_cap"
        case dailySpendCap = "daily_spend_cap"
        case orderLineId = "order_line_id"
        case trackingUrls = "tracking_urls"
        case startTime = "start_time"
        case endTime = "end_time"
        case summaryStatus = "summary_status"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(adAccountId, forKey: .adAccountId)
        try container.encodeIfPresent(name, forKey: .name)
        try container.encodeIfPresent(status, forKey: .status)
        try container.encodeIfPresent(lifetimeSpendCap, forKey: .lifetimeSpendCap)
        try container.encodeIfPresent(dailySpendCap, forKey: .dailySpendCap)
        try container.encodeIfPresent(orderLineId, forKey: .orderLineId)
        try container.encodeIfPresent(trackingUrls, forKey: .trackingUrls)
        try container.encodeIfPresent(startTime, forKey: .startTime)
        try container.encodeIfPresent(endTime, forKey: .endTime)
        try container.encodeIfPresent(summaryStatus, forKey: .summaryStatus)
    }
}
