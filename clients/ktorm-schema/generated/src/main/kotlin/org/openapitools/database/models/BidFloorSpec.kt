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
 * @param currency 
 * @param billableEvent 
 * @param countries 
 * @param objectiveType 
 * @param optimizationGoalMetadata 
 * @param creativeType 
 */
object BidFloorSpecs : BaseTable<BidFloorSpec>("BidFloorSpec") {
    val currency = long("currency")
    val billableEvent = long("billable_event")
    val objectiveType = long("objective_type") /* null */
    val optimizationGoalMetadata = long("optimization_goal_metadata") /* null */
    val creativeType = long("creative_type") /* null */

    /**
     * Create an entity of type BidFloorSpec from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = BidFloorSpec(
        currency = Currencys.createEntity(row, withReferences) /* Currency */,
        billableEvent = ActionTypes.createEntity(row, withReferences) /* ActionType */,
        countries = emptyList() /* kotlin.Array<Country>? */,
        objectiveType = ObjectiveTypes.createEntity(row, withReferences) /* ObjectiveType? */,
        optimizationGoalMetadata = OptimizationGoalMetadatas.createEntity(row, withReferences) /* OptimizationGoalMetadata? */,
        creativeType = CreativeTypes.createEntity(row, withReferences) /* CreativeType? */
    )

    /**
    * Assign all the columns from the entity of type BidFloorSpec to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = BidFloorSpec()
    * database.update(BidFloorSpecs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: BidFloorSpec) {
        this.apply {
            set(BidFloorSpecs.currency, entity.currency)
            set(BidFloorSpecs.billableEvent, entity.billableEvent)
            set(BidFloorSpecs.objectiveType, entity.objectiveType)
            set(BidFloorSpecs.optimizationGoalMetadata, entity.optimizationGoalMetadata)
            set(BidFloorSpecs.creativeType, entity.creativeType)
        }
    }

}


object BidFloorSpecCountry : BaseTable<Pair<kotlin.Long, kotlin.Long>>("BidFloorSpecCountry") {
    val bidFloorSpec = long("bidFloorSpec")
    val country = long("country")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Long> =
        Pair(row[bidFloorSpec] ?: 0, row[country] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Long>) {
        this.apply {
            set(BidFloorSpecCountry.bidFloorSpec, entity.first)
            set(BidFloorSpecCountry.country, entity.second)
        }
    }

}

