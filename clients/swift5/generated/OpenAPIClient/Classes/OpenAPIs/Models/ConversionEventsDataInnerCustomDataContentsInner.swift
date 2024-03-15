//
// ConversionEventsDataInnerCustomDataContentsInner.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct ConversionEventsDataInnerCustomDataContentsInner: Codable, JSONEncodable, Hashable {

    /** The id of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section). */
    public var id: String?
    /** The price of a product. Accepted as a string in the request; it will be parsed into a double. This is the original item value before any discount. We recommend using this if you are a merchant for PageVisit, AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section). */
    public var itemPrice: String?
    /** The amount of a product. We recommend using this if you are a merchant for AddToCart and Checkouts. For detail, please check <a href=\"https://help.pinterest.com/en/business/article/before-you-get-started-with-catalogs\" target=\"_blank\">here</a> (Install the Pinterest tag section). */
    public var quantity: Int64?
    /** The name of a product. */
    public var itemName: String?
    /** The category of a product. */
    public var itemCategory: String?
    /** The brand of a product. */
    public var itemBrand: String?

    public init(id: String? = nil, itemPrice: String? = nil, quantity: Int64? = nil, itemName: String? = nil, itemCategory: String? = nil, itemBrand: String? = nil) {
        self.id = id
        self.itemPrice = itemPrice
        self.quantity = quantity
        self.itemName = itemName
        self.itemCategory = itemCategory
        self.itemBrand = itemBrand
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case id
        case itemPrice = "item_price"
        case quantity
        case itemName = "item_name"
        case itemCategory = "item_category"
        case itemBrand = "item_brand"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(id, forKey: .id)
        try container.encodeIfPresent(itemPrice, forKey: .itemPrice)
        try container.encodeIfPresent(quantity, forKey: .quantity)
        try container.encodeIfPresent(itemName, forKey: .itemName)
        try container.encodeIfPresent(itemCategory, forKey: .itemCategory)
        try container.encodeIfPresent(itemBrand, forKey: .itemBrand)
    }
}

