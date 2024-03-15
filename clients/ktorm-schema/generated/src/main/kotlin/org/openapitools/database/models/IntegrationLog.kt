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
 * Schema for log sent from an integration application.
 * @param clientTimestamp Timestamp in milliseconds of when the log was executed at the client.
 * @param eventType Log event type
 * @param logLevel Log level type
 * @param externalBusinessId 
 * @param advertiserId 
 * @param merchantId 
 * @param tagId 
 * @param feedProfileId 
 * @param message Explanation of the event that occured.
 * @param appVersionNumber Version number of the integration application.
 * @param platformVersionNumber Version number of the platform the integration application is running on.
 * @param error 
 * @param request 
 */
object IntegrationLogs : BaseTable<IntegrationLog>("IntegrationLog") {
    val clientTimestamp = int("client_timestamp") /* Timestamp in milliseconds of when the log was executed at the client. */
    val eventType = text("event_type").transform({ IntegrationLog.EventType.valueOf(it) }, { it.value }) /* Log event type */
    val logLevel = text("log_level").transform({ IntegrationLog.LogLevel.valueOf(it) }, { it.value }) /* Log level type */
    val externalBusinessId = text("external_business_id") /* null */
    val advertiserId = text("advertiser_id") /* null */
    val merchantId = text("merchant_id") /* null */
    val tagId = text("tag_id") /* null */
    val feedProfileId = text("feed_profile_id") /* null */
    val message = text("message") /* null */ /* Explanation of the event that occured. */
    val appVersionNumber = text("app_version_number") /* null */ /* Version number of the integration application. */
    val platformVersionNumber = text("platform_version_number") /* null */ /* Version number of the platform the integration application is running on. */
    val error = long("error") /* null */
    val request = long("request") /* null */

    /**
     * Create an entity of type IntegrationLog from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = IntegrationLog(
        clientTimestamp = row[clientTimestamp] ?: 0 /* kotlin.Int */ /* Timestamp in milliseconds of when the log was executed at the client. */,
        eventType = row[eventType] ?: IntegrationLog.EventType.valueOf("") /* kotlin.String */ /* Log event type */,
        logLevel = row[logLevel] ?: IntegrationLog.LogLevel.valueOf("") /* kotlin.String */ /* Log level type */,
        externalBusinessId = row[externalBusinessId]  /* kotlin.String? */,
        advertiserId = row[advertiserId]  /* kotlin.String? */,
        merchantId = row[merchantId]  /* kotlin.String? */,
        tagId = row[tagId]  /* kotlin.String? */,
        feedProfileId = row[feedProfileId]  /* kotlin.String? */,
        message = row[message]  /* kotlin.String? */ /* Explanation of the event that occured. */,
        appVersionNumber = row[appVersionNumber]  /* kotlin.String? */ /* Version number of the integration application. */,
        platformVersionNumber = row[platformVersionNumber]  /* kotlin.String? */ /* Version number of the platform the integration application is running on. */,
        error = IntegrationLogClientErrors.createEntity(row, withReferences) /* IntegrationLogClientError? */,
        request = IntegrationLogClientRequests.createEntity(row, withReferences) /* IntegrationLogClientRequest? */
    )

    /**
    * Assign all the columns from the entity of type IntegrationLog to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = IntegrationLog()
    * database.update(IntegrationLogs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: IntegrationLog) {
        this.apply {
            set(IntegrationLogs.clientTimestamp, entity.clientTimestamp)
            set(IntegrationLogs.eventType, entity.eventType)
            set(IntegrationLogs.logLevel, entity.logLevel)
            set(IntegrationLogs.externalBusinessId, entity.externalBusinessId)
            set(IntegrationLogs.advertiserId, entity.advertiserId)
            set(IntegrationLogs.merchantId, entity.merchantId)
            set(IntegrationLogs.tagId, entity.tagId)
            set(IntegrationLogs.feedProfileId, entity.feedProfileId)
            set(IntegrationLogs.message, entity.message)
            set(IntegrationLogs.appVersionNumber, entity.appVersionNumber)
            set(IntegrationLogs.platformVersionNumber, entity.platformVersionNumber)
            set(IntegrationLogs.error, entity.error)
            set(IntegrationLogs.request, entity.request)
        }
    }

}


