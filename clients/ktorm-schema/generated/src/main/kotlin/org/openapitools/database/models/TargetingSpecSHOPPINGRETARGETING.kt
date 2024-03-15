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
 * @param lookbackWindow Number of days ago to start lookback timeframe for dynamic retargeting
 * @param tagTypes Event types to target for dynamic retargeting
 * @param exclusionWindow Number of days ago to stop lookback timeframe for dynamic retargeting
 */
object TargetingSpecSHOPPINGRETARGETINGs : BaseTable<TargetingSpecSHOPPINGRETARGETING>("TargetingSpec_SHOPPING_RETARGETING") {
    val lookbackWindow = int("lookback_window") /* null */ /* Number of days ago to start lookback timeframe for dynamic retargeting */
    val exclusionWindow = int("exclusion_window") /* null */ /* Number of days ago to stop lookback timeframe for dynamic retargeting */

    /**
     * Create an entity of type TargetingSpecSHOPPINGRETARGETING from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = TargetingSpecSHOPPINGRETARGETING(
        lookbackWindow = row[lookbackWindow]  /* kotlin.Int? */ /* Number of days ago to start lookback timeframe for dynamic retargeting */,
        tagTypes = emptyList() /* kotlin.Array<kotlin.Int>? */ /* Event types to target for dynamic retargeting */,
        exclusionWindow = row[exclusionWindow]  /* kotlin.Int? */ /* Number of days ago to stop lookback timeframe for dynamic retargeting */
    )

    /**
    * Assign all the columns from the entity of type TargetingSpecSHOPPINGRETARGETING to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = TargetingSpecSHOPPINGRETARGETING()
    * database.update(TargetingSpecSHOPPINGRETARGETINGs, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: TargetingSpecSHOPPINGRETARGETING) {
        this.apply {
            set(TargetingSpecSHOPPINGRETARGETINGs.lookbackWindow, entity.lookbackWindow)
            set(TargetingSpecSHOPPINGRETARGETINGs.exclusionWindow, entity.exclusionWindow)
        }
    }

}


object TargetingSpecSHOPPINGRETARGETINGTagTypes : BaseTable<Pair<kotlin.Long, kotlin.Int>>("TargetingSpecSHOPPINGRETARGETINGTagTypes") {
    val targetingSpecSHOPPINGRETARGETING = long("targetingSpecSHOPPINGRETARGETING")
    val tagTypes = int("tagTypes")

    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean): Pair<kotlin.Long, kotlin.Int> =
        Pair(row[targetingSpecSHOPPINGRETARGETING] ?: 0, row[tagTypes] ?: 0)

    fun AssignmentsBuilder.assignFrom(entity: Pair<kotlin.Long, kotlin.Int>) {
        this.apply {
            set(TargetingSpecSHOPPINGRETARGETINGTagTypes.targetingSpecSHOPPINGRETARGETING, entity.first)
            set(TargetingSpecSHOPPINGRETARGETINGTagTypes.tagTypes, entity.second)
        }
    }

}

