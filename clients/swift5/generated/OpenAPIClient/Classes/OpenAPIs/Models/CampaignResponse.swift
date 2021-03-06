//
// CampaignResponse.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CampaignResponse: Codable, JSONEncodable, Hashable {

    /** Campaign ID. */
    public var id: String
    /** Campaign's Advertiser ID. */
    public var adAccountId: String
    /** Campaign name. */
    public var name: String?
    public var status: EntityStatus? = "ACTIVE"
    /** Campaign total spending cap. */
    public var lifetimeSpendCap: Int?
    /** Campaign daily spending cap. */
    public var dailySpendCap: Int?
    /** Order line ID that appears on the invoice. */
    public var orderLineId: String?
    public var trackingUrls: TrackingUrls?
    /** Campaign start time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    public var startTime: Int?
    /** Campaign end time. Unix timestamp in seconds. Only used for Campaign Budget Optimization (CBO) campaigns. */
    public var endTime: Int?
    public var objectiveType: ObjectiveType?
    /** Campaign creation time. Unix timestamp in seconds. */
    public var createdTime: Int?
    /** UTC timestamp. Last update time. */
    public var updatedTime: Int?
    /** Always \"campaign\". */
    public var type: String?

    public init(id: String, adAccountId: String, name: String? = nil, status: EntityStatus? = "ACTIVE", lifetimeSpendCap: Int? = nil, dailySpendCap: Int? = nil, orderLineId: String? = nil, trackingUrls: TrackingUrls? = nil, startTime: Int? = nil, endTime: Int? = nil, objectiveType: ObjectiveType? = nil, createdTime: Int? = nil, updatedTime: Int? = nil, type: String? = nil) {
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
        self.objectiveType = objectiveType
        self.createdTime = createdTime
        self.updatedTime = updatedTime
        self.type = type
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
        case objectiveType = "objective_type"
        case createdTime = "created_time"
        case updatedTime = "updated_time"
        case type
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
        try container.encodeIfPresent(objectiveType, forKey: .objectiveType)
        try container.encodeIfPresent(createdTime, forKey: .createdTime)
        try container.encodeIfPresent(updatedTime, forKey: .updatedTime)
        try container.encodeIfPresent(type, forKey: .type)
    }
}

