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
 * @param attributionWindows 
 * @param conversionEvent 
 * @param conversionTagId 
 * @param cpaGoalValueInMicroCurrency 
 * @param isRoasOptimized Ad group is ROAS optimized
 * @param learningModeType Conversion learning model type
 */
object OptimizationGoalMetadataConversionTagV3GoalMetadatas : BaseTable<OptimizationGoalMetadataConversionTagV3GoalMetadata>("OptimizationGoalMetadata_conversion_tag_v3_goal_metadata") {
    val attributionWindows = long("attribution_windows") /* null */
    val conversionEvent = text("conversion_event").transform({ OptimizationGoalMetadataConversionTagV3GoalMetadata.ConversionEvent.valueOf(it ?: "PAGE_VISIT") }, { it.value }) /* null */

    val conversionTagId = text("conversion_tag_id") /* null */
    val cpaGoalValueInMicroCurrency = text("cpa_goal_value_in_micro_currency") /* null */
    val isRoasOptimized = boolean("is_roas_optimized") /* null */ /* Ad group is ROAS optimized */
    val learningModeType = text("learning_mode_type").transform({ OptimizationGoalMetadataConversionTagV3GoalMetadata.LearningModeType.valueOf(it ?: "NOT_ACTIVE") }, { it.value }) /* null */ /* Conversion learning model type */


    /**
     * Create an entity of type OptimizationGoalMetadataConversionTagV3GoalMetadata from the model
     */
    override fun doCreateEntity(row: QueryRowSet, withReferences: Boolean) = OptimizationGoalMetadataConversionTagV3GoalMetadata(
        attributionWindows = OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindowss.createEntity(row, withReferences) /* OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows? */,
        conversionEvent = row[conversionEvent]  /* kotlin.String? */,
        conversionTagId = row[conversionTagId]  /* kotlin.String? */,
        cpaGoalValueInMicroCurrency = row[cpaGoalValueInMicroCurrency]  /* kotlin.String? */,
        isRoasOptimized = row[isRoasOptimized]  /* kotlin.Boolean? */ /* Ad group is ROAS optimized */,
        learningModeType = row[learningModeType]  /* kotlin.String? */ /* Conversion learning model type */
    )

    /**
    * Assign all the columns from the entity of type OptimizationGoalMetadataConversionTagV3GoalMetadata to the DML expression.
    *
    * Usage:
    *
    * ```kotlin
    * let entity = OptimizationGoalMetadataConversionTagV3GoalMetadata()
    * database.update(OptimizationGoalMetadataConversionTagV3GoalMetadatas, {
    *     assignFrom(entity)
    * })
    * ```
    * @return the builder with the columns for the update or insert.
    */
    fun AssignmentsBuilder.assignFrom(entity: OptimizationGoalMetadataConversionTagV3GoalMetadata) {
        this.apply {
            set(OptimizationGoalMetadataConversionTagV3GoalMetadatas.attributionWindows, entity.attributionWindows)
            set(OptimizationGoalMetadataConversionTagV3GoalMetadatas.conversionEvent, entity.conversionEvent)
            set(OptimizationGoalMetadataConversionTagV3GoalMetadatas.conversionTagId, entity.conversionTagId)
            set(OptimizationGoalMetadataConversionTagV3GoalMetadatas.cpaGoalValueInMicroCurrency, entity.cpaGoalValueInMicroCurrency)
            set(OptimizationGoalMetadataConversionTagV3GoalMetadatas.isRoasOptimized, entity.isRoasOptimized)
            set(OptimizationGoalMetadataConversionTagV3GoalMetadatas.learningModeType, entity.learningModeType)
        }
    }

}


