//
// CampaignSummaryStatus.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Summary status for campaign */
public enum CampaignSummaryStatus: String, Codable, CaseIterable {
    case running = "RUNNING"
    case paused = "PAUSED"
    case notStarted = "NOT_STARTED"
    case completed = "COMPLETED"
    case advertiserDisabled = "ADVERTISER_DISABLED"
    case archived = "ARCHIVED"
}
