//
// TopVideoPinsAnalyticsResponsePinsInner.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Array with metrics, status, and pin id for the requested metric */
public struct TopVideoPinsAnalyticsResponsePinsInner: Codable, JSONEncodable, Hashable {

    /** The metric name and daily value for each requested metric */
    public var metrics: [String: Double]?
    public var dataStatus: [String: DataStatus]?
    /** The pin id */
    public var pinId: String?

    public init(metrics: [String: Double]? = nil, dataStatus: [String: DataStatus]? = nil, pinId: String? = nil) {
        self.metrics = metrics
        self.dataStatus = dataStatus
        self.pinId = pinId
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case metrics
        case dataStatus = "data_status"
        case pinId = "pin_id"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(metrics, forKey: .metrics)
        try container.encodeIfPresent(dataStatus, forKey: .dataStatus)
        try container.encodeIfPresent(pinId, forKey: .pinId)
    }
}

