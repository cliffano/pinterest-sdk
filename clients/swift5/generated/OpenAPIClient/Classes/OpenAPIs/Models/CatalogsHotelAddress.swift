//
// CatalogsHotelAddress.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CatalogsHotelAddress: Codable, JSONEncodable, Hashable {

    /** Primary street address of hotel. */
    public var addr1: String?
    /** City where the hotel is located. */
    public var city: String?
    /** State, county, province, where the hotel is located. */
    public var region: String?
    /** Country where the hotel is located. */
    public var country: String?
    /** Required for countries with a postal code system. Postal or zip code of the hotel. */
    public var postalCode: String?

    public init(addr1: String? = nil, city: String? = nil, region: String? = nil, country: String? = nil, postalCode: String? = nil) {
        self.addr1 = addr1
        self.city = city
        self.region = region
        self.country = country
        self.postalCode = postalCode
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case addr1
        case city
        case region
        case country
        case postalCode = "postal_code"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(addr1, forKey: .addr1)
        try container.encodeIfPresent(city, forKey: .city)
        try container.encodeIfPresent(region, forKey: .region)
        try container.encodeIfPresent(country, forKey: .country)
        try container.encodeIfPresent(postalCode, forKey: .postalCode)
    }
}

