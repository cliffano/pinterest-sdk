/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package io.swagger.client.model
import play.api.libs.json._

case class ConversionEventsDataInner (
            /* The type of the user event. Please use the right event_name otherwise the event won’t be accepted and show up correctly in reports. <li><code>add_to_cart</code> <li><code>checkout</code> <li><code>custom</code> <li><code>lead</code> <li><code>page_visit</code> <li><code>search</code> <li><code>signup</code> <li><code>view_category</code> <li><code>watch_video</code> */
                  eventName: String,
            /* The source indicating where the conversion event occurred. <li><code>app_android</code> <li><code>app_ios</code> <li><code>web</code> <li><code>offline</code> */
                  actionSource: String,
            /* The time when the event happened. Unix timestamp in seconds. */
                  eventTime: Long,
            /* A unique id string that identifies this event and can be used for deduping between events ingested via both the conversion API and Pinterest tracking. Without this, event's data is likely to be double counted and will cause report metric inflation. Third-party vendors make sure this field is updated on both Pinterest tag and Conversions API side before rolling out template for Conversions API. */
                  eventId: String,
            /* URL of the web conversion event. */
                  eventSourceUrl: Option[String],
            /* When action_source is web or offline, it defines whether the user has opted out of tracking for web conversion events. While when action_source is app_android or app_ios, it defines whether the user has enabled Limit Ad Tracking on their iOS device, or opted out of Ads Personalization on their Android device. */
                  optOut: Option[Boolean],
            /* The third party partner name responsible to send the event to Conversions API on behalf of the advertiser. The naming convention is \"ss-partnername\" lowercase. E.g ‘ss-shopify’ */
                  partnerName: Option[String],
                  userData: ConversionEventsUserData,
                  customData: Option[ConversionEventsDataInnerCustomData],
            /* The app store app ID. */
                  appId: Option[String],
            /* Name of the app. */
                  appName: Option[String],
            /* Version of the app. */
                  appVersion: Option[String],
            /* Brand of the user device. */
                  deviceBrand: Option[String],
            /* User device's mobile carrier. */
                  deviceCarrier: Option[String],
            /* Model of the user device. */
                  deviceModel: Option[String],
            /* Type of the user device. */
                  deviceType: Option[String],
            /* Version of the device operating system. */
                  osVersion: Option[String],
            /* Whether the event occurred when the user device was connected to wifi. */
                  wifi: Option[Boolean],
            /* Two-character ISO-639-1 language code indicating the user's language. */
                  language: Option[String]
)

object ConversionEventsDataInner {
implicit val format: Format[ConversionEventsDataInner] = Json.format
}

