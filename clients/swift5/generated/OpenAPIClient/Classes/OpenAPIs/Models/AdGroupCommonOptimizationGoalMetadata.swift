//
// AdGroupCommonOptimizationGoalMetadata.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign&#39;s &#x60;objective_type&#x60; is set to &#x60;\&quot;WEB_CONVERSION\&quot;&#x60;. */
public struct AdGroupCommonOptimizationGoalMetadata: Codable, JSONEncodable, Hashable {

    public var conversionTagV3GoalMetadata: OptimizationGoalMetadataConversionTagV3GoalMetadata?
    public var frequencyGoalMetadata: OptimizationGoalMetadataFrequencyGoalMetadata?
    public var scrollupGoalMetadata: OptimizationGoalMetadataScrollupGoalMetadata?

    public init(conversionTagV3GoalMetadata: OptimizationGoalMetadataConversionTagV3GoalMetadata? = nil, frequencyGoalMetadata: OptimizationGoalMetadataFrequencyGoalMetadata? = nil, scrollupGoalMetadata: OptimizationGoalMetadataScrollupGoalMetadata? = nil) {
        self.conversionTagV3GoalMetadata = conversionTagV3GoalMetadata
        self.frequencyGoalMetadata = frequencyGoalMetadata
        self.scrollupGoalMetadata = scrollupGoalMetadata
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case conversionTagV3GoalMetadata = "conversion_tag_v3_goal_metadata"
        case frequencyGoalMetadata = "frequency_goal_metadata"
        case scrollupGoalMetadata = "scrollup_goal_metadata"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(conversionTagV3GoalMetadata, forKey: .conversionTagV3GoalMetadata)
        try container.encodeIfPresent(frequencyGoalMetadata, forKey: .frequencyGoalMetadata)
        try container.encodeIfPresent(scrollupGoalMetadata, forKey: .scrollupGoalMetadata)
    }
}

