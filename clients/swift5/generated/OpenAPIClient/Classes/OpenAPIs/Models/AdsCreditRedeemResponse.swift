//
// AdsCreditRedeemResponse.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct AdsCreditRedeemResponse: Codable, JSONEncodable, Hashable {

    /** Returns true if the offer code was successfully applied(validateOnly=false) or can be applied(validateOnly=true). */
    public var success: Bool?
    /** Error code type if error occurs */
    public var errorCode: Int?
    /** Reason for failure */
    public var errorMessage: String?

    public init(success: Bool? = nil, errorCode: Int? = nil, errorMessage: String? = nil) {
        self.success = success
        self.errorCode = errorCode
        self.errorMessage = errorMessage
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case success
        case errorCode
        case errorMessage
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(success, forKey: .success)
        try container.encodeIfPresent(errorCode, forKey: .errorCode)
        try container.encodeIfPresent(errorMessage, forKey: .errorMessage)
    }
}

