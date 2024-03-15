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
package org.openapitools.server.models

import org.openapitools.server.models.MMMReportingColumn
import org.openapitools.server.models.MMMReportingTargetingType
import org.openapitools.server.models.TargetingAdvertiserCountry

/**
 * 
 * @param reportName Name of the Marketing Mix Modeling (MMM) report
 * @param startDate Metric report start date (UTC). Format: YYYY-MM-DD
 * @param endDate Metric report end date (UTC). Format: YYYY-MM-DD
 * @param granularity DAY - metrics are broken down daily.<br> WEEK - metrics are broken down weekly.
 * @param level Level of the report
 * @param targetingTypes List of targeting types
 * @param columns Metric and entity columns
 * @param countries A List of countries for filtering
 */
data class CreateMMMReportRequest(
    /* Name of the Marketing Mix Modeling (MMM) report */
    val reportName: kotlin.String,
    /* Metric report start date (UTC). Format: YYYY-MM-DD */
    val startDate: kotlin.String,
    /* Metric report end date (UTC). Format: YYYY-MM-DD */
    val endDate: kotlin.String,
    /* DAY - metrics are broken down daily.<br> WEEK - metrics are broken down weekly. */
    val granularity: CreateMMMReportRequest.Granularity,
    /* Level of the report */
    val level: CreateMMMReportRequest.Level,
    /* List of targeting types */
    val targetingTypes: kotlin.collections.List<MMMReportingTargetingType>,
    /* Metric and entity columns */
    val columns: kotlin.collections.List<MMMReportingColumn>,
    /* A List of countries for filtering */
    val countries: kotlin.collections.List<TargetingAdvertiserCountry>? = null
) 
{
    /**
    * DAY - metrics are broken down daily.<br> WEEK - metrics are broken down weekly.
    * Values: DAY,WEEK
    */
    enum class Granularity(val value: kotlin.String){
        DAY("DAY"),
        WEEK("WEEK");
    }
    /**
    * Level of the report
    * Values: CAMPAIGN_TARGETING,AD_GROUP_TARGETING
    */
    enum class Level(val value: kotlin.String){
        CAMPAIGN_TARGETING("CAMPAIGN_TARGETING"),
        AD_GROUP_TARGETING("AD_GROUP_TARGETING");
    }
}
