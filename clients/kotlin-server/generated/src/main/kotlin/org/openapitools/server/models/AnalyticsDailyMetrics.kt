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

import org.openapitools.server.models.DataStatus

/**
 * 
 * @param dataStatus 
 * @param date Metrics date (UTC): YYYY-MM-DD.
 * @param metrics The metric name and daily value for each requested metric
 */
data class AnalyticsDailyMetrics(
    val dataStatus: DataStatus? = null,
    /* Metrics date (UTC): YYYY-MM-DD. */
    val date: kotlin.String? = null,
    /* The metric name and daily value for each requested metric */
    val metrics: kotlin.collections.Map<kotlin.String, java.math.BigDecimal>? = null
) 

