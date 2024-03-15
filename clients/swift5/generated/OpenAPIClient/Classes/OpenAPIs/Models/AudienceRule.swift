//
// AudienceRule.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** JSON object defining targeted audience users. Example rule formats per audience type:&lt;br&gt;CUSTOMER_LIST: { \&quot;customer_list_id\&quot;: \&quot;&amp;lt;customer list ID&amp;gt;\&quot;}&lt;br&gt;ACTALIKE: { \&quot;seed_id\&quot;: [\&quot;&amp;lt;audience ID&amp;gt;\&quot;], \&quot;country\&quot;: \&quot;US\&quot;, \&quot;percentage\&quot;: \&quot;10\&quot; }&lt;br&gt;(Valid countries include: \&quot;US\&quot;, \&quot;CA\&quot;, and \&quot;GB\&quot;. Percentage should be 1-10.&lt;br&gt;The targeted audience should be this % size across Pinterest.)&lt;br&gt;VISITOR: { \&quot;visitor_source_id\&quot;: [\&quot;&amp;lt;conversion tag ID&amp;gt;\&quot;], \&quot;retention_days\&quot;: \&quot;180\&quot;, \&quot;event_source\&quot;: {\&quot;&#x3D;\&quot;: [\&quot;web\&quot;, \&quot;mobile\&quot;]}, \&quot;ingestion_source\&quot;: {\&quot;&#x3D;\&quot;: [\&quot;tag\&quot;]}}&lt;br&gt;(Retention days should be 1-540. Retention applies to specific customers.)&lt;br&gt;ENGAGEMENT: {\&quot;engagement_domain\&quot;: [\&quot;www.entomi.com\&quot;], \&quot;engager_type\&quot;: 1}&lt;br&gt;For more details on engagement audiences, see &lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/adtech_ads_v4/#section/November-2021\&quot; target&#x3D;\&quot;_blank\&quot;&gt;November 2021 changelog&lt;/a&gt;. */
public struct AudienceRule: Codable, JSONEncodable, Hashable {

    static let customerListIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    static let visitorSourceIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    static let adAccountIdRule = StringRule(minLength: nil, maxLength: nil, pattern: "/^\\d+$/")
    /** Valid countries include: \"US\", \"CA\", and \"GB\". */
    public var country: String?
    /** Customer list ID. For CUSTOMER_LIST `audience_type`. */
    public var customerListId: String?
    /** The audience account's verified domain. **Required** for ENGAGEMENT `audience_type`. */
    public var engagementDomain: [String]?
    /** Engagement type enum. Optional for ENGAGEMENT `audience_type`. Supported values are `click`, `save`, `closeup`, `comment` and `like`. All engagements are included if this field is not set.  */
    public var engagementType: String?
    /** A Pinterest tag event. Optional for VISITOR `audience_type`. Possible values are `pagevisit`, `signup`, `checkout`, `viewcategory`, `search`, `addtocart`, `watchvideo`, `lead`, and `custom`. This field also accepts a partner-defined Pinterest tag event. */
    public var event: String?
    public var eventData: PinterestTagEventData?
    /** Percentage should be 1-10. The targeted audience should be this % size across Pinterest. */
    public var percentage: Int?
    /** IDs of engaged organic pins. Optional for ENGAGEMENT `audience_type`. For example, \"pin_id:\": [\"34567\"] */
    public var pinId: [String]?
    /** Optional for VISITOR `audience_type`. If `true`, the specified rule on existing engagement data is applied to pre-populate the audience. If `false`, the audience is empty at creation time. The default is `true`. */
    public var prefill: Bool?
    /** Number of days a Pinterest user remains in the audience. Optional for ENGAGEMENT and VISITOR `audience_type`. Accepted range is 1-540. Defaults to 180 if not specified. */
    public var retentionDays: Int?
    /** Audience ID(s). For ACTALIKE `audience_type`.  */
    public var seedId: [String]?
    /** Optional for ENGAGEMENT or VISITOR `audience_type`. For ENGAGEMENT, it is the engaged pin's URL. For VISITOR, you can use it as a string or a {operator: value} object for filtering visitors based on conversion tag event URLs. Supported operators are [ =, !=, contains, not_contains].<br>Example 1:  \"url\": \"http://www.myonlinestore123.com/view_item/shoe\"<br>Example 2: \"url\": {\"contains\": \"/view_item/shoe\"} */
    public var url: [String]?
    /** The conversion tag ID, or the Pinterest tag ID, that you use on your website. For VISITOR `audience_type`. */
    public var visitorSourceId: String?
    /** Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: web, mobile, offline */
    public var eventSource: AnyCodable?
    /** Optional for VISITOR. You can use it as a {'=': [value]}. Supported values are: tag, mmp, file_upload, conversions_api */
    public var ingestionSource: AnyCodable?
    /** Optional for ENGAGEMENT. Engager type value should be 1-2. */
    public var engagerType: Int?
    /** Campaign ID for engagement audience filter. */
    public var campaignId: [String]?
    /** Ad ID for engagement audience filter. */
    public var adId: [String]?
    /** Objective for engagement audience filter. */
    public var objectiveType: [ObjectiveType]?
    /** Ad account ID. */
    public var adAccountId: String?

    public init(country: String? = nil, customerListId: String? = nil, engagementDomain: [String]? = nil, engagementType: String? = nil, event: String? = nil, eventData: PinterestTagEventData? = nil, percentage: Int? = nil, pinId: [String]? = nil, prefill: Bool? = nil, retentionDays: Int? = nil, seedId: [String]? = nil, url: [String]? = nil, visitorSourceId: String? = nil, eventSource: AnyCodable? = nil, ingestionSource: AnyCodable? = nil, engagerType: Int? = nil, campaignId: [String]? = nil, adId: [String]? = nil, objectiveType: [ObjectiveType]? = nil, adAccountId: String? = nil) {
        self.country = country
        self.customerListId = customerListId
        self.engagementDomain = engagementDomain
        self.engagementType = engagementType
        self.event = event
        self.eventData = eventData
        self.percentage = percentage
        self.pinId = pinId
        self.prefill = prefill
        self.retentionDays = retentionDays
        self.seedId = seedId
        self.url = url
        self.visitorSourceId = visitorSourceId
        self.eventSource = eventSource
        self.ingestionSource = ingestionSource
        self.engagerType = engagerType
        self.campaignId = campaignId
        self.adId = adId
        self.objectiveType = objectiveType
        self.adAccountId = adAccountId
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case country
        case customerListId = "customer_list_id"
        case engagementDomain = "engagement_domain"
        case engagementType = "engagement_type"
        case event
        case eventData = "event_data"
        case percentage
        case pinId = "pin_id"
        case prefill
        case retentionDays = "retention_days"
        case seedId = "seed_id"
        case url
        case visitorSourceId = "visitor_source_id"
        case eventSource = "event_source"
        case ingestionSource = "ingestion_source"
        case engagerType = "engager_type"
        case campaignId = "campaign_id"
        case adId = "ad_id"
        case objectiveType = "objective_type"
        case adAccountId = "ad_account_id"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(country, forKey: .country)
        try container.encodeIfPresent(customerListId, forKey: .customerListId)
        try container.encodeIfPresent(engagementDomain, forKey: .engagementDomain)
        try container.encodeIfPresent(engagementType, forKey: .engagementType)
        try container.encodeIfPresent(event, forKey: .event)
        try container.encodeIfPresent(eventData, forKey: .eventData)
        try container.encodeIfPresent(percentage, forKey: .percentage)
        try container.encodeIfPresent(pinId, forKey: .pinId)
        try container.encodeIfPresent(prefill, forKey: .prefill)
        try container.encodeIfPresent(retentionDays, forKey: .retentionDays)
        try container.encodeIfPresent(seedId, forKey: .seedId)
        try container.encodeIfPresent(url, forKey: .url)
        try container.encodeIfPresent(visitorSourceId, forKey: .visitorSourceId)
        try container.encodeIfPresent(eventSource, forKey: .eventSource)
        try container.encodeIfPresent(ingestionSource, forKey: .ingestionSource)
        try container.encodeIfPresent(engagerType, forKey: .engagerType)
        try container.encodeIfPresent(campaignId, forKey: .campaignId)
        try container.encodeIfPresent(adId, forKey: .adId)
        try container.encodeIfPresent(objectiveType, forKey: .objectiveType)
        try container.encodeIfPresent(adAccountId, forKey: .adAccountId)
    }
}

