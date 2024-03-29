//
// SSIOAccountAddress.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct SSIOAccountAddress: Codable, JSONEncodable, Hashable {

    /** Address display */
    public var display: String?
    /** Purpose for which the address is used, usually Billing or Businness */
    public var purpose: String?
    /** Salesforce id for address */
    public var addressId: String?
    /** Legal entity for this insertion order */
    public var orderLegalEntity: String?

    public init(display: String? = nil, purpose: String? = nil, addressId: String? = nil, orderLegalEntity: String? = nil) {
        self.display = display
        self.purpose = purpose
        self.addressId = addressId
        self.orderLegalEntity = orderLegalEntity
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case display
        case purpose
        case addressId = "address_id"
        case orderLegalEntity = "order_legal_entity"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(display, forKey: .display)
        try container.encodeIfPresent(purpose, forKey: .purpose)
        try container.encodeIfPresent(addressId, forKey: .addressId)
        try container.encodeIfPresent(orderLegalEntity, forKey: .orderLegalEntity)
    }
}

