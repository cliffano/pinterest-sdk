//
// SSIOEditInsertionOrderRequest.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct SSIOEditInsertionOrderRequest: Codable, JSONEncodable, Hashable {

    static let startDateRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^(\\d{4})-(\\d{2})-(\\d{2})$/")
    static let endDateRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^(\\d{4})-(\\d{2})-(\\d{2})$/")
    /** Starting date of time period. Format: YYYY-MM-DD */
    public var startDate: String?
    /** End date of time period. Format: YYYY-MM-DD */
    public var endDate: String?
    /** The po number */
    public var poNumber: String?
    /** If Budget order line, the budget amount. */
    public var budgetAmount: Double?
    /** The billing contact first name */
    public var billingContactFirstname: String?
    /** The billing contact last name */
    public var billingContactLastname: String?
    /** The billing contact email */
    public var billingContactEmail: String?
    /** The media contact first name */
    public var mediaContactFirstname: String?
    /** The media contact last name */
    public var mediaContactLastname: String?
    /** The media contact email */
    public var mediaContactEmail: String?
    /** URL link for agency */
    public var agencyLink: String?
    /** The email of user submitting the insertion order */
    public var userEmail: String?
    /** LineId in the Oracle DB */
    public var oracleLineId: String?
    /** OrderId in SFDC */
    public var salesforceOrderId: String?
    /** OrderLineId in SFDC */
    public var salesforceOrderLineId: String?
    /** Ads manager OrderLineId */
    public var adsManagerOrderLineId: String?

    public init(startDate: String? = nil, endDate: String? = nil, poNumber: String? = nil, budgetAmount: Double? = nil, billingContactFirstname: String? = nil, billingContactLastname: String? = nil, billingContactEmail: String? = nil, mediaContactFirstname: String? = nil, mediaContactLastname: String? = nil, mediaContactEmail: String? = nil, agencyLink: String? = nil, userEmail: String? = nil, oracleLineId: String? = nil, salesforceOrderId: String? = nil, salesforceOrderLineId: String? = nil, adsManagerOrderLineId: String? = nil) {
        self.startDate = startDate
        self.endDate = endDate
        self.poNumber = poNumber
        self.budgetAmount = budgetAmount
        self.billingContactFirstname = billingContactFirstname
        self.billingContactLastname = billingContactLastname
        self.billingContactEmail = billingContactEmail
        self.mediaContactFirstname = mediaContactFirstname
        self.mediaContactLastname = mediaContactLastname
        self.mediaContactEmail = mediaContactEmail
        self.agencyLink = agencyLink
        self.userEmail = userEmail
        self.oracleLineId = oracleLineId
        self.salesforceOrderId = salesforceOrderId
        self.salesforceOrderLineId = salesforceOrderLineId
        self.adsManagerOrderLineId = adsManagerOrderLineId
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case startDate = "start_date"
        case endDate = "end_date"
        case poNumber = "po_number"
        case budgetAmount = "budget_amount"
        case billingContactFirstname = "billing_contact_firstname"
        case billingContactLastname = "billing_contact_lastname"
        case billingContactEmail = "billing_contact_email"
        case mediaContactFirstname = "media_contact_firstname"
        case mediaContactLastname = "media_contact_lastname"
        case mediaContactEmail = "media_contact_email"
        case agencyLink = "agency_link"
        case userEmail = "user_email"
        case oracleLineId = "oracle_line_id"
        case salesforceOrderId = "salesforce_order_id"
        case salesforceOrderLineId = "salesforce_order_line_id"
        case adsManagerOrderLineId = "ads_manager_order_line_id"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(startDate, forKey: .startDate)
        try container.encodeIfPresent(endDate, forKey: .endDate)
        try container.encodeIfPresent(poNumber, forKey: .poNumber)
        try container.encodeIfPresent(budgetAmount, forKey: .budgetAmount)
        try container.encodeIfPresent(billingContactFirstname, forKey: .billingContactFirstname)
        try container.encodeIfPresent(billingContactLastname, forKey: .billingContactLastname)
        try container.encodeIfPresent(billingContactEmail, forKey: .billingContactEmail)
        try container.encodeIfPresent(mediaContactFirstname, forKey: .mediaContactFirstname)
        try container.encodeIfPresent(mediaContactLastname, forKey: .mediaContactLastname)
        try container.encodeIfPresent(mediaContactEmail, forKey: .mediaContactEmail)
        try container.encodeIfPresent(agencyLink, forKey: .agencyLink)
        try container.encodeIfPresent(userEmail, forKey: .userEmail)
        try container.encodeIfPresent(oracleLineId, forKey: .oracleLineId)
        try container.encodeIfPresent(salesforceOrderId, forKey: .salesforceOrderId)
        try container.encodeIfPresent(salesforceOrderLineId, forKey: .salesforceOrderLineId)
        try container.encodeIfPresent(adsManagerOrderLineId, forKey: .adsManagerOrderLineId)
    }
}

