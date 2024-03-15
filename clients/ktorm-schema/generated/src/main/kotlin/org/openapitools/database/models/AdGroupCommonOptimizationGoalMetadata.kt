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
 * Optimization goals for objective-based performance campaigns. **REQUIRED** when campaign's `objective_type` is set to `\"WEB_CONVERSION\"`.
 * @param conversionTagV3GoalMetadata 
 * @param frequencyGoalMetadata 
 * @param scrollupGoalMetadata 
 */
object AdGroupCommonOptimizationGoalMetadatas : BaseTable<AdGroupCommonOptimizationGoalMetadata>("AdGroupCommon_optimization_goal_metadata") {
    val conversionTagV3GoalMetadata = long("conversion_tag_v3_goal_metadata") /* null */
    val frequencyGoalMetadata = long("frequency_goal_metadata") /* null */
    val scrollupGoalMetadata = long("scrollup_goal_metadata") /* null */

    /**
     * Create an entity of type AdGroupCommonOptimizationGoalMetadata from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = AdGroupCommonOptimizationGoalMetadata(
        conversionTagV3GoalMetadata = OptimizationGoalMetadataConversionTagV3GoalMetadatas.createEntity(row, withReferences) /* OptimizationGoalMetadataConversionTagV3GoalMetadata? */,
        frequencyGoalMetadata = OptimizationGoalMetadataFrequencyGoalMetadatas.createEntity(row, withReferences) /* OptimizationGoalMetadataFrequencyGoalMetadata? */,
        scrollupGoalMetadata = OptimizationGoalMetadataScrollupGoalMetadatas.createEntity(row, withReferences) /* OptimizationGoalMetadataScrollupGoalMetadata? */
    )

    /**
    * Assign all the columns from the entity of type AdGroupCommonOptimizationGoalMetadata to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = AdGroupCommonOptimizationGoalMetadata()
    * database.update(AdGroupCommonOptimizationGoalMetadatas, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: AdGroupCommonOptimizationGoalMetadata) {
        this.apply {
            set(AdGroupCommonOptimizationGoalMetadatas.conversionTagV3GoalMetadata, entity.conversionTagV3GoalMetadata)
            set(AdGroupCommonOptimizationGoalMetadatas.frequencyGoalMetadata, entity.frequencyGoalMetadata)
            set(AdGroupCommonOptimizationGoalMetadatas.scrollupGoalMetadata, entity.scrollupGoalMetadata)
        }
    }

}


