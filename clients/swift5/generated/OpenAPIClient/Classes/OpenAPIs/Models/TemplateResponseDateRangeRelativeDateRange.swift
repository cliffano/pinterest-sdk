//
// TemplateResponseDateRangeRelativeDateRange.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** The relative date range of the template */
public struct TemplateResponseDateRangeRelativeDateRange: Codable, JSONEncodable, Hashable {

    /** The date range type */
    public var type: String?
    /** The start date of the date range */
    public var startDaysInPast: Double?
    /** The end date of the date range */
    public var endDaysInPast: Double?

    public init(type: String? = nil, startDaysInPast: Double? = nil, endDaysInPast: Double? = nil) {
        self.type = type
        self.startDaysInPast = startDaysInPast
        self.endDaysInPast = endDaysInPast
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case type
        case startDaysInPast = "start_days_in_past"
        case endDaysInPast = "end_days_in_past"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(type, forKey: .type)
        try container.encodeIfPresent(startDaysInPast, forKey: .startDaysInPast)
        try container.encodeIfPresent(endDaysInPast, forKey: .endDaysInPast)
    }
}

