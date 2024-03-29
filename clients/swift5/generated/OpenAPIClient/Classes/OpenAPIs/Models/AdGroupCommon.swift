//
// AdGroupCommon.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AdGroupCommon: Codable, JSONEncodable, Hashable {

    public enum BidStrategyType: String, Codable, CaseIterable {
        case automaticBid = "AUTOMATIC_BID"
        case maxBid = "MAX_BID"
        case targetAvg = "TARGET_AVG"
        case null = "null"
    }
    static let campaignIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^[C]?\\d+$/")
    /** Ad group name. */
    public var name: String?
    /** Ad group/entity status. */
    public var status: EntityStatus?
    /** Budget in micro currency. This field is **REQUIRED** for non-CBO (campaign budget optimization) campaigns.  A CBO campaign automatically generates ad group budgets from its campaign budget to maximize campaign outcome. A CBO campaign is limited to 70 or less ad groups. */
    public var budgetInMicroCurrency: Int?
    /** Bid price in micro currency. This field is **REQUIRED** for the following campaign objective_type/billable_event combinations: AWARENESS/IMPRESSION, CONSIDERATION/CLICKTHROUGH, CATALOG_SALES/CLICKTHROUGH, VIDEO_VIEW/VIDEO_V_50_MRC. */
    public var bidInMicroCurrency: Int?
    public var optimizationGoalMetadata: AdGroupCommonOptimizationGoalMetadata?
    public var budgetType: BudgetType?
    /** Ad group start time. Unix timestamp in seconds. Defaults to current time. */
    public var startTime: Int?
    /** Ad group end time. Unix timestamp in seconds. */
    public var endTime: Int?
    public var targetingSpec: TargetingSpec?
    /** Set a limit to the number of times a promoted pin from this campaign can be impressed by a pinner within the past rolling 30 days. Only available for CPM (cost per mille (1000 impressions))  ad groups. A CPM ad group has an IMPRESSION <a href=\"https://developers.pinterest.com/docs/redoc/#section/Billable-event\">billable_event</a> value. This field **REQUIRES** the `end_time` field. */
    public var lifetimeFrequencyCap: Int?
    public var trackingUrls: AdGroupCommonTrackingUrls?
    /** Enable auto-targeting for ad group. Also known as <a href=\"https://help.pinterest.com/en/business/article/expanded-targeting\" target=\"_blank\">\"expanded targeting\"</a>. */
    public var autoTargetingEnabled: Bool?
    /** <a href=\"https://developers.pinterest.com/docs/redoc/#section/Placement-group\">Placement group</a>. */
    public var placementGroup: PlacementGroupType?
    public var pacingDeliveryType: PacingDeliveryType?
    /** Campaign ID of the ad group. */
    public var campaignId: String?
    public var billableEvent: ActionType?
    /** Bid strategy type */
    public var bidStrategyType: BidStrategyType?

    public init(name: String? = nil, status: EntityStatus? = nil, budgetInMicroCurrency: Int? = nil, bidInMicroCurrency: Int? = nil, optimizationGoalMetadata: AdGroupCommonOptimizationGoalMetadata? = nil, budgetType: BudgetType? = nil, startTime: Int? = nil, endTime: Int? = nil, targetingSpec: TargetingSpec? = nil, lifetimeFrequencyCap: Int? = nil, trackingUrls: AdGroupCommonTrackingUrls? = nil, autoTargetingEnabled: Bool? = nil, placementGroup: PlacementGroupType? = nil, pacingDeliveryType: PacingDeliveryType? = nil, campaignId: String? = nil, billableEvent: ActionType? = nil, bidStrategyType: BidStrategyType? = nil) {
        self.name = name
        self.status = status
        self.budgetInMicroCurrency = budgetInMicroCurrency
        self.bidInMicroCurrency = bidInMicroCurrency
        self.optimizationGoalMetadata = optimizationGoalMetadata
        self.budgetType = budgetType
        self.startTime = startTime
        self.endTime = endTime
        self.targetingSpec = targetingSpec
        self.lifetimeFrequencyCap = lifetimeFrequencyCap
        self.trackingUrls = trackingUrls
        self.autoTargetingEnabled = autoTargetingEnabled
        self.placementGroup = placementGroup
        self.pacingDeliveryType = pacingDeliveryType
        self.campaignId = campaignId
        self.billableEvent = billableEvent
        self.bidStrategyType = bidStrategyType
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case name
        case status
        case budgetInMicroCurrency = "budget_in_micro_currency"
        case bidInMicroCurrency = "bid_in_micro_currency"
        case optimizationGoalMetadata = "optimization_goal_metadata"
        case budgetType = "budget_type"
        case startTime = "start_time"
        case endTime = "end_time"
        case targetingSpec = "targeting_spec"
        case lifetimeFrequencyCap = "lifetime_frequency_cap"
        case trackingUrls = "tracking_urls"
        case autoTargetingEnabled = "auto_targeting_enabled"
        case placementGroup = "placement_group"
        case pacingDeliveryType = "pacing_delivery_type"
        case campaignId = "campaign_id"
        case billableEvent = "billable_event"
        case bidStrategyType = "bid_strategy_type"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(name, forKey: .name)
        try container.encodeIfPresent(status, forKey: .status)
        try container.encodeIfPresent(budgetInMicroCurrency, forKey: .budgetInMicroCurrency)
        try container.encodeIfPresent(bidInMicroCurrency, forKey: .bidInMicroCurrency)
        try container.encodeIfPresent(optimizationGoalMetadata, forKey: .optimizationGoalMetadata)
        try container.encodeIfPresent(budgetType, forKey: .budgetType)
        try container.encodeIfPresent(startTime, forKey: .startTime)
        try container.encodeIfPresent(endTime, forKey: .endTime)
        try container.encodeIfPresent(targetingSpec, forKey: .targetingSpec)
        try container.encodeIfPresent(lifetimeFrequencyCap, forKey: .lifetimeFrequencyCap)
        try container.encodeIfPresent(trackingUrls, forKey: .trackingUrls)
        try container.encodeIfPresent(autoTargetingEnabled, forKey: .autoTargetingEnabled)
        try container.encodeIfPresent(placementGroup, forKey: .placementGroup)
        try container.encodeIfPresent(pacingDeliveryType, forKey: .pacingDeliveryType)
        try container.encodeIfPresent(campaignId, forKey: .campaignId)
        try container.encodeIfPresent(billableEvent, forKey: .billableEvent)
        try container.encodeIfPresent(bidStrategyType, forKey: .bidStrategyType)
    }
}

