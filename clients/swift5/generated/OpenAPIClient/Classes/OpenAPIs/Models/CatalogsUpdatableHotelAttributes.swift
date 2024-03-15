//
// CatalogsUpdatableHotelAttributes.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CatalogsUpdatableHotelAttributes: Codable, JSONEncodable, Hashable {

    /** The hotel's name. */
    public var name: String?
    /** Link to the product page */
    public var link: String?
    /** Brief description of the hotel. */
    public var description: String?
    /** The brand to which this hotel belongs to. */
    public var brand: String?
    /** Latitude of the hotel. */
    public var latitude: Double?
    /** Longitude of the hotel. */
    public var longitude: Double?
    /** A list of neighborhoods where the hotel is located */
    public var neighborhood: [String]?
    public var address: CatalogsHotelAddress?
    /** Custom grouping of hotels */
    public var customLabel0: String?
    /** Custom grouping of hotels */
    public var customLabel1: String?
    /** Custom grouping of hotels */
    public var customLabel2: String?
    /** Custom grouping of hotels */
    public var customLabel3: String?
    /** Custom grouping of hotels */
    public var customLabel4: String?
    /** The type of property. The category can be any type of internal description desired. */
    public var category: String?
    /** Base price of the hotel room per night followed by the ISO currency code */
    public var basePrice: String?
    /** Sale price of a hotel room per night. Used to advertise discounts off the regular price of the hotel. */
    public var salePrice: String?
    public var guestRatings: CatalogsHotelGuestRatings?

    public init(name: String? = nil, link: String? = nil, description: String? = nil, brand: String? = nil, latitude: Double? = nil, longitude: Double? = nil, neighborhood: [String]? = nil, address: CatalogsHotelAddress? = nil, customLabel0: String? = nil, customLabel1: String? = nil, customLabel2: String? = nil, customLabel3: String? = nil, customLabel4: String? = nil, category: String? = nil, basePrice: String? = nil, salePrice: String? = nil, guestRatings: CatalogsHotelGuestRatings? = nil) {
        self.name = name
        self.link = link
        self.description = description
        self.brand = brand
        self.latitude = latitude
        self.longitude = longitude
        self.neighborhood = neighborhood
        self.address = address
        self.customLabel0 = customLabel0
        self.customLabel1 = customLabel1
        self.customLabel2 = customLabel2
        self.customLabel3 = customLabel3
        self.customLabel4 = customLabel4
        self.category = category
        self.basePrice = basePrice
        self.salePrice = salePrice
        self.guestRatings = guestRatings
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case name
        case link
        case description
        case brand
        case latitude
        case longitude
        case neighborhood
        case address
        case customLabel0 = "custom_label_0"
        case customLabel1 = "custom_label_1"
        case customLabel2 = "custom_label_2"
        case customLabel3 = "custom_label_3"
        case customLabel4 = "custom_label_4"
        case category
        case basePrice = "base_price"
        case salePrice = "sale_price"
        case guestRatings = "guest_ratings"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(name, forKey: .name)
        try container.encodeIfPresent(link, forKey: .link)
        try container.encodeIfPresent(description, forKey: .description)
        try container.encodeIfPresent(brand, forKey: .brand)
        try container.encodeIfPresent(latitude, forKey: .latitude)
        try container.encodeIfPresent(longitude, forKey: .longitude)
        try container.encodeIfPresent(neighborhood, forKey: .neighborhood)
        try container.encodeIfPresent(address, forKey: .address)
        try container.encodeIfPresent(customLabel0, forKey: .customLabel0)
        try container.encodeIfPresent(customLabel1, forKey: .customLabel1)
        try container.encodeIfPresent(customLabel2, forKey: .customLabel2)
        try container.encodeIfPresent(customLabel3, forKey: .customLabel3)
        try container.encodeIfPresent(customLabel4, forKey: .customLabel4)
        try container.encodeIfPresent(category, forKey: .category)
        try container.encodeIfPresent(basePrice, forKey: .basePrice)
        try container.encodeIfPresent(salePrice, forKey: .salePrice)
        try container.encodeIfPresent(guestRatings, forKey: .guestRatings)
    }
}

