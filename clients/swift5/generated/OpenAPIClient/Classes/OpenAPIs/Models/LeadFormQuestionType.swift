//
// LeadFormQuestionType.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Lead form question type */
public enum LeadFormQuestionType: String, Codable, CaseIterable {
    case custom = "CUSTOM"
    case fullName = "FULL_NAME"
    case firstName = "FIRST_NAME"
    case lastName = "LAST_NAME"
    case email = "EMAIL"
    case phoneNumber = "PHONE_NUMBER"
    case zipCode = "ZIP_CODE"
    case age = "AGE"
    case gender = "GENDER"
    case city = "CITY"
    case country = "COUNTRY"
    case preferredContactMethod = "PREFERRED_CONTACT_METHOD"
    case stateProvince = "STATE_PROVINCE"
    case address = "ADDRESS"
    case dateOfBirth = "DATE_OF_BIRTH"
}