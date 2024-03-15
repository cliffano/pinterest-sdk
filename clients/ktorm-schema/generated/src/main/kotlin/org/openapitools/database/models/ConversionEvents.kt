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
 * A list of events (one or more) encapsulated by a data object.
 * @param data 
 */
object ConversionEventss : BaseTable<ConversionEvents>("ConversionEvents") {

    /**
     * Create an entity of type ConversionEvents from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = ConversionEvents(
        data = emptyList() /* kotlin.Array<ConversionEventsDataInner> */
    )

    /**
    * Assign all the columns from the entity of type ConversionEvents to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = ConversionEvents()
    * database.update(ConversionEventss, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: ConversionEvents) {
        this.apply {
        }
    }

}


object ConversionEventsConversionEventsDataInner : BaseTable<Pair<kotlin.Long, kotlin.Long>>("ConversionEventsConversionEventsDataInner") {
    val conversionEvents = long("conversionEvents")
    val conversionEventsDataInner = long("conversionEventsDataInner")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[conversionEvents] ?: 0, row[conversionEventsDataInner] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(ConversionEventsConversionEventsDataInner.conversionEvents, entity.first)
            set(ConversionEventsConversionEventsDataInner.conversionEventsDataInner, entity.second)
        }
    }

}

