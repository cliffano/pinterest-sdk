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
 * @param frequency 
 * @param timerange User entity counts time range
 */
object OptimizationGoalMetadataFrequencyGoalMetadatas : BaseTable<OptimizationGoalMetadataFrequencyGoalMetadata>("OptimizationGoalMetadata_frequency_goal_metadata") {
    val frequency = int("frequency") /* null */
    val timerange = text("timerange").transform({ OptimizationGoalMetadataFrequencyGoalMetadata.Timerange.valueOf(it ?: "THIRTY_DAY") }, { it.value }) /* null */ /* User entity counts time range */


    /**
     * Create an entity of type OptimizationGoalMetadataFrequencyGoalMetadata from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = OptimizationGoalMetadataFrequencyGoalMetadata(
        frequency = row[frequency]  /* kotlin.Int? */,
        timerange = row[timerange]  /* kotlin.String? */ /* User entity counts time range */
    )

    /**
    * Assign all the columns from the entity of type OptimizationGoalMetadataFrequencyGoalMetadata to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = OptimizationGoalMetadataFrequencyGoalMetadata()
    * database.update(OptimizationGoalMetadataFrequencyGoalMetadatas, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: OptimizationGoalMetadataFrequencyGoalMetadata) {
        this.apply {
            set(OptimizationGoalMetadataFrequencyGoalMetadatas.frequency, entity.frequency)
            set(OptimizationGoalMetadataFrequencyGoalMetadatas.timerange, entity.timerange)
        }
    }

}


