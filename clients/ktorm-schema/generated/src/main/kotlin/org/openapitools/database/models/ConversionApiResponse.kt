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
 * Schema describing the object in the response, which contains information about the events that were received and processed.
 * @param numEventsReceived Total number of events received in the request.
 * @param numEventsProcessed Number of events that were successfully processed from the events.
 * @param events Specific messages for each event received. The order will match the order in which the events were received in the request.
 */
object ConversionApiResponses : BaseTable<ConversionApiResponse>("ConversionApiResponse") {
    val numEventsReceived = int("num_events_received") /* Total number of events received in the request. */
    val numEventsProcessed = int("num_events_processed") /* Number of events that were successfully processed from the events. */

    /**
     * Create an entity of type ConversionApiResponse from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = ConversionApiResponse(
        numEventsReceived = row[numEventsReceived] ?: 0 /* kotlin.Int */ /* Total number of events received in the request. */,
        numEventsProcessed = row[numEventsProcessed] ?: 0 /* kotlin.Int */ /* Number of events that were successfully processed from the events. */,
        events = emptyList() /* kotlin.Array<ConversionApiResponseEventsInner> */ /* Specific messages for each event received. The order will match the order in which the events were received in the request. */
    )

    /**
    * Assign all the columns from the entity of type ConversionApiResponse to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = ConversionApiResponse()
    * database.update(ConversionApiResponses, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: ConversionApiResponse) {
        this.apply {
            set(ConversionApiResponses.numEventsReceived, entity.numEventsReceived)
            set(ConversionApiResponses.numEventsProcessed, entity.numEventsProcessed)
        }
    }

}


object ConversionApiResponseConversionApiResponseEventsInner : BaseTable<Pair<kotlin.Long, kotlin.Long>>("ConversionApiResponseConversionApiResponseEventsInner") {
    val conversionApiResponse = long("conversionApiResponse")
    val conversionApiResponseEventsInner = long("conversionApiResponseEventsInner")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[conversionApiResponse] ?: 0, row[conversionApiResponseEventsInner] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(ConversionApiResponseConversionApiResponseEventsInner.conversionApiResponse, entity.first)
            set(ConversionApiResponseConversionApiResponseEventsInner.conversionApiResponseEventsInner, entity.second)
        }
    }

}

