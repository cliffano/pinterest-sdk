//
// CatalogsProductGroupFilterKeys.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct CatalogsProductGroupFilterKeys: Codable, JSONEncodable, Hashable {

    public var MIN_PRICE: CatalogsProductGroupPricingCriteria
    public var MAX_PRICE: CatalogsProductGroupPricingCriteria
    public var CURRENCY: CatalogsProductGroupCurrencyCriteria
    public var ITEM_ID: CatalogsProductGroupMultipleStringCriteria
    public var AVAILABILITY: CatalogsProductGroupMultipleStringCriteria
    public var BRAND: CatalogsProductGroupMultipleStringCriteria
    public var CONDITION: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL0: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL1: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL3: CatalogsProductGroupMultipleStringCriteria
    public var cUSTOMLABEL4: CatalogsProductGroupMultipleStringCriteria
    public var ITEM_GROUP_ID: CatalogsProductGroupMultipleStringCriteria
    public var GENDER: CatalogsProductGroupMultipleGenderCriteria
    public var pRODUCTTYPE4: CatalogsProductGroupMultipleStringListCriteria
    public var pRODUCTTYPE3: CatalogsProductGroupMultipleStringListCriteria
    public var pRODUCTTYPE2: CatalogsProductGroupMultipleStringListCriteria
    public var pRODUCTTYPE1: CatalogsProductGroupMultipleStringListCriteria
    public var pRODUCTTYPE0: CatalogsProductGroupMultipleStringListCriteria
    public var gOOGLEPRODUCTCATEGORY6: CatalogsProductGroupMultipleStringListCriteria
    public var gOOGLEPRODUCTCATEGORY5: CatalogsProductGroupMultipleStringListCriteria
    public var gOOGLEPRODUCTCATEGORY4: CatalogsProductGroupMultipleStringListCriteria
    public var gOOGLEPRODUCTCATEGORY3: CatalogsProductGroupMultipleStringListCriteria
    public var gOOGLEPRODUCTCATEGORY2: CatalogsProductGroupMultipleStringListCriteria
    public var gOOGLEPRODUCTCATEGORY1: CatalogsProductGroupMultipleStringListCriteria
    public var gOOGLEPRODUCTCATEGORY0: CatalogsProductGroupMultipleStringListCriteria

    public init(MIN_PRICE: CatalogsProductGroupPricingCriteria, MAX_PRICE: CatalogsProductGroupPricingCriteria, CURRENCY: CatalogsProductGroupCurrencyCriteria, ITEM_ID: CatalogsProductGroupMultipleStringCriteria, AVAILABILITY: CatalogsProductGroupMultipleStringCriteria, BRAND: CatalogsProductGroupMultipleStringCriteria, CONDITION: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL0: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL1: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL2: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL3: CatalogsProductGroupMultipleStringCriteria, cUSTOMLABEL4: CatalogsProductGroupMultipleStringCriteria, ITEM_GROUP_ID: CatalogsProductGroupMultipleStringCriteria, GENDER: CatalogsProductGroupMultipleGenderCriteria, pRODUCTTYPE4: CatalogsProductGroupMultipleStringListCriteria, pRODUCTTYPE3: CatalogsProductGroupMultipleStringListCriteria, pRODUCTTYPE2: CatalogsProductGroupMultipleStringListCriteria, pRODUCTTYPE1: CatalogsProductGroupMultipleStringListCriteria, pRODUCTTYPE0: CatalogsProductGroupMultipleStringListCriteria, gOOGLEPRODUCTCATEGORY6: CatalogsProductGroupMultipleStringListCriteria, gOOGLEPRODUCTCATEGORY5: CatalogsProductGroupMultipleStringListCriteria, gOOGLEPRODUCTCATEGORY4: CatalogsProductGroupMultipleStringListCriteria, gOOGLEPRODUCTCATEGORY3: CatalogsProductGroupMultipleStringListCriteria, gOOGLEPRODUCTCATEGORY2: CatalogsProductGroupMultipleStringListCriteria, gOOGLEPRODUCTCATEGORY1: CatalogsProductGroupMultipleStringListCriteria, gOOGLEPRODUCTCATEGORY0: CatalogsProductGroupMultipleStringListCriteria) {
        self.MIN_PRICE = MIN_PRICE
        self.MAX_PRICE = MAX_PRICE
        self.CURRENCY = CURRENCY
        self.ITEM_ID = ITEM_ID
        self.AVAILABILITY = AVAILABILITY
        self.BRAND = BRAND
        self.CONDITION = CONDITION
        self.cUSTOMLABEL0 = cUSTOMLABEL0
        self.cUSTOMLABEL1 = cUSTOMLABEL1
        self.cUSTOMLABEL2 = cUSTOMLABEL2
        self.cUSTOMLABEL3 = cUSTOMLABEL3
        self.cUSTOMLABEL4 = cUSTOMLABEL4
        self.ITEM_GROUP_ID = ITEM_GROUP_ID
        self.GENDER = GENDER
        self.pRODUCTTYPE4 = pRODUCTTYPE4
        self.pRODUCTTYPE3 = pRODUCTTYPE3
        self.pRODUCTTYPE2 = pRODUCTTYPE2
        self.pRODUCTTYPE1 = pRODUCTTYPE1
        self.pRODUCTTYPE0 = pRODUCTTYPE0
        self.gOOGLEPRODUCTCATEGORY6 = gOOGLEPRODUCTCATEGORY6
        self.gOOGLEPRODUCTCATEGORY5 = gOOGLEPRODUCTCATEGORY5
        self.gOOGLEPRODUCTCATEGORY4 = gOOGLEPRODUCTCATEGORY4
        self.gOOGLEPRODUCTCATEGORY3 = gOOGLEPRODUCTCATEGORY3
        self.gOOGLEPRODUCTCATEGORY2 = gOOGLEPRODUCTCATEGORY2
        self.gOOGLEPRODUCTCATEGORY1 = gOOGLEPRODUCTCATEGORY1
        self.gOOGLEPRODUCTCATEGORY0 = gOOGLEPRODUCTCATEGORY0
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case MIN_PRICE
        case MAX_PRICE
        case CURRENCY
        case ITEM_ID
        case AVAILABILITY
        case BRAND
        case CONDITION
        case cUSTOMLABEL0 = "CUSTOM_LABEL_0"
        case cUSTOMLABEL1 = "CUSTOM_LABEL_1"
        case cUSTOMLABEL2 = "CUSTOM_LABEL_2"
        case cUSTOMLABEL3 = "CUSTOM_LABEL_3"
        case cUSTOMLABEL4 = "CUSTOM_LABEL_4"
        case ITEM_GROUP_ID
        case GENDER
        case pRODUCTTYPE4 = "PRODUCT_TYPE_4"
        case pRODUCTTYPE3 = "PRODUCT_TYPE_3"
        case pRODUCTTYPE2 = "PRODUCT_TYPE_2"
        case pRODUCTTYPE1 = "PRODUCT_TYPE_1"
        case pRODUCTTYPE0 = "PRODUCT_TYPE_0"
        case gOOGLEPRODUCTCATEGORY6 = "GOOGLE_PRODUCT_CATEGORY_6"
        case gOOGLEPRODUCTCATEGORY5 = "GOOGLE_PRODUCT_CATEGORY_5"
        case gOOGLEPRODUCTCATEGORY4 = "GOOGLE_PRODUCT_CATEGORY_4"
        case gOOGLEPRODUCTCATEGORY3 = "GOOGLE_PRODUCT_CATEGORY_3"
        case gOOGLEPRODUCTCATEGORY2 = "GOOGLE_PRODUCT_CATEGORY_2"
        case gOOGLEPRODUCTCATEGORY1 = "GOOGLE_PRODUCT_CATEGORY_1"
        case gOOGLEPRODUCTCATEGORY0 = "GOOGLE_PRODUCT_CATEGORY_0"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(MIN_PRICE, forKey: .MIN_PRICE)
        try container.encode(MAX_PRICE, forKey: .MAX_PRICE)
        try container.encode(CURRENCY, forKey: .CURRENCY)
        try container.encode(ITEM_ID, forKey: .ITEM_ID)
        try container.encode(AVAILABILITY, forKey: .AVAILABILITY)
        try container.encode(BRAND, forKey: .BRAND)
        try container.encode(CONDITION, forKey: .CONDITION)
        try container.encode(cUSTOMLABEL0, forKey: .cUSTOMLABEL0)
        try container.encode(cUSTOMLABEL1, forKey: .cUSTOMLABEL1)
        try container.encode(cUSTOMLABEL2, forKey: .cUSTOMLABEL2)
        try container.encode(cUSTOMLABEL3, forKey: .cUSTOMLABEL3)
        try container.encode(cUSTOMLABEL4, forKey: .cUSTOMLABEL4)
        try container.encode(ITEM_GROUP_ID, forKey: .ITEM_GROUP_ID)
        try container.encode(GENDER, forKey: .GENDER)
        try container.encode(pRODUCTTYPE4, forKey: .pRODUCTTYPE4)
        try container.encode(pRODUCTTYPE3, forKey: .pRODUCTTYPE3)
        try container.encode(pRODUCTTYPE2, forKey: .pRODUCTTYPE2)
        try container.encode(pRODUCTTYPE1, forKey: .pRODUCTTYPE1)
        try container.encode(pRODUCTTYPE0, forKey: .pRODUCTTYPE0)
        try container.encode(gOOGLEPRODUCTCATEGORY6, forKey: .gOOGLEPRODUCTCATEGORY6)
        try container.encode(gOOGLEPRODUCTCATEGORY5, forKey: .gOOGLEPRODUCTCATEGORY5)
        try container.encode(gOOGLEPRODUCTCATEGORY4, forKey: .gOOGLEPRODUCTCATEGORY4)
        try container.encode(gOOGLEPRODUCTCATEGORY3, forKey: .gOOGLEPRODUCTCATEGORY3)
        try container.encode(gOOGLEPRODUCTCATEGORY2, forKey: .gOOGLEPRODUCTCATEGORY2)
        try container.encode(gOOGLEPRODUCTCATEGORY1, forKey: .gOOGLEPRODUCTCATEGORY1)
        try container.encode(gOOGLEPRODUCTCATEGORY0, forKey: .gOOGLEPRODUCTCATEGORY0)
    }
}

