//
// ConversionEventsUserData.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Object containing customer information data. Note, It is required at least one of 1) em, 2) hashed_maids or 3) pair client_ip_address + client_user_agent. */
public struct ConversionEventsUserData: Codable, JSONEncodable, Hashable {

    /** Sha256 hashes of user's phone numbers, only digits with country code, area code, and number. Remove any symbols, letters, spaces and leading zeros. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA. */
    public var ph: [String]?
    /** Sha256 hashes of user's gender, in lowercase. Either \"f\" or \"m\" or \"n\" for non-binary gender. */
    public var ge: [String]?
    /** Sha256 hashes of user's date of birthday, given as year, month, and day. */
    public var db: [String]?
    /** Sha256 hashes of user's last name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA. */
    public var ln: [String]?
    /** Sha256 hashes of user's first name, in lowercase. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA. */
    public var fn: [String]?
    /** Sha256 hashes of user's city, in lowercase, and without spaces or punctuation. User residency city (mostly billing). */
    public var ct: [String]?
    /** Sha256 hashes of user's state, given as a two-letter code in lowercase. User residency state (mostly billing). */
    public var st: [String]?
    /** Sha256 hashes of user's zipcode, only digits. User residency zipcode (mostly billing). */
    public var zp: [String]?
    /** Sha256 hashes of two-character ISO-3166 country code indicating the user's country, in lowercase. */
    public var country: [String]?
    /** Sha256 hashes of the unique id from the advertiser that identifies a user in their space, e.g. user id, loyalty id, etc. We highly recommend this on all events. It may improve reporting performance such as ROAS/CPA. */
    public var externalId: [String]?
    /** The unique identifier stored in _epik cookie on your domain or &epik= query parameter in the URL. We highly recommend this on checkout events at least. It may improve reporting performance such as ROAS/CPA. */
    public var clickId: String?
    /** A unique identifier of visitors' information defined by third party partners. e.g RampID */
    public var partnerId: String?

    public init(ph: [String]? = nil, ge: [String]? = nil, db: [String]? = nil, ln: [String]? = nil, fn: [String]? = nil, ct: [String]? = nil, st: [String]? = nil, zp: [String]? = nil, country: [String]? = nil, externalId: [String]? = nil, clickId: String? = nil, partnerId: String? = nil) {
        self.ph = ph
        self.ge = ge
        self.db = db
        self.ln = ln
        self.fn = fn
        self.ct = ct
        self.st = st
        self.zp = zp
        self.country = country
        self.externalId = externalId
        self.clickId = clickId
        self.partnerId = partnerId
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case ph
        case ge
        case db
        case ln
        case fn
        case ct
        case st
        case zp
        case country
        case externalId = "external_id"
        case clickId = "click_id"
        case partnerId = "partner_id"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(ph, forKey: .ph)
        try container.encodeIfPresent(ge, forKey: .ge)
        try container.encodeIfPresent(db, forKey: .db)
        try container.encodeIfPresent(ln, forKey: .ln)
        try container.encodeIfPresent(fn, forKey: .fn)
        try container.encodeIfPresent(ct, forKey: .ct)
        try container.encodeIfPresent(st, forKey: .st)
        try container.encodeIfPresent(zp, forKey: .zp)
        try container.encodeIfPresent(country, forKey: .country)
        try container.encodeIfPresent(externalId, forKey: .externalId)
        try container.encodeIfPresent(clickId, forKey: .clickId)
        try container.encodeIfPresent(partnerId, forKey: .partnerId)
    }
}

