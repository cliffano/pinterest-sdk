//
// CatalogsHotelProductGroupFilterKeys.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CatalogsHotelProductGroupFilterKeys: Codable, JSONEncodable, Hashable {

    public var PRICE: CatalogsProductGroupPricingCurrencyCriteria
    public var HOTEL_ID: CatalogsProductGroupMultipleStringCriteria
    public var BRAND: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL0: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL1: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL3: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL4: CatalogsProductGroupMultipleStringCriteria
    public var COUNTRY: CatalogsProductGroupMultipleCountriesCriteria

    public init(PRICE: CatalogsProductGroupPricingCurrencyCriteria, HOTEL_ID: CatalogsProductGroupMultipleStringCriteria, BRAND: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL0: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL1: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL3: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL4: CatalogsProductGroupMultipleStringCriteria, COUNTRY: CatalogsProductGroupMultipleCountriesCriteria) {
        self.PRICE = PRICE
        self.HOTEL_ID = HOTEL_ID
        self.BRAND = BRAND
        self.cUSTOMLABEL0 = cUSTOMLABEL0
        self.cUSTOMLABEL1 = cUSTOMLABEL1
        self.cUSTOMLABEL2 = cUSTOMLABEL2
        self.cUSTOMLABEL3 = cUSTOMLABEL3
        self.cUSTOMLABEL4 = cUSTOMLABEL4
        self.COUNTRY = COUNTRY
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case PRICE
        case HOTEL_ID
        case BRAND
        case cUSTOMLABEL0 = "CUSTOM_LABEL_0"
        case cUSTOMLABEL1 = "CUSTOM_LABEL_1"
        case cUSTOMLABEL2 = "CUSTOM_LABEL_2"
        case cUSTOMLABEL3 = "CUSTOM_LABEL_3"
        case cUSTOMLABEL4 = "CUSTOM_LABEL_4"
        case COUNTRY
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(PRICE, forKey: .PRICE)
        try container.encode(HOTEL_ID, forKey: .HOTEL_ID)
        try container.encode(BRAND, forKey: .BRAND)
        try container.encode(cUSTOMLABEL0, forKey: .cUSTOMLABEL0)
        try container.encode(cUSTOMLABEL1, forKey: .cUSTOMLABEL1)
        try container.encode(cUSTOMLABEL2, forKey: .cUSTOMLABEL2)
        try container.encode(cUSTOMLABEL3, forKey: .cUSTOMLABEL3)
        try container.encode(cUSTOMLABEL4, forKey: .cUSTOMLABEL4)
        try container.encode(COUNTRY, forKey: .COUNTRY)
    }
}

