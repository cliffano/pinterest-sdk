/**
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 *
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package org.openapitools.client.models

import org.openapitools.client.models.ActionType
import org.openapitools.client.models.Country
import org.openapitools.client.models.CreativeType
import org.openapitools.client.models.Currency
import org.openapitools.client.models.ObjectiveType
import org.openapitools.client.models.OptimizationGoalMetadata

import com.squareup.moshi.Json
import com.squareup.moshi.JsonClass

/**
 * 
 *
 * @param currency 
 * @param billableEvent 
 * @param countries 
 * @param objectiveType 
 * @param optimizationGoalMetadata 
 * @param creativeType 
 */


data class BidFloorSpec (

    @Json(name = "currency")
    val currency: Currency,

    @Json(name = "billable_event")
    val billableEvent: ActionType,

    @Json(name = "countries")
    val countries: kotlin.collections.List<Country>? = null,

    @Json(name = "objective_type")
    val objectiveType: ObjectiveType? = null,

    @Json(name = "optimization_goal_metadata")
    val optimizationGoalMetadata: OptimizationGoalMetadata? = null,

    @Json(name = "creative_type")
    val creativeType: CreativeType? = null

)

