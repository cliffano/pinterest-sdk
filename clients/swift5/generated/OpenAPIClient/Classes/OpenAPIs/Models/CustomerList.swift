//
// CustomerList.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CustomerList: Codable, JSONEncodable, Hashable {

    public enum Status: String, Codable, CaseIterable {
        case processing = "PROCESSING"
        case ready = "READY"
        case tooSmall = "TOO_SMALL"
        case uploading = "UPLOADING"
    }
    /** Associated ad account ID. */
    public var adAccountId: String?
    /** Creation time. Unix timestamp in seconds. */
    public var createdTime: Double?
    /** Customer list ID. */
    public var id: String?
    /** Customer list name. */
    public var name: String?
    /** Total number of list updates.  List creation counts as one batch. Each <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append</a> or <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call counts as another. List creation via the Ads Manager UI could result in more than one batch since the UI breaks up large lists. */
    public var numBatches: Double?
    /** Number of removed user records. In a <a href=\"/docs/redoc/#operation/ads_v3_customer_list_remove_handler_PUT\">Remove API</a> call, this counter increases even if the user is not found in the list. */
    public var numRemovedUserRecords: Double?
    /** Number of uploaded user records. In an <a href=\"/docs/redoc/#operation/ads_v3_customer_list_add_handler_PUT\">Append API</a> call, this counter increases even if the uploaded user is already in the list. */
    public var numUploadedUserRecords: Double?
    /** Customer list status. TOO_SMALL - the list has less than 100 Pinterest users. */
    public var status: Status?
    /** Always \"customerlist\". */
    public var type: String?
    /** Last update time. Unix timestamp in seconds. */
    public var updatedTime: Double?
    /** Customer list errors */
    public var exceptions: AnyCodable?

    public init(adAccountId: String? = nil, createdTime: Double? = nil, id: String? = nil, name: String? = nil, numBatches: Double? = nil, numRemovedUserRecords: Double? = nil, numUploadedUserRecords: Double? = nil, status: Status? = nil, type: String? = nil, updatedTime: Double? = nil, exceptions: AnyCodable? = nil) {
        self.adAccountId = adAccountId
        self.createdTime = createdTime
        self.id = id
        self.name = name
        self.numBatches = numBatches
        self.numRemovedUserRecords = numRemovedUserRecords
        self.numUploadedUserRecords = numUploadedUserRecords
        self.status = status
        self.type = type
        self.updatedTime = updatedTime
        self.exceptions = exceptions
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case adAccountId = "ad_account_id"
        case createdTime = "created_time"
        case id
        case name
        case numBatches = "num_batches"
        case numRemovedUserRecords = "num_removed_user_records"
        case numUploadedUserRecords = "num_uploaded_user_records"
        case status
        case type
        case updatedTime = "updated_time"
        case exceptions
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(adAccountId, forKey: .adAccountId)
        try container.encodeIfPresent(createdTime, forKey: .createdTime)
        try container.encodeIfPresent(id, forKey: .id)
        try container.encodeIfPresent(name, forKey: .name)
        try container.encodeIfPresent(numBatches, forKey: .numBatches)
        try container.encodeIfPresent(numRemovedUserRecords, forKey: .numRemovedUserRecords)
        try container.encodeIfPresent(numUploadedUserRecords, forKey: .numUploadedUserRecords)
        try container.encodeIfPresent(status, forKey: .status)
        try container.encodeIfPresent(type, forKey: .type)
        try container.encodeIfPresent(updatedTime, forKey: .updatedTime)
        try container.encodeIfPresent(exceptions, forKey: .exceptions)
    }
}

