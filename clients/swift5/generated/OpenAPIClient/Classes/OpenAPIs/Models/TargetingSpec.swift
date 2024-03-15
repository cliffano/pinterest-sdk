//
// TargetingSpec.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Ad group targeting specification defining the ad group target audience. For example, {\&quot;APPTYPE\&quot;:[\&quot;iphone\&quot;], \&quot;GENDER\&quot;:[\&quot;male\&quot;], \&quot;LOCALE\&quot;:[\&quot;en-US\&quot;], \&quot;LOCATION\&quot;:[\&quot;501\&quot;], \&quot;AGE_BUCKET\&quot;:[\&quot;25-34\&quot;]} */
public struct TargetingSpec: Codable, JSONEncodable, Hashable {

    public enum AGEBUCKET: String, Codable, CaseIterable {
        case _1824 = "18-24"
        case _21Plus = "21+"
        case _2534 = "25-34"
        case _3544 = "35-44"
        case _4549 = "45-49"
        case _5054 = "50-54"
        case _5564 = "55-64"
        case _65Plus = "65+"
    }
    public enum APPTYPE: String, Codable, CaseIterable {
        case androidMobile = "android_mobile"
        case androidTablet = "android_tablet"
        case ipad = "ipad"
        case iphone = "iphone"
        case web = "web"
        case webMobile = "web_mobile"
    }
    public enum GENDER: String, Codable, CaseIterable {
        case unknown = "unknown"
        case male = "male"
        case female = "female"
    }
    public enum TARGETINGSTRATEGY: String, Codable, CaseIterable {
        case chooseYourOwn = "CHOOSE_YOUR_OWN"
        case findNewCustomers = "FIND_NEW_CUSTOMERS"
        case reconnectWithUsers = "RECONNECT_WITH_USERS"
    }
    /** Age ranges. If the AGE_BUCKET field is missing, the default behavior in terms of ad delivery is that **All age buckets** will be targeted. */
    public var AGE_BUCKET: [AGEBUCKET]?
    /** Allowed devices. If the APPTYPE field is missing, the default behavior in terms of ad delivery is that **All devices/apptypes** will be targeted. */
    public var APPTYPE: [APPTYPEEnum]?
    /** Excluded customer list IDs. Used to drive new customer acquisition goals. For example: [\"2542620905475\"]. Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_EXCLUDE field is missing, the default behavior in terms of ad delivery is that **No users will be excluded**. */
    public var AUDIENCE_EXCLUDE: [String]?
    /** Targeted customer list IDs. For example: [\"2542620905473\"]. Audience lists need to have at least 100 people with Pinterest accounts in them Audience lists need to have at least 100 people with Pinterest accounts in them. If the AUDIENCE_INCLUDE field is missing, the default behavior in terms of ad delivery is that **All users will be included**. */
    public var AUDIENCE_INCLUDE: [String]?
    /** Targeted genders. Values: [\"unknown\",\"male\",\"female\"]. If the GENDER field is missing, the default behavior in terms of ad delivery is that **All genders will be targeted**. */
    public var GENDER: [GENDEREnum]?
    /** Location region codes, e.g., \"BE-VOV\" (East Flanders, Belgium) For complete list, <a href=\"https://help.pinterest.com/sub/helpcenter/partner/pinterest_location_targeting_codes.xlsx\" target=\"_blank\">click here</a> or postal codes, e.g., \"US-94107\". Use either region codes or postal codes but not both. If the GEO field is missing, the default behavior in terms of ad delivery is that **No geos will be selected**. */
    public var GEO: [String]?
    /** Array of interest object IDs. If the INTEREST field is missing, the default behavior in terms of ad delivery is that **All interests will be targeted**. */
    public var INTEREST: [String]?
    /** 24 ISO 639-1 two letter language codes. If the LOCALE field is missing, the default behavior in terms of ad delivery is that **All languages will be target, only english non-sublanguage will be targeted**. */
    public var LOCALE: [String]?
    /** 22 ISO Alpha 2 two letter country codes or US Nielsen DMA (Designated Market Area) codes (location region codes) (e.g., [\"US\", \"807\"]). For complete list, click here. Location-Country and Location-Metro codes apply. If the LOCATION field is missing, the default behavior in terms of ad delivery is that **Selects default country if not specified (US) and all regions within that country**. */
    public var LOCATION: [String]?
    /** Array of object: lookback_window [Integer]: Number of days ago to start lookback timeframe for dynamic retargeting tag_types [Array of integer]: Event types to target for dynamic retargeting exclusion_window [Integer]: Number of days ago to stop lookback timeframe for dynamic retargeting */
    public var SHOPPING_RETARGETING: [TargetingSpecSHOPPINGRETARGETING]?
    /**  */
    public var TARGETING_STRATEGY: [TARGETINGSTRATEGY]?

    public init(AGE_BUCKET: [AGEBUCKET]? = nil, APPTYPE: [APPTYPEEnum]? = nil, AUDIENCE_EXCLUDE: [String]? = nil, AUDIENCE_INCLUDE: [String]? = nil, GENDER: [GENDEREnum]? = nil, GEO: [String]? = nil, INTEREST: [String]? = nil, LOCALE: [String]? = nil, LOCATION: [String]? = nil, SHOPPING_RETARGETING: [TargetingSpecSHOPPINGRETARGETING]? = nil, TARGETING_STRATEGY: [TARGETINGSTRATEGY]? = nil) {
        self.AGE_BUCKET = AGE_BUCKET
        self.APPTYPE = APPTYPE
        self.AUDIENCE_EXCLUDE = AUDIENCE_EXCLUDE
        self.AUDIENCE_INCLUDE = AUDIENCE_INCLUDE
        self.GENDER = GENDER
        self.GEO = GEO
        self.INTEREST = INTEREST
        self.LOCALE = LOCALE
        self.LOCATION = LOCATION
        self.SHOPPING_RETARGETING = SHOPPING_RETARGETING
        self.TARGETING_STRATEGY = TARGETING_STRATEGY
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case AGE_BUCKET
        case APPTYPE
        case AUDIENCE_EXCLUDE
        case AUDIENCE_INCLUDE = "AUDIENCE_INCLUDE'"
        case GENDER
        case GEO
        case INTEREST
        case LOCALE
        case LOCATION
        case SHOPPING_RETARGETING
        case TARGETING_STRATEGY
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(AGE_BUCKET, forKey: .AGE_BUCKET)
        try container.encodeIfPresent(APPTYPE, forKey: .APPTYPE)
        try container.encodeIfPresent(AUDIENCE_EXCLUDE, forKey: .AUDIENCE_EXCLUDE)
        try container.encodeIfPresent(AUDIENCE_INCLUDE, forKey: .AUDIENCE_INCLUDE)
        try container.encodeIfPresent(GENDER, forKey: .GENDER)
        try container.encodeIfPresent(GEO, forKey: .GEO)
        try container.encodeIfPresent(INTEREST, forKey: .INTEREST)
        try container.encodeIfPresent(LOCALE, forKey: .LOCALE)
        try container.encodeIfPresent(LOCATION, forKey: .LOCATION)
        try container.encodeIfPresent(SHOPPING_RETARGETING, forKey: .SHOPPING_RETARGETING)
        try container.encodeIfPresent(TARGETING_STRATEGY, forKey: .TARGETING_STRATEGY)
    }
}

