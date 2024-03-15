//
// OrderLinePaidType.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Order Line Paid Type */
public enum OrderLinePaidType: String, Codable, CaseIterable {
    case paid = "PAID"
    case bonus = "BONUS"
    case makeGood = "MAKE_GOOD"
    case test = "TEST"
    case null = "null"
}
