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
package org.openapitools.database.models

import org.ktorm.dsl.*
import org.ktorm.schema.*
import org.ktorm.database.Database
import .*


/**
 * 
 * @param eventName The type of the user event. Please use the right event_name otherwise the event won’t be accepted and show up correctly in reports. <li><code>add_to_cart</code> <li><code>checkout</code> <li><code>custom</code> <li><code>lead</code> <li><code>page_visit</code> <li><code>search</code> <li><code>signup</code> <li><code>view_category</code> <li><code>watch_video</code>
 * @param actionSource The source indicating where the conversion event occurred. <li><code>app_android</code> <li><code>app_ios</code> <li><code>web</code> <li><code>offline</code>
 * @param eventTime The time when the event happened. Unix timestamp in seconds.
 * @param eventId A unique id string that identifies this event and can be used for deduping between events ingested via both the conversion API and Pinterest tracking. Without this, event's data is likely to be double counted and will cause report metric inflation. Third-party vendors make sure this field is updated on both Pinterest tag and Conversions API side before rolling out template for Conversions API.
 * @param userData 
 * @param eventSourceUrl URL of the web conversion event.
 * @param optOut When action_source is web or offline, it defines whether the user has opted out of tracking for web conversion events. While when action_source is app_android or app_ios, it defines whether the user has enabled Limit Ad Tracking on their iOS device, or opted out of Ads Personalization on their Android device.
 * @param partnerName The third party partner name responsible to send the event to Conversions API on behalf of the advertiser. The naming convention is \"ss-partnername\" lowercase. E.g ‘ss-shopify’
 * @param customData 
 * @param appId The app store app ID.
 * @param appName Name of the app.
 * @param appVersion Version of the app.
 * @param deviceBrand Brand of the user device.
 * @param deviceCarrier User device's mobile carrier.
 * @param deviceModel Model of the user device.
 * @param deviceType Type of the user device.
 * @param osVersion Version of the device operating system.
 * @param wifi Whether the event occurred when the user device was connected to wifi.
 * @param language Two-character ISO-639-1 language code indicating the user's language.
 */
object ConversionEventsDataInners : BaseTable<ConversionEventsDataInner>("ConversionEvents_data_inner") {
    val eventName = text("event_name") /* The type of the user event. Please use the right event_name otherwise the event won’t be accepted and show up correctly in reports. <li><code>add_to_cart</code> <li><code>checkout</code> <li><code>custom</code> <li><code>lead</code> <li><code>page_visit</code> <li><code>search</code> <li><code>signup</code> <li><code>view_category</code> <li><code>watch_video</code> */
    val actionSource = text("action_source") /* The source indicating where the conversion event occurred. <li><code>app_android</code> <li><code>app_ios</code> <li><code>web</code> <li><code>offline</code> */
    val eventTime = long("event_time") /* The time when the event happened. Unix timestamp in seconds. */
    val eventId = text("event_id") /* A unique id string that identifies this event and can be used for deduping between events ingested via both the conversion API and Pinterest tracking. Without this, event's data is likely to be double counted and will cause report metric inflation. Third-party vendors make sure this field is updated on both Pinterest tag and Conversions API side before rolling out template for Conversions API. */
    val userData = long("user_data")
    val eventSourceUrl = text("event_source_url") /* null */ /* URL of the web conversion event. */
    val optOut = boolean("opt_out") /* null */ /* When action_source is web or offline, it defines whether the user has opted out of tracking for web conversion events. While when action_source is app_android or app_ios, it defines whether the user has enabled Limit Ad Tracking on their iOS device, or opted out of Ads Personalization on their Android device. */
    val partnerName = text("partner_name") /* null */ /* The third party partner name responsible to send the event to Conversions API on behalf of the advertiser. The naming convention is \"ss-partnername\" lowercase. E.g ‘ss-shopify’ */
    val customData = long("custom_data") /* null */
    val appId = text("app_id") /* null */ /* The app store app ID. */
    val appName = text("app_name") /* null */ /* Name of the app. */
    val appVersion = text("app_version") /* null */ /* Version of the app. */
    val deviceBrand = text("device_brand") /* null */ /* Brand of the user device. */
    val deviceCarrier = text("device_carrier") /* null */ /* User device's mobile carrier. */
    val deviceModel = text("device_model") /* null */ /* Model of the user device. */
    val deviceType = text("device_type") /* null */ /* Type of the user device. */
    val osVersion = text("os_version") /* null */ /* Version of the device operating system. */
    val wifi = boolean("wifi") /* null */ /* Whether the event occurred when the user device was connected to wifi. */
    val language = text("language") /* null */ /* Two-character ISO-639-1 language code indicating the user's language. */

    /**
     * Create an entity of type ConversionEventsDataInner from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = ConversionEventsDataInner(
        eventName = row[eventName] ?: "" /* kotlin.String */ /* The type of the user event. Please use the right event_name otherwise the event won’t be accepted and show up correctly in reports. <li><code>add_to_cart</code> <li><code>checkout</code> <li><code>custom</code> <li><code>lead</code> <li><code>page_visit</code> <li><code>search</code> <li><code>signup</code> <li><code>view_category</code> <li><code>watch_video</code> */,
        actionSource = row[actionSource] ?: "" /* kotlin.String */ /* The source indicating where the conversion event occurred. <li><code>app_android</code> <li><code>app_ios</code> <li><code>web</code> <li><code>offline</code> */,
        eventTime = row[eventTime] ?: 0 /* kotlin.Long */ /* The time when the event happened. Unix timestamp in seconds. */,
        eventId = row[eventId] ?: "" /* kotlin.String */ /* A unique id string that identifies this event and can be used for deduping between events ingested via both the conversion API and Pinterest tracking. Without this, event's data is likely to be double counted and will cause report metric inflation. Third-party vendors make sure this field is updated on both Pinterest tag and Conversions API side before rolling out template for Conversions API. */,
        userData = ConversionEventsUserDatas.createEntity(row, withReferences) /* ConversionEventsUserData */,
        eventSourceUrl = row[eventSourceUrl]  /* kotlin.String? */ /* URL of the web conversion event. */,
        optOut = row[optOut]  /* kotlin.Boolean? */ /* When action_source is web or offline, it defines whether the user has opted out of tracking for web conversion events. While when action_source is app_android or app_ios, it defines whether the user has enabled Limit Ad Tracking on their iOS device, or opted out of Ads Personalization on their Android device. */,
        partnerName = row[partnerName]  /* kotlin.String? */ /* The third party partner name responsible to send the event to Conversions API on behalf of the advertiser. The naming convention is \"ss-partnername\" lowercase. E.g ‘ss-shopify’ */,
        customData = ConversionEventsDataInnerCustomDatas.createEntity(row, withReferences) /* ConversionEventsDataInnerCustomData? */,
        appId = row[appId]  /* kotlin.String? */ /* The app store app ID. */,
        appName = row[appName]  /* kotlin.String? */ /* Name of the app. */,
        appVersion = row[appVersion]  /* kotlin.String? */ /* Version of the app. */,
        deviceBrand = row[deviceBrand]  /* kotlin.String? */ /* Brand of the user device. */,
        deviceCarrier = row[deviceCarrier]  /* kotlin.String? */ /* User device's mobile carrier. */,
        deviceModel = row[deviceModel]  /* kotlin.String? */ /* Model of the user device. */,
        deviceType = row[deviceType]  /* kotlin.String? */ /* Type of the user device. */,
        osVersion = row[osVersion]  /* kotlin.String? */ /* Version of the device operating system. */,
        wifi = row[wifi]  /* kotlin.Boolean? */ /* Whether the event occurred when the user device was connected to wifi. */,
        language = row[language]  /* kotlin.String? */ /* Two-character ISO-639-1 language code indicating the user's language. */
    )

    /**
    * Assign all the columns from the entity of type ConversionEventsDataInner to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = ConversionEventsDataInner()
    * database.update(ConversionEventsDataInners, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: ConversionEventsDataInner) {
        this.apply {
            set(ConversionEventsDataInners.eventName, entity.eventName)
            set(ConversionEventsDataInners.actionSource, entity.actionSource)
            set(ConversionEventsDataInners.eventTime, entity.eventTime)
            set(ConversionEventsDataInners.eventId, entity.eventId)
            set(ConversionEventsDataInners.userData, entity.userData)
            set(ConversionEventsDataInners.eventSourceUrl, entity.eventSourceUrl)
            set(ConversionEventsDataInners.optOut, entity.optOut)
            set(ConversionEventsDataInners.partnerName, entity.partnerName)
            set(ConversionEventsDataInners.customData, entity.customData)
            set(ConversionEventsDataInners.appId, entity.appId)
            set(ConversionEventsDataInners.appName, entity.appName)
            set(ConversionEventsDataInners.appVersion, entity.appVersion)
            set(ConversionEventsDataInners.deviceBrand, entity.deviceBrand)
            set(ConversionEventsDataInners.deviceCarrier, entity.deviceCarrier)
            set(ConversionEventsDataInners.deviceModel, entity.deviceModel)
            set(ConversionEventsDataInners.deviceType, entity.deviceType)
            set(ConversionEventsDataInners.osVersion, entity.osVersion)
            set(ConversionEventsDataInners.wifi, entity.wifi)
            set(ConversionEventsDataInners.language, entity.language)
        }
    }

}


