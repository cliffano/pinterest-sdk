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
 * @param AD_ID The ID of the ad that this metrics belongs to.
 * @param DATE Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`)
 */
object AdsAnalyticsResponseInners : BaseTable<AdsAnalyticsResponseInner>("AdsAnalyticsResponse_inner") {
    val AD_ID = text("AD_ID") /* The ID of the ad that this metrics belongs to. */
    val DATE = date("DATE") /* null */ /* Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`) */

    /**
     * Create an entity of type AdsAnalyticsResponseInner from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AdsAnalyticsResponseInner(
        AD_ID = row[AD_ID] ?: "" /* kotlin.String */ /* The ID of the ad that this metrics belongs to. */,
        DATE = row[DATE]  /* java.time.LocalDate? */ /* Current metrics date. Only returned when granularity is a time-based value (`DAY`, `HOUR`, `WEEK`, `MONTH`) */
    )

    /**
    * Assign all the columns from the entity of type AdsAnalyticsResponseInner to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AdsAnalyticsResponseInner()
    * database.update(AdsAnalyticsResponseInners, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AdsAnalyticsResponseInner) {
        this.apply {
            set(AdsAnalyticsResponseInners.AD_ID, entity.AD_ID)
            set(AdsAnalyticsResponseInners.DATE, entity.DATE)
        }
    }

}


