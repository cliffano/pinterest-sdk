//
// LeadFormQuestionFieldType.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Lead form question field type */
public enum LeadFormQuestionFieldType: String, Codable, CaseIterable {
    case textField = "TEXT_FIELD"
    case textArea = "TEXT_AREA"
    case radioList = "RADIO_LIST"
    case checkbox = "CHECKBOX"
    case null = "null"
}
