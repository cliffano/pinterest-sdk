//
// CampaignUpdateRequest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CampaignUpdateRequest: Codable, JSONEncodable, Hashable {

    static let idRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    static let adAccountIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    static let orderLineIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    /** Campaign ID. */
    public var id: String
    /** Campaign's Advertiser ID. If you want to create a campaign in a Business Account shared account you need to specify the Business Access advertiser ID in both the query path param as well as the request body schema. */
    public var adAccountId: String
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
    /** Determine if a campaign has flexible daily budgets setup. */
    public var isFlexibleDailyBudgets: Bool?
    /** When transitioning from campaign budget optimization to non-campaign budget optimization, the default_ad_group_budget_in_micro_currency will propagate to each child ad groups daily budget. Unit is micro currency of the associated advertiser account. */
    public var defaultAdGroupBudgetInMicroCurrency: Int?
    /** Specifies whether the campaign was created in the automated campaign flow */
    public var isAutomatedCampaign: Bool?
    /** Determines if a campaign automatically generate ad-group level budgets given a campaign budget to maximize campaign outcome. When transitioning from non-cbo to cbo, all previous child ad group budget will be cleared. */
    public var isCampaignBudgetOptimization: Bool?
    public var objectiveType: ObjectiveType?

    public init(id: String, adAccountId: String, name: String? = nil, status: EntityStatus? = nil, lifetimeSpendCap: Int? = nil, dailySpendCap: Int? = nil, orderLineId: String? = nil, trackingUrls: AdCommonTrackingUrls? = nil, startTime: Int? = nil, endTime: Int? = nil, summaryStatus: CampaignSummaryStatus? = nil, isFlexibleDailyBudgets: Bool? = nil, defaultAdGroupBudgetInMicroCurrency: Int? = nil, isAutomatedCampaign: Bool? = nil, isCampaignBudgetOptimization: Bool? = nil, objectiveType: ObjectiveType? = nil) {
        self.id = id
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
        self.isFlexibleDailyBudgets = isFlexibleDailyBudgets
        self.defaultAdGroupBudgetInMicroCurrency = defaultAdGroupBudgetInMicroCurrency
        self.isAutomatedCampaign = isAutomatedCampaign
        self.isCampaignBudgetOptimization = isCampaignBudgetOptimization
        self.objectiveType = objectiveType
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case id
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
        case isFlexibleDailyBudgets = "is_flexible_daily_budgets"
        case defaultAdGroupBudgetInMicroCurrency = "default_ad_group_budget_in_micro_currency"
        case isAutomatedCampaign = "is_automated_campaign"
        case isCampaignBudgetOptimization = "is_campaign_budget_optimization"
        case objectiveType = "objective_type"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(id, forKey: .id)
        try container.encode(adAccountId, forKey: .adAccountId)
        try container.encodeIfPresent(name, forKey: .name)
        try container.encodeIfPresent(status, forKey: .status)
        try container.encodeIfPresent(lifetimeSpendCap, forKey: .lifetimeSpendCap)
        try container.encodeIfPresent(dailySpendCap, forKey: .dailySpendCap)
        try container.encodeIfPresent(orderLineId, forKey: .orderLineId)
        try container.encodeIfPresent(trackingUrls, forKey: .trackingUrls)
        try container.encodeIfPresent(startTime, forKey: .startTime)
        try container.encodeIfPresent(endTime, forKey: .endTime)
        try container.encodeIfPresent(summaryStatus, forKey: .summaryStatus)
        try container.encodeIfPresent(isFlexibleDailyBudgets, forKey: .isFlexibleDailyBudgets)
        try container.encodeIfPresent(defaultAdGroupBudgetInMicroCurrency, forKey: .defaultAdGroupBudgetInMicroCurrency)
        try container.encodeIfPresent(isAutomatedCampaign, forKey: .isAutomatedCampaign)
        try container.encodeIfPresent(isCampaignBudgetOptimization, forKey: .isCampaignBudgetOptimization)
        try container.encodeIfPresent(objectiveType, forKey: .objectiveType)
    }
}

