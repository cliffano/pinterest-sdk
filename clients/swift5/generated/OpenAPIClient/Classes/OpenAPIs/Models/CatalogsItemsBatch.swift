//
// CatalogsItemsBatch.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Object describing the catalogs items batch */
public struct CatalogsItemsBatch: Codable, JSONEncodable, Hashable {

    /** Array with the catalogs items processing records part of the catalogs items batch */
    public var items: [ItemProcessingRecord]?
    /** Id of the catalogs items batch */
    public var batchId: String?
    /** Time of the batch creation: YYYY-MM-DD'T'hh:mm:ssTZD */
    public var createdTime: Date?
    /** Time of the batch completion: YYYY-MM-DD'T'hh:mm:ssTZD */
    public var completedTime: Date?
    public var status: BatchOperationStatus?

    public init(items: [ItemProcessingRecord]? = nil, batchId: String? = nil, createdTime: Date? = nil, completedTime: Date? = nil, status: BatchOperationStatus? = nil) {
        self.items = items
        self.batchId = batchId
        self.createdTime = createdTime
        self.completedTime = completedTime
        self.status = status
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case items
        case batchId = "batch_id"
        case createdTime = "created_time"
        case completedTime = "completed_time"
        case status
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(items, forKey: .items)
        try container.encodeIfPresent(batchId, forKey: .batchId)
        try container.encodeIfPresent(createdTime, forKey: .createdTime)
        try container.encodeIfPresent(completedTime, forKey: .completedTime)
        try container.encodeIfPresent(status, forKey: .status)
    }
}
