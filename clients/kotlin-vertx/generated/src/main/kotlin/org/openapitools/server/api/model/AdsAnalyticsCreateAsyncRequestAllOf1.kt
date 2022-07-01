/**
* Pinterest REST API
* Pinterest's REST API
*
* The version of the OpenAPI document: 5.3.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.api.model

import org.openapitools.server.api.model.DataOutputFormat
import org.openapitools.server.api.model.MetricsReportingLevel
import org.openapitools.server.api.model.ReportingColumnAsync

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param columns Metric and entity columns
 * @param level Level of the report
 * @param reportFormat Specification for formatting report data
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class AdsAnalyticsCreateAsyncRequestAllOf1 (
    /* Metric and entity columns */
    @SerializedName("columns") private val _columns: kotlin.Array<ReportingColumnAsync>?,
    /* Level of the report */
    @SerializedName("level") private val _level: MetricsReportingLevel?,
    /* Specification for formatting report data */
    val reportFormat: DataOutputFormat? = "JSON"
) {

        val columns get() = _columns ?: throw IllegalArgumentException("columns is required")
                    
        val level get() = _level ?: throw IllegalArgumentException("level is required")
                    
}

