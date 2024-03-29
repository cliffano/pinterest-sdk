//
// AdGroupCommonTrackingUrls.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation
#if canImport(AnyCodable)
import AnyCodable
#endif

/** Third-party tracking URLs.&lt;br&gt; JSON object with the format: {\&quot;&lt;a href&#x3D;\&quot;https://developers.pinterest.com/docs/redoc/#section/Tracking-URL-event\&quot;&gt;Tracking event enum&lt;/a&gt;\&quot;:[URL string array],...}&lt;br&gt; For example: {\&quot;impression\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;], \&quot;click\&quot;: [\&quot;URL1\&quot;, \&quot;URL2\&quot;, \&quot;URL3\&quot;]}.&lt;br&gt;Up to three tracking URLs are supported for each event type. Tracking URLs set at the ad group or ad level can override those set at the campaign level. May be null. Pass in an empty object - {} - to remove tracking URLs.&lt;br&gt;&lt;br&gt; For more information, see &lt;a href&#x3D;\&quot;https://help.pinterest.com/en/business/article/third-party-and-dynamic-tracking\&quot; target&#x3D;\&quot;_blank\&quot;&gt;Third-party and dynamic tracking&lt;/a&gt;. */
public struct AdGroupCommonTrackingUrls: Codable, JSONEncodable, Hashable {

    public var impression: [String]?
    public var click: [String]?
    public var engagement: [String]?
    public var buyableButton: [String]?
    public var audienceVerification: [String]?

    public init(impression: [String]? = nil, click: [String]? = nil, engagement: [String]? = nil, buyableButton: [String]? = nil, audienceVerification: [String]? = nil) {
        self.impression = impression
        self.click = click
        self.engagement = engagement
        self.buyableButton = buyableButton
        self.audienceVerification = audienceVerification
    }

    public enum CodingKeys: String, CodingKey, CaseIterable {
        case impression
        case click
        case engagement
        case buyableButton = "buyable_button"
        case audienceVerification = "audience_verification"
    }

    // Encodable protocol methods

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encodeIfPresent(impression, forKey: .impression)
        try container.encodeIfPresent(click, forKey: .click)
        try container.encodeIfPresent(engagement, forKey: .engagement)
        try container.encodeIfPresent(buyableButton, forKey: .buyableButton)
        try container.encodeIfPresent(audienceVerification, forKey: .audienceVerification)
    }
}

