//
// CatalogsProductGroupProductCounts.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Product counts for a CatalogsProductGroup */
public struct CatalogsProductGroupProductCounts: Codable, JSONEncodable, Hashable {

    static let inStockRule = NumericRule<Double>(minimum: 0, exclusiveMinimum: false, maximum: nil, exclusiveMaximum: false, multipleOf: nil)
    static let outOfStockRule = NumericRule<Double>(minimum: 0, exclusiveMinimum: false, maximum: nil, exclusiveMaximum: false, multipleOf: nil)
    static let preorderRule = NumericRule<Double>(minimum: 0, exclusiveMinimum: false, maximum: nil, exclusiveMaximum: false, multipleOf: nil)
    static let totalRule = NumericRule<Double>(minimum: 0, exclusiveMinimum: false, maximum: nil, exclusiveMaximum: false, multipleOf: nil)
    public var inStock: Double
    public var outOfStock: Double
    public var preorder: Double
    public var total: Double

    public init(inStock: Double, outOfStock: Double, preorder: Double, total: Double) {
        self.inStock = inStock
        self.outOfStock = outOfStock
        self.preorder = preorder
        self.total = total
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case inStock = "in_stock"
        case outOfStock = "out_of_stock"
        case preorder
        case total
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(inStock, forKey: .inStock)
        try container.encode(outOfStock, forKey: .outOfStock)
        try container.encode(preorder, forKey: .preorder)
        try container.encode(total, forKey: .total)
    }
}

