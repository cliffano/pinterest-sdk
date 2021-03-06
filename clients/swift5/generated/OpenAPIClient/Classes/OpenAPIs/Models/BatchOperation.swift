//
// BatchOperation.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** The operation performed by the batch */
public enum BatchOperation: String, Codable, CaseIterable {
    case update = "UPDATE"
    case create = "CREATE"
    case upsert = "UPSERT"
}
