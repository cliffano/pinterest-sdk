//
// BillingProfilesResponse.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct BillingProfilesResponse: Codable, JSONEncodable, Hashable {

    public enum CardType: String, Codable, CaseIterable {
        case unknown = "UNKNOWN"
        case visa = "VISA"
        case mastercard = "MASTERCARD"
        case americanExpress = "AMERICAN_EXPRESS"
        case discover = "DISCOVER"
        case elo = "ELO"
    }
    public enum Status: String, Codable, CaseIterable {
        case unspecified = "UNSPECIFIED"
        case valid = "VALID"
        case invalid = "INVALID"
        case pending = "PENDING"
        case deleted = "DELETED"
        case secondary = "SECONDARY"
        case pendingSecondary = "PENDING_SECONDARY"
    }
    public enum PaymentMethodBrand: String, Codable, CaseIterable {
        case unknown = "UNKNOWN"
        case visa = "VISA"
        case mastercard = "MASTERCARD"
        case americanExpress = "AMERICAN_EXPRESS"
        case discover = "DISCOVER"
        case sofort = "SOFORT"
        case dinersClub = "DINERS_CLUB"
        case elo = "ELO"
        case carteBancaire = "CARTE_BANCAIRE"
    }
    static let idRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    static let advertiserIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    /** Billing ID. */
    public var id: String?
    /** Type of the card. */
    public var cardType: CardType?
    /** Status of the billing. */
    public var status: Status?
    /** Advertiser ID of the billing. */
    public var advertiserId: String?
    /** Brand of the payment method. */
    public var paymentMethodBrand: PaymentMethodBrand?

    public init(id: String? = nil, cardType: CardType? = nil, status: Status? = nil, advertiserId: String? = nil, paymentMethodBrand: PaymentMethodBrand? = nil) {
        self.id = id
        self.cardType = cardType
        self.status = status
        self.advertiserId = advertiserId
        self.paymentMethodBrand = paymentMethodBrand
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case id
        case cardType = "card_type"
        case status
        case advertiserId = "advertiser_id"
        case paymentMethodBrand = "payment_method_brand"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(id, forKey: .id)
        try container.encodeIfPresent(cardType, forKey: .cardType)
        try container.encodeIfPresent(status, forKey: .status)
        try container.encodeIfPresent(advertiserId, forKey: .advertiserId)
        try container.encodeIfPresent(paymentMethodBrand, forKey: .paymentMethodBrand)
    }
}

