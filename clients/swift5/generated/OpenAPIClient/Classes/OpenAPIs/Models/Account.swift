//
// Account.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

public struct Account: Codable, JSONEncodable, Hashable {

    public enum AccountType: String, Codable, CaseIterable {
        case pinner = "PINNER"
        case business = "BUSINESS"
    }
    static let idRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    /** Type of account */
    public var accountType: AccountType?
    /** User account ID. */
    public var id: String?
    public var profileImage: String?
    public var websiteUrl: String?
    public var username: String?
    /** Profile about description. */
    public var about: String?
    public var businessName: String?
    /** User account board count.<br/>**Note**: Board count on user account level may differ from counts found elsewhere due to attribution of collaborative Boards. */
    public var boardCount: Int?
    /** User account pin count. This includes both created and saved pins. */
    public var pinCount: Int?
    /** User account follower count. */
    public var followerCount: Int?
    /** User account following count. */
    public var followingCount: Int?
    /** User account monthly views. */
    public var monthlyViews: Int?

    public init(accountType: AccountType? = nil, id: String? = nil, profileImage: String? = nil, websiteUrl: String? = nil, username: String? = nil, about: String? = nil, businessName: String? = nil, boardCount: Int? = nil, pinCount: Int? = nil, followerCount: Int? = nil, followingCount: Int? = nil, monthlyViews: Int? = nil) {
        self.accountType = accountType
        self.id = id
        self.profileImage = profileImage
        self.websiteUrl = websiteUrl
        self.username = username
        self.about = about
        self.businessName = businessName
        self.boardCount = boardCount
        self.pinCount = pinCount
        self.followerCount = followerCount
        self.followingCount = followingCount
        self.monthlyViews = monthlyViews
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case accountType = "account_type"
        case id
        case profileImage = "profile_image"
        case websiteUrl = "website_url"
        case username
        case about
        case businessName = "business_name"
        case boardCount = "board_count"
        case pinCount = "pin_count"
        case followerCount = "follower_count"
        case followingCount = "following_count"
        case monthlyViews = "monthly_views"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(accountType, forKey: .accountType)
        try container.encodeIfPresent(id, forKey: .id)
        try container.encodeIfPresent(profileImage, forKey: .profileImage)
        try container.encodeIfPresent(websiteUrl, forKey: .websiteUrl)
        try container.encodeIfPresent(username, forKey: .username)
        try container.encodeIfPresent(about, forKey: .about)
        try container.encodeIfPresent(businessName, forKey: .businessName)
        try container.encodeIfPresent(boardCount, forKey: .boardCount)
        try container.encodeIfPresent(pinCount, forKey: .pinCount)
        try container.encodeIfPresent(followerCount, forKey: .followerCount)
        try container.encodeIfPresent(followingCount, forKey: .followingCount)
        try container.encodeIfPresent(monthlyViews, forKey: .monthlyViews)
    }
}

