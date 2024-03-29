//
// SSIOAccountResponse.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct SSIOAccountResponse: Codable, JSONEncodable, Hashable {

    /** Advertiser eligible to create order lines */
    public var eligible: Bool?
    /** Advertiser eligible to update order lines */
    public var canEdit: Bool?
    /** An array of Salesforce account information that includes address, io terms, etc. */
    public var billtoInfos: [SSIOAccountItem]?
    public var currency: String?
    public var pmpNames: [SSIOAccountPMPName]?
    /** Error indicator from Salesforce which could be \"No Error\" */
    public var error: String?

    public init(eligible: Bool? = nil, canEdit: Bool? = nil, billtoInfos: [SSIOAccountItem]? = nil, currency: String? = nil, pmpNames: [SSIOAccountPMPName]? = nil, error: String? = nil) {
        self.eligible = eligible
        self.canEdit = canEdit
        self.billtoInfos = billtoInfos
        self.currency = currency
        self.pmpNames = pmpNames
        self.error = error
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case eligible
        case canEdit = "can_edit"
        case billtoInfos = "billto_infos"
        case currency
        case pmpNames = "pmp_names"
        case error
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(eligible, forKey: .eligible)
        try container.encodeIfPresent(canEdit, forKey: .canEdit)
        try container.encodeIfPresent(billtoInfos, forKey: .billtoInfos)
        try container.encodeIfPresent(currency, forKey: .currency)
        try container.encodeIfPresent(pmpNames, forKey: .pmpNames)
        try container.encodeIfPresent(error, forKey: .error)
    }
}

