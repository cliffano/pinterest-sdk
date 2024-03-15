//
// BidFloorSpec.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct BidFloorSpec: Codable, JSONEncodable, Hashable {

    public var countries: [Country]?
    public var currency: Currency
    public var objectiveType: ObjectiveType?
    public var billableEvent: ActionType
    public var optimizationGoalMetadata: OptimizationGoalMetadata?
    public var creativeType: CreativeType?

    public init(countries: [Country]? = nil, currency: Currency, objectiveType: ObjectiveType? = nil, billableEvent: ActionType, optimizationGoalMetadata: OptimizationGoalMetadata? = nil, creativeType: CreativeType? = nil) {
        self.countries = countries
        self.currency = currency
        self.objectiveType = objectiveType
        self.billableEvent = billableEvent
        self.optimizationGoalMetadata = optimizationGoalMetadata
        self.creativeType = creativeType
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case countries
        case currency
        case objectiveType = "objective_type"
        case billableEvent = "billable_event"
        case optimizationGoalMetadata = "optimization_goal_metadata"
        case creativeType = "creative_type"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(countries, forKey: .countries)
        try container.encode(currency, forKey: .currency)
        try container.encodeIfPresent(objectiveType, forKey: .objectiveType)
        try container.encode(billableEvent, forKey: .billableEvent)
        try container.encodeIfPresent(optimizationGoalMetadata, forKey: .optimizationGoalMetadata)
        try container.encodeIfPresent(creativeType, forKey: .creativeType)
    }
}

