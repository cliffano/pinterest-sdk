//
// UserFollowingFeedType.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Specifies the type of followees to be kept when filtering them. */
public enum UserFollowingFeedType: String, Codable, CaseIterable {
    case all = "ALL"
    case ranked = "RANKED"
    case creatorOnly = "CREATOR_ONLY"
    case rankedCreatorOnly = "RANKED_CREATOR_ONLY"
}
