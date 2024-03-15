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
package org.openapitools.server.api.model


        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param clickWindowDays 
 * @param engagementWindowDays 
 * @param viewWindowDays 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class OptimizationGoalMetadataConversionTagV3GoalMetadataAttributionWindows (
    val clickWindowDays: kotlin.Int? = null,
    val engagementWindowDays: kotlin.Int? = null,
    val viewWindowDays: kotlin.Int? = null
) {

}

