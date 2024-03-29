//
// SSIOAccountItem.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct SSIOAccountItem: Codable, JSONEncodable, Hashable {

    /** Salesforce id for billto_info */
    public var id: String?
    /** Salesforce id for IO Terms and Conditions */
    public var ioTermsId: String?
    /** Salesforce text for IO Terms and Conditions */
    public var ioTerms: String?
    /** Salesforce id for US Terms and Conditions */
    public var usTermsId: String?
    /** Salesforce text for US Terms and Conditions */
    public var usTerms: String?
    /** Salesforce id for Rest of the World Terms and Conditions */
    public var rowTermsId: String?
    /** Salesforce text for Rest of the World Terms and Conditions */
    public var rowTerms: String?
    /** Insertion Order Type - Pinterest Paper or Agency Paper */
    public var ioType: String?
    /** Address information that is associated with this account. */
    public var addresses: [SSIOAccountAddress]?

    public init(id: String? = nil, ioTermsId: String? = nil, ioTerms: String? = nil, usTermsId: String? = nil, usTerms: String? = nil, rowTermsId: String? = nil, rowTerms: String? = nil, ioType: String? = nil, addresses: [SSIOAccountAddress]? = nil) {
        self.id = id
        self.ioTermsId = ioTermsId
        self.ioTerms = ioTerms
        self.usTermsId = usTermsId
        self.usTerms = usTerms
        self.rowTermsId = rowTermsId
        self.rowTerms = rowTerms
        self.ioType = ioType
        self.addresses = addresses
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case id
        case ioTermsId = "io_terms_id"
        case ioTerms = "io_terms"
        case usTermsId = "us_terms_id"
        case usTerms = "us_terms"
        case rowTermsId = "row_terms_id"
        case rowTerms = "row_terms"
        case ioType = "io_type"
        case addresses
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(id, forKey: .id)
        try container.encodeIfPresent(ioTermsId, forKey: .ioTermsId)
        try container.encodeIfPresent(ioTerms, forKey: .ioTerms)
        try container.encodeIfPresent(usTermsId, forKey: .usTermsId)
        try container.encodeIfPresent(usTerms, forKey: .usTerms)
        try container.encodeIfPresent(rowTermsId, forKey: .rowTermsId)
        try container.encodeIfPresent(rowTerms, forKey: .rowTerms)
        try container.encodeIfPresent(ioType, forKey: .ioType)
        try container.encodeIfPresent(addresses, forKey: .addresses)
    }
}

